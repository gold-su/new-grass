#include <iostream>

	using namespace std;

int main () {
	//데이터형 변환
	// 1. 특정 데이터형의 변수에 다른 데이터형의 값을 대입했을 때
	// 2. 수식에 데이터형을 혼합하여 사용했을 때
	// 3. 함수에 매개변수를 전달할 때
	int a = 3.14592 ;
	cout << a << endl;
	//강제적으로 데이터형 변환
	//typeName(a) (typeName)a
	char ch = 'M'; //M은 아스키코드 상으로 77
	cout << (int)ch << ", " << int(ch) << endl; //int(정수표현)로 변경되어서 출력
	
	//c++에서는 static_cast<typeName>이 생김 차이점은 차후에
	
	char ct = 'T'; //T은 아스키코드 상으로 84
	cout << static_cast<int>(ct) << ", " << int(ch) << endl;
	
	return 0;
}