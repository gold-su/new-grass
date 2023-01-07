#include <iostream>


using namespace std;

int main() {
	
	double* p3 = new double[3]; //double형 데이터 3개를 저장할 수 있는 공간을 대입
	p3[0] = 0.2;                  //p3를 배열 이름처럼 취급
	p3[1] = 0.5;
	p3[2] = 0.8;
	
	cout << "p3[1] is " << p3[1] << ".\n";
	
	p3 =p3 + 1 ; //포인터를 증가시킴 //값에 +1이 아니라 배열이 한칸 늘어나고 그 배열의 값이 출력됨
	//배열 이름은 값을 변경할 수 없지만, 포인터는 값을 변경할 수 있음
	
	cout << "Now p3[0] is " << p3[0] << " and ";
	
	cout << "p3[1] is " << p3[1] << ".\n";
	
	p3 = p3 -1;   //다시 시작 위치를 지시
	delete[] p3;  //배열 메모리르 해제
	//cin.get();		
	return 0; //////asdasd
}