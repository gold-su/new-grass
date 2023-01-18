#include <iostream>

using namespace std;

int main(){ //컴퓨터가 여러개의 구문 중 하나를 선택하는 구문
	
	int a;
	cin >> a;
	
	switch(a) //switch구문은 정수값을 기준으로 판단함, float형이나 char형 등의 다른 조건을 검사가능
	{
		case 1: //입력된 값이 1이라면 밑의 cout이 실행
			cout << "입력하신 값은 1입니다.\n";
			break;//break구문은 모든 루프 구문의 포함이 가능하다. 용도는 뒤의 있는 코드를 건너뛰는 용도이고 이 구문이 없으면 1을 입력시에 밑에 있는 모든 코드가 실행된다.
		case 2: //입력된 값이 2이라면 밑의 cout이 실행
			cout << "입력하신 값은 2입니다.\n";
			break;
		case 3: //입력된 값이 3이라면 밑의 cout이 실행
			cout << "입력하신 값은 3입니다.\n";
			break;
	//지정한 경우의수가 아니라면 밑의 switch구문이 실행되지 않고 생략됨
			
		default: //default가 있다면 지정한수 이외의 다른 모든 경우의 수가 default로 실행됨
			cout << "입력하신 값은 1,2,3 이외의 다른 값입니다.\n";
			break;
	}   
	
	cout << "switch 구문이 끝났습니다.\n";
	
	return 0;
}