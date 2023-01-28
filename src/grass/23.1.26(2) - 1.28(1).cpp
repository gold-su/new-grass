#include <iostream>

using namespace std;

const int SIZE = 8; //정수형 size배열의 크기
//배열의 모든 합을 구하는 함수
int sumArr(int[], int); //원론적으로 접근을 한다면, int[]가 아니라 int*이다.

int main(){ 
	    //arr는 배열이 아니라 포인터(주소로 인식)임
	int arr[SIZE] = { 1,2,4,8,16,32,64,128}; //arr 배열 선언
	//arr = &arr[0] arr의 첫번째 원소[0]의 주소로 인식된다
	cout << "size of arr" << sizeof arr << endl;  //변수가 차지하고 있는 공간을 출력 //여기서는 배열 전체의 크기를 의미
	int sum = sumArr(arr, SIZE); // 배열과 배열의 사이즈를 알려주어 int형 변수를 반환하는 sumArr라는 함수를 만든다
	//total에서 돌아온 값이 sum에 합쳐지게 된다.
	cout <<"함수의 총 합은"<<sum <<"입니다.";
	return 0;
}  
               //원론적으로 접근을 한다면, int arr[]가 아니라 int* arr이다. 
int sumArr(int arr[], int n){ //배열과 배열의 사이즈를 받아옴. //sumarr에서 배열의 첫번째 크기를 의미
	int total = 0;  //total은 0
	cout << "size of arr" << sizeof arr << endl; //변수가 차지하고 있는 공간을 출력
	for(int i = 0; i<n; i++)  //베열의 사이즈인 n = 8, i는 0~7까지 실행됨.
		total += arr[i]; //배열의 0~7까지의 해당하는 수를 total계속 더하게 됨
	
	return total; //return을 통해서 total을 main에게 돌려줌 
}