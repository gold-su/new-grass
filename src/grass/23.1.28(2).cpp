#include <iostream>

using namespace std;

const int SIZE = 8; 

int sumArr(int*, int*); 

int main(){ 
	    
	int arr[SIZE] = { 1,2,4,8,16,32,64,128}; 
	
	int sum = sumArr(arr, arr+SIZE);
	cout << "함수의" << SIZE << "가지의 합은 "<< sum << " 입니다.\n";
	
 	sum = sumArr(arr, arr + 3);
	cout <<"함수의" << "세번쨰 인덱스 까지의 합은" << sum << " 입니다."; 
	return 0;
}  
              
int sumArr(int* begin, int* end){ //함수에게 배열의 시작 주소와, 끝 주소를 부여한뒤
	int total = 0;
	int* pt; //반복문을 위한 카운터로써 포인터를 하나 선언
	
	for(pt = begin; pt != end; pt++) //pt의 시작 주소를 놓고, pt++으로 포인터를 증가시킨후, 배열의 끝주소가 된다면 반복문이 종료됨
		total += *pt; //total에게 *pt를 누적시킴
	
	return total; 
}