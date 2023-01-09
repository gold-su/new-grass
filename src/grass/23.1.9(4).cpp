#include <iostream>

using namespace std;

int main(){
	
	//반복문 for
	
	for(int i = 0; i < 5; ){
	//int i는 0 //i가 5보다 작을때까지 반복 실행 //한 번의 반복마다 i +1
		
		cout << i << "번째 입니다." <<endl;
		i = i + 2; // 이런식으로  for문에서 입력 안하고, 몸체에 따로 코드를 입력하여도 됨 
	}
	
	for(int e = 5; e > 0; e--){
	//int i는 0 //i가 5보다 작을때까지 반복 실행 //한 번의 반복마다 i +1
		
		cout << e << "번째 입니다." <<endl;
	
	}  // -- 도 완벽히 똑같은 방식으로 작동
	
	
	
	

	return 0;
}