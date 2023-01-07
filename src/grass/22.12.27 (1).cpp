#include <iostream>
#include <cstring>

using namespace std;

int main() {
	
    const int size = 20;
	char name1[size];
	char name2[size] = "DongSu Park";
	
	cout << "안녕하시와요 저는" << name2;
	cout << "입니다.. 성함이 어떻게 되시나요? \n";
	// cin >> name1 ; //<< >> 이 꺾세에 따라서 구분할수 있다, COUT << "ㅁㅁ"은 COUT에게 입히는거고, CIN >> name1 이런식이면 사용자가 cin으로 name1에다가 입히는 것.
	//cin은 공백(화이트스페이스)가 있다면 뒤 문자를 인식하지 못함. ex) dongsu park이라면 dongsu까지만 6자로 인식
	cin.getline(name1, size); //그냥 sin은 공백을 인식못하니 get과 getline을 사용
	//cin.겟라인(사용자의 입력을 저장할 변수, 사용자의 입력을 받을 최대 크기) <처럼 명시해준다면 공백도 포함하여서 저장할수 있다.
	cout << "음," <<name1 << "씨, 당신의 이름은";
	cout << strlen(name1) << "자 입니다만\n";
	cout << sizeof(name1) << " 바이트 크기의 배열에 저장했사와요. \n";
	cout << "이름이" <<name1[0] << "자로 시작하시네요.\n";
	name2[6] = '\0';
	cout << "제 이름은 " << name2 << "입니다" << endl;
	
	
	return 0;
}