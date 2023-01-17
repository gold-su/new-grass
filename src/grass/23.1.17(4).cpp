#include <iostream>

using namespace std;

int main(){ //분기 구문 : if 구문 
	 // if(조건)     //if는 조건의 값이 참인지 거짓인지 판단
	 // 	코드   //참이라면 코드를 실행, 거짓이라면 if구문을 무시후 실행
	if(false){
		cout << "#1";
	}
	else{ //위의 if가 거짓이라면 이 else가 실행
		if(true) { //위 else가 실행되면 이 if구문이 실행
			cout << "#2";
		}
		else { //거짓이라면 이 else가 실행
			cout << "#1";
		}
	}
	
	cout << "프로그램이 종료.";
	
	if(false){
		cout << "#1";
	}
	else if(true) { //else if로 더 편리하게 코드정리가 가능하다
		cout << "#2";
	}
	else { 
		cout << "#1";
	}
	
	
	
	
	
	return 0;
}