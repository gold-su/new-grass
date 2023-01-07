#include <iostream>

	using namespace std; //필수 

int main() { //main 필수
     //원의 반지름 구하는 프로그램. [반지름 * 반지름 * 파이]
	
	const float PIE = 3.14;
	//const 제한자로 상수(변할필요없는수) 선언가능
	int a = 4;
    float s = a * a * PIE;
	 //float는 소수까지 표현가능
	cout << s ;
	
	return 0;
}
