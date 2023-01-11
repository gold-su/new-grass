#include <iostream>

using namespace std;

int main(){ //반복문 활용 
	 
	//중첩 루프
	
	int temp[4][5] = //temp는 4개의 원소를 가지고 있고, 그 각각의 원소는 5개의 원소를 가지고 있다. {표형식}
	{
		{1,2,3,4,5}, //row가 0일때의 5개의 원소    //{~~} 뒤에 ,는 필수
		{11,22,33,44,55},//row가 1일때의 5개의 원소
		{111,222,333,444,555},//row가 2일때의 5개의 원소
		{1111,2222,3333,4444,5555}//row가 3일때의 5개의 원소
	};
	
	for(int row = 0; row < 4; row++){ //row가 4 미만일때까지 실행됨, 첫 실행은 row = 0
		for(int col = 0; col < 5; col++){ //row가 0일때, col이 4일때까지 실행하게됨. row = 0 / col = 0 1 2 3 4
			cout << temp[row][col] << " ";          //다시 돌아가서 row는 1증가, row가 1일때 col이 똑같이 실행 row = 1 / col = 0 1 2 3 4 
		}
		cout << "\n";
	}
	
	
	
	return 0;
}