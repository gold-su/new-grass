#include <iostream>

using namespace std;

int main() {
	
	int a;
	a = 86 ;
	
	int b = 96;
	
	a = 5; //변수이기 위에서 ㅁ = ㅁ 라고 지정해도 값이 변할수 있음
	b = 5;
	
	cout << "a = " << a << ", b = " << b << endl; //변수 앞에 &를 붙혀서 cout하면 주소를 볼수있음.
	 
	return 0;
}

	// { int b;
	// {
	//  	int a; // << int a;가 괄호안에 있어서
	//  	b = 3;
	// 	 }	
	// 		 a =5; // 이 int a는 사용불가 함수지정 x 
	// }
// int a; < 선언
// a = 7; << 대입
// int b = 3; << 초기화

