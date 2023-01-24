#include <iostream>

using namespace std;

void hellCPP(int); //함수를 사용할때에는, 항상 위에 선언을 해줘야함

int main(){ //사용자에게 값을 입력받아, 그 수 만큼 "Hello C++"을 출력하는 함수
	
	int times;
	cout << "정수를 입력하십시오.\n";
	cin >> times;
	hellCPP(times); //함수를 호출할때 times(입력받은값)을 넣어서 호출
	return 0;
}
             //int n으로 변수의 공간을 만든 후, 함수가 위에서 호출된 시점부터 times에 저장된 값이 된다.
void hellCPP(int n) { //n이 5라면 (i가 0일때) (i가 1일때) (i가 2일때) (i가 3일때) (i가 4일때)  //다섯번 출력 
	for (int i = 0; i<n; i++) //저장된 값만큼 반복을 통해서 출력하게 된다.
		cout << "Hello, C++!\n";
}   //사용자의 필요의 따라서 동작 반복을 할수 있음. 
