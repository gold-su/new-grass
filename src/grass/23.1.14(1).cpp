#include <iostream>

using namespace std;

int main(){ //반복문 활용 
	 
	//중첩 루프
	
	int t[3][4] ={
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},	
	};
	
	for(int g=0; g<3; g++){   //for문은 0부터 시작이기 때문에 위에서 배열이 3,4더라도 g<3으로 해야됨,
		for(int h=0; h<4; h++){ //배열은 갯수, 즉 3개이고, for문은 0부터 시작이니 0 1 2 이렇게가 총 3개
			cout << t[g][h] << " ";
		}
		cout <<"\n";
	}
	//ide 오류좀 안났으면 좋겠다
	
	return 0;
}