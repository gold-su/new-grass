#include <iostream>

struct MyStruct{
	
	char name[20]; //이름의 크기 설정
	int age; // age를 정수 선언
};


int main(){
	
	using namespace std;

	
	//동적 구조체 생성
	//temp* ps = new temp;
	
	MyStruct* temp = new MyStruct; //구조체를 연산자로 동적(다이나믹)으로 선언
	
	//new를 통해서 동적으로 선언된 구조체를 -> 를 이용해서 그 구조체의 멤버의 접근
	
	
	cout << "당신의 이름을 입력하십시오\n";
	cin >> temp->name; // . 대신에 -> 연산자를 통해서 접근
	
	cout << "당신의 나이를 입력하시오\n";
	cin >> (*temp).age; // -> 가 싫다면 (*temp)를 한다면 . 연산자를 통해서 접근 가능
	
	cout << "안녕하세요! " << temp->name << "씨!\n"; // 입력한 값을 확인하는 코드
	cout << "당신은 " << temp->age << "살 이군요!";
		
	
	return 0;
}