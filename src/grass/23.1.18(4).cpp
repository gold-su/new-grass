#include <iostream>

using namespace std;
const int SIZE = 30;
int main(){ 
	
	cout << "문장을 입력하십시오.\n";
	char line[SIZE]; //char형에 배열을 선언
	cin.get(line, SIZE);//그 배열에 get을 사용해서 입력한 문장을 저장
	cout << "입력하신 문장은\n";
	int spaces = 0;
	for(int i = 0; line[i] != '\0'; i++){ //null을 만나기 전까지 문장을 출력
		cout << line[i];
		
		if(line[i] != ' ')
			continue; //공백이 없으면 실행됨
		
		spaces++;//continue가 사용이 안되면 1씩 증가됨
	}
	cout << "입니다 \n";
	cout << " "<< spaces <<" 번 입니다.\n";
	cout << "for문이 끝났습니다.\n";
	return 0;
}