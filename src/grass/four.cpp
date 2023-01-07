#include <iostream>
	using namespace std; //필수 

int main() { //main 필수

	//char, bool
	//char은 작은 문자형 표현 < c++은 아스키코드 사용 문자마다 대응대는 숫자 문자를 사용해도 컴퓨터는 숫자로 받아들임.
	//bool은 0 or 1만 표현가능 0은 false 1은 fure [조건문] 저장을 0이외에 모든 수를 1로 저장
	int a=88;
	char b = a;
	char c = 'b'; //''로 문자 한글자 출력 가능 , char는 하나만 출력하는 함수라 문자열이라면 null을 만나면 종료
	// ""은 null 명시적으로 포함 ex) "ab"이라면 a\0b\0 이런식.
	//''은 null = \0 직접 지정해줘야 됨.
	//한글은 아스키코드 x 유니코드 o 
	cout << b << ", "<< c << endl; //출력은 x 아스키 코드에서 88이 "x"
	
	bool a = 0;
	bool b = 1;
	bool c = 123; //boll은 0이외에 숫자는 1로 출력
	
	cout << a << ", " << b << ", " << c ;
	
	
	
	return 0;
}
