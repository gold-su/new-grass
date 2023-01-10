#include <iostream>

using namespace std;

int main(){
	
	//while문, do while문
	//위 두개는 조건(i < 3)을 검사하는 부분만 사용함
	
	string str = "dongsu"; 
	bool a = true;
	bool b = false;
	while (a){ //while문은 false가 나와야 프로그램이 끝난다. a 실행시 계속 실행, b 실행시 바로 종료
		}
	//for문 <-> while문 서로의 코드 안에 존재가능/ 불이익도 없음
	//두 개의 차이점은 while 내부에는 bool형 데이터 하나만으로 실행할 수 있다/ 즉 관계표현식 없이 실행가능
	//for문은 카운터의 값을 반복문 내부에서 초기화가 가능하다 
	//ex)
	for (int i = 0; i < 5; i++){
		
		
	}   //for문 for에서 정의되었기 때문에 for문 밖에서는 사용불가
	
	
	
	 int j = 0; //while문을 사용할때에는 밖에서 선언되었기 때문에 밖에서도 사용 가능
	
	while (j<3){
		j++;
	}
	cout << i << endl; //i는 for문 안에 있기 때문에 오류가 뜸
	cout << j << endl;
	
	return 0;
}