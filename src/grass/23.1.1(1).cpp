#include <iostream>


using namespace std;

int main() {
	//new 연산자
	/*
	어떤 데이터형을 원하는지 neew 연산자에게 알려주면,
	new 연산자는 그에 알맞은 크기의 메모리 블록을
	찾아내고 그 블록의 주소를 리턴한다.
	*/
	
	int a;
	int* b = &a;   //첫번째 방법
	
	//두번째 방법
	int* pointer = new int; //new는 뒤에 있는 데이터를 확인 후, 몇 바이트가 필요한지 계산한다
	//int형은 4바이트
	
	//delete 연산자
	/*
	사용한 메모리를 다시 메모리 폴로 환수
	환수된 메모리는 프로그램의 다른 부분이 다시 사용
	*/
	
	int* ps = new int; 
	// (코드로 메모리 사용)
	delete ps; //ps에 할당된 메모리를 다시 프로그램이 사용할수 있도록 반환해준다
	//new를 사용하면 delete는 필수적으로 사용해야됨
	//그렇지 않다면 대입은 되었지만 메모리 낭비가 됨 스케일이 커지면 아예 먹통이 됨
	
	
	/* delete를 사용하는 규칙
	/*
	1. new로 대입하지 않은 메모리는 delete로 해제할 수 없다. 
	2. 같은 메모리 블록을 연달아 두 번 delete로 해제할 수 없다.
	3. new[]로 메모리를 대입할 경우 delete[]로 해제한다.
	4. 대괄호를 사용하지 않았다면 delete도 대괄호를 사용하지 않아야 한다.	
	*/
	
	
	
	
	return 0;
}