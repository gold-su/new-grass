#include <iostream>

using namespace std;

int main() {
	
    //배열 array 같은 테이터형의 집합
	//typeName arrayName[arraySize]
	
	short month[12] = {1, 2, 3};
	//month[] 안에 사이즈를 설정해주지 않으면 컴파일러가 초기화 값의 갯수를 헤아려 배열 원소 갯수를 저장.
	//첫번째 원소를 0으로 하면 나머지 원소도 자동적으로 0으로 초기화된다. */
	//즉 month[12] = { 0 }; 이라면 12개의 원소들이 모두 0
	
	cout << month[2] << endl;
	//montg[5]로 cout을 한다면 0이 출력.
	
	
	//문자열 : 문자의 열
	char a[5] = {'h','e','l','l','o'};
	//null문자를 지정해줘야함 사이즈를 하나 늘린 뒤에 '\0'를 선언해줘야
	//hello뒤에 이상한 문자가 나오지 않게됨.
	cout << a << endl;
	
	//위에 방법보다 더 효울적인 방법은  {배열}
	char a[] = "Hello"; //명시적으로 ""는 null문자를 포함하고 있기 때문에 정상적으로 출력됨
	
	
	
	return 0;
}