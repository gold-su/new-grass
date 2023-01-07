#include <iostream>


using namespace std;

int main() {
	//열거체(eunm)
	//기호 상수를 만드는 것에 대한 또 다른 방법. (상수 한 번 선언 후 변경할수 없는 수)
	
	enum spectrum { red, orange, yellow, green,
	blue, violet, indigo, ultraviolet };
	/*
	1. spectrum을 새로운 데이터형 이름으로 만든다. 
	2. red, orange, yellow.. 0에서부터 7까지 정수 값을 각각
	나타내는 기호 상수로 만든다.
	*/
	
	spectrum a = orange; //열거자들 끼리의 연산은 불가 ex) red + orange 
	
	cout << a << endl;
	
	int b; 
	//열거자들 끼리는 연산이 안되지만, int형 변수로 선언한 b에 
	b= blue; //블루라는 열거자의 값(4)를 대입하는게 가능하고
	b = blue + 3; //그 뒤 산술 연산자는 가능하다 blue는 4의 의미를 가진 후에 연산됨.
	
	cout << b << endl;
	
	/*
	enum spectrum { red=0, orange=2, yellow=6, green,
	blue, violet, indigo, ultraviolet }; 
	위처럼 열거자들의 초기화 값을 지정할수 있다.
	위처럼 열거자들의 값을 초기화할때는 정수만 가능하다,
	그리고 뒤에 있는 열거자들의 값은 그 전 정수값 + 1로 지정된다.
	yellow = 6이라면 green은 7로 지정됨
	*/
	
	return 0;

}