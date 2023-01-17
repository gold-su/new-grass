#include <iostream>

using namespace std;

int main(){ //분기 구문 : if 구문 
	 // if(조건)     //if는 조건의 값이 참인지 거짓인지 판단
	 // 	코드   //참이라면 코드를 실행, 거짓이라면 if구문을 무시후 실행
	if(false){
		cout << "조건이 참.";
		cout << "참참참."<< endl;   //여러줄을 입력할떄는 대괄호 활용
	}
	else{ //조건이 거짓이라면 else가 실행된다
		cout << "조건이 ";
		cout << "거짓 입니다." << endl;
	}
	
	cout << "프로그램이 종료.";
	
	
	
	return 0;
}