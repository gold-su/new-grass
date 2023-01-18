#include <iostream>

using namespace std;

int main(){ //컴퓨터가 여러개의 구문 중 하나를 선택하는 구문
	
	int i = 0;
	while (true) //값이 true이기 때문에 무한반복
	{
		cout << "i의 값은"<<i<< " 입니다." << endl; //i의 값을 알려줌
		if(i>10){ //i의 값이 10을 넘어가게 된다면 밑의 braek 구문 실행
			break;}//while문을 종료시킴
		i++; //i의 값이 1씩 증가
	}
	cout << "while문이 끝났습니다.\n";
	
	
	
	return 0;
}