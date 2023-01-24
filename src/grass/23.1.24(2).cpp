#include <iostream>

using namespace std;

void hellCPP(int, int); //활용은 이런식으로 , 로 여러개를 선언할 수 있음
               //데이터형만 정의하고 변수형은 생략해도 됨, int n << X, int << o
int main(){ 
	
	int times, times2; //같은 방식으로 여러개일시 , 로
	cout << "정수를 입력하십시오.\n";
	cin >> times;
 

	cout << "정수를 한번 더 입력하시오요\n";
	cin >> times2;
	hellCPP(times, times2);  //같은 방식으로 여러개일시 , 로
	return 0; //알규먼트, 전달인자
}                        //알규먼트와 파라미터는 변수의 데이터형이 일치하여야 함, 하나가 int라면 나머지 하나도 int여야한다.
             //파라미터, 매게변수
void hellCPP(int n, int m) { //파라미텅돠 알규먼트의 변수 이름은 일치하지 않아도 된다, 다만 순서에 따라서 1대1로 배치된데로 적용된다.
	for (int i = 0; i<n; i++) 
		cout << "Hello!  ! ! 11! !\n";
	
	for (int c = 0; c<m; c++) 
		cout << "hihihihi!\n";
}   
