#include <iostream>
#include <climits> // int_max,shrt_max,long_max,llong_max 사용위한 라이브러리

	using namespace std;

int main() {
	float a= 3.15; //실수형 변수
	int b = 3.14; //정수형 변수 
	
	cout << a << ", " <<b ; //실행시 b는 소수점이 짤려서 나옴
}
	//unsigned int,short,long, long long 변수 앞에 키워드로 붙으면 음의 값을 저장 x
	// unsigned short은 음의 값 + 양의 값으로 늘어남 3만대에서 -3만대도 더해서 6만대까지 늘어남

/* int는 4바이트이고 최댓값은 2147483647
   short는 2바이트고 최댓값은 32767
   long은 4바이트고 2147483647
   long long(더블 롱) 8바이트고 8223372036854775807
   까지 저장할수 있다
*/