#include <iostream>


using namespace std;

int main() {
	//공용체(union)
	//서로 다른 데이터형을 한 번에 한 가지만 보관할 수 있음.
	
	union MyUnion {
		
		int intVal;
		long longVal;
		float floatVal;
	};
   
	MyUnion test;
	test.intVal = 3;
	cout << test.intVal << endl;
	test.longVal = 33;
	cout << test.intVal <<endl;
	cout << test.longVal <<endl;
	test.floatVal = 3.3;
	cout << test.intVal <<endl;
	cout << test.longVal <<endl;
	cout << test.floatVal <<endl;
	return 0;
	//union은 한 번에 한 가지의 데이터만 저장할 수 있으므로, 
	//위처럼 출력할 경우에는 이전에 보관했던 데이터들이 소실되고 그 이후에 저장된 데이터로 출력하게 됨
	
	//공용체의 장점은 메모리를 절약, 보통 하드웨어 데이터 구조에 많이 사용됨
	
}