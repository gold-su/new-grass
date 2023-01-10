#include <iostream>

using namespace std;

int main(){
	
	//while문, do while문
	//위 두개는 조건(i < 3)을 검사하는 부분만 사용함
	
	string str = "dongsu"; //""를 사용한 문자열은 \0(null)를 포함하고 있음
	int i = 0; //for문도 소괄호에서 정의하지 않고, 미리 정의해도됨
	//for(i; i < 3; i++){}//하지만 소괄호 안에서 정의하는 것이 for의 장점
	while (str[i] != '\0'){         // 값이 true 혹은 flase로 나오게 된다. (bool형 데이터도 0이외에 모든 것을 false, 0을 true로 반환)
		//str[i] 여기서 i의 값은 위 조건의 \0이 나와야 멈추기 때문에 dongsu의 끝까지 실행 후 ""에 포함된 \0에서 멈춤
		cout << str[i] << endl;
		i++; //증가 연산자를 while문 몸체안에 설정을 해줘야함 안그러면 무한반복
	}
	
	
	return 0;
}