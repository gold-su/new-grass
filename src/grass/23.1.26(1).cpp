#include <iostream>

using namespace std;

const int SIZE = 8; //정수형 size배열의 크기
//배열의 모든 합을 구하는 함수
int sumArr(int[], int);

int main(){ 
	
	int arr[SIZE] = { 1,2,4,8,16,32,64,128}; //arr 배열 선언
	int sum = sumArr(arr, SIZE); // 배열과 배열의 사이즈를 알려주어 int형 변수를 반환하는 sumArr라는 함수를 만든다
	//total에서 돌아온 값이 sum에 합쳐지게 된다.
	cout <<"함수의 총 합은"<<sum <<"입니다.";
	return 0;
}  

int sumArr(int arr[], int n){ //배열과 배열의 사이즈를 받아옴.
	int total = 0;  //total은 0
	
	for(int i = 0; i<n; i++)  //베열의 사이즈인 n = 8, i는 0~7까지 실행됨.
		total += arr[i]; //배열의 0~7까지의 해당하는 수를 total계속 더하게 됨
	
	return total; //return을 통해서 total을 main에게 돌려줌 
}