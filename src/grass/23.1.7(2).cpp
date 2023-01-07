#include <iostream>

#define SIZE 20

using namespace std;

int main(){
	
	
	char animal[SIZE];
	char* ps;
	
	cout <<"동물 이름을 입력하십시오\n";
	cin >> animal;
	
	ps = new char[strlen(animal)+1]; //배웠다시피 strlen은 뒤에 animal이 입력 받은 글자수의 크기를 나타냄
	strcpy(ps, animal); //strcpy는 animal의 값을 ps에 복사하는 역할
	
	cout << "입력하신 동물 이름을 복사하였습니다" << endl;
	cout << "입력하신 동물 이름은 " <<animal <"이고, 그 주소는" << (int*)animal << " 입니다." << endl;
	cout << "복사된 동물 이름은 " << ps << "이고, 그 주소는 " << (int*)ps << " 입니다." << endl;

	return 0; 
	
	
	// 보안상의 문제로 실행이 안되서, strlen,strlen 말고 다른 함수를 사용해야됨
}