#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define SIZE 20  //상수의 사이즈를 20으로 설정

using namespace std;

int main(){

    char animal[SIZE]; // 위에서 상수의 사이즈가 20으로 설정됨
    char* ps;

    cout << "동물 이름을 입력하십시오.\n";
    cin >> animal; //입력받은 값을 animal이라는 char형에 값을 저장

    ps = new char[strlen(animal) +1]; //사용자가 몇글자의 동물을 입력하든 new연산자를 통해 충분한 공간을 부여하는 의미
	//포인터 변수 ps를 new(뒤에 있는 데이터 확인 후, 몇 바이트가 필요한지 계산)를 통해 몇 글자를 입력하든 그보다 한칸 더 공간을 지정해줌
    //sterlen(함수)는 괄호에 있는 변수의 크기를 반환하는 함수
	strcpy(ps, animal); //strcpy는 animal의 값을 ps에 복사하는 함수

    cout << "입력하신 동물 이름을 복사하였습니다." << endl;
    cout << "입력하신 동물 이름은 " << animal << "이고, 그 주소는 " << (int*)animal << " 입니다." << endl;
    cout << "복사된 동물 이름은 " << ps << "이고, 그 주소는 " << (int*)ps << " 입니다." << endl;
     
    delete[] ps;
    return 0;
}