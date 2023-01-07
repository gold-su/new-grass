#include <iostream>
#include <cstring>

using namespace std;

int main() {
	
	//c++에서 문자을 다루는 방법 중 하나인 sting
	/*
	C스타일로 string 객체를 초기화할 수 있다.
	cin을 사용하여 string 객체에 키보드 입력을 저장할 수 있다.
	cout을 사용하여 string 객체에 키보드 입력을 저장할 수 있다.
	배열 표기를 사용하여 string 객체에 저장되어 있는 개별적인 문자들에 접근할 수 있다.
	
	배열을 다른 배열에 통째로 대입할 수 없다.
	but, string에서는 가능
	*/
	char char1[20];
	char char2[20] = "goguma";
	string str1;
   	string str2 = "gogumi";
	//char1 = char2 ; //얘는 배열에 다른 배열을 통째로 대입 불가(다른 것도 마찬가지)
	str1 = str2; //string은 배열에 다른 배열을 통째로 대입 가능
	cout /*<< char1 */<< str1 <<endl;
	//string은 배열처럼 index를 통해서 개별적인 문자에 접근가능
	cout << str1[2] <<endl; //를 출력하게 된다면 g가 출력됨
	
	return 0;
}