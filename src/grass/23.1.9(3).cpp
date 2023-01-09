#include <iostream>

using namespace std;

int main(){
	
	//반복문 for
	
	for(int i = 0; i < 5; i++){
	//int i는 0 //i가 5보다 작을때까지 반복 실행 //한 번의 반복마다 i +1
		
		cout << i << "번째 입니다." <<endl;
		
	}
	
	
	// i**, i--  <<--- 증가,감소연산자
	int a = 10;
	int b = 10;
	
	cout << "a는 " << a << ", b는" << b  <<endl;
	cout << "a++는 " << a++ <<endl; //++가 뒤에 붙는다면 a의 값을 판단 후 나중에 증가 (출력은 10)
	cout << "++b는 " << ++b <<endl; //++가 앞에 붙는다면 b의 값의 1을 증가 후 출력 (출력은 11)
	//ㅁ++이라면 그 실행 문구에서는 1이 더해지지 않지만, 그 밑에서 만들어진 코드에서 a를 출력하면 1이 더해진 값으로 출력
	cout << "a는 " <<a<< " , b는 " << b << endl; //a가 판단된 후라서 a의 값은 11
	
	return 0;
}