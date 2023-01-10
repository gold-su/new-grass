#include <iostream>

using namespace std;

int main(){
	 
	bool j = false;
	do{  //do while문은 반복을 실행하고 조건을 검사한다 / while문은 조건을 검사하고 반복을 한다
		cout << "1회 실행" << endl;
	}while (j);  //j는 false기 때문에 멈추지만 1회 실행
	//while문 같은 경우에는 bool형의 false값이 나온다면 실행이 1회조차 되지 않았지만,
	//do while문은 먼저 반복문을 1회 실행 후 조건을 보기 때문에
	//값이 false라고 해도 최소한 1회의 값이 나오게 된다.
	//참인 경우에는 반복.
	
	
	return 0;
}