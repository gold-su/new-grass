#include <iostream>

using namespace std;

const float PIE = 3.14;
void cheers(int n);    //사용하는 함수의 원형을 미리 명시
float circle(int x);    //변수와 함수를 사용하려면 미리 정의되어야 한다.

int main(){ 
	//메인 함수를 구성
	int a;
	cout << "하나의 수를 입력하십시오." <<endl;
	cin >> a;
	cheers(a); //여기서 입력받은 a가 밑의 void에 있는 int n에 연결이 되고 입력받은 수가 4라고 한다면
	           //밑 void 조건식의 i<n(4)가 된후, 0,1,2,3 까지 수가 오르기 때문에 출력이 원할하게 된다.
	 //여기서 치얼스를 입력받은 직후 바로 밑의 함수 void로 넘어가서 실행후 다시 위로 올라오게 된다, void는 return 생략
	int b;
	cout <<"원의 반지름 길이를 입력하십시오." << endl;
	cin >> b;
	float c = circle(b); //위와 동일
	cout << "원의 넓이는 "<< c << " 입니다." << endl;
}
     //cheers은 이 함수를 호출한 함수로부터 인트형 함수 하나를 담는다.
void cheers(int n) { //void로 선언되어있으니 리턴값이 없는 함수 //함수의 내용을 정의
	for(int i = 0; i<n; i++){
		cout << "Cheers!" << endl;
	}
	//return을 생략해도됨 void이기 때문에
}
    //circle은 이 함수를 호출한 함수로부터 인트형 함수 하나를 담는다.
float circle(int x){
	return x * x * PIE; //소수점이 나올수 있기 때문에 float형태이다. 실수형 
}