#include <iostream>

using namespace std;

int main(){ 
	
	//논리 표현식
	//논리합, 논리곱, 논리부정 연산자
	
	//논리합 ||
	/* 
	논리 or 연산자라고도 불리는 논리합 연산자는 두 피연사자 중 하나라도 
	'참'이면 true를 반환하고 그렇지 않않다면 '거짓'을 반환합니다.
	5 == 5 (true) || 5 == 9 (false)   <- true
	5 > 3(true) || 5 > 10(false) <- true
	5 > 8(false) || 5 < 10(true) <- true
	5 > 9(false) || 5 < 2(false) < false
	*/
	
	//논리곱 && (and)
	//두개의 식이 모두 true일때만 전체식이 true가 나온다
	/*
	5 == 5 && 9 == 9 true
	55 == 5 && 9 != 9 false
	10 < 2 && 10 > 2 false
	*/
	
	//논리부정 !
	// !(표현식) << 표현식의 값이 true라면 !(표현식)의 값이 false 반환
	// 표현식의 값이 false라면 true로 반환된다
	
	cout << "당신의 나이를 입력하십시오";
	int age;
	cin >> age;
	
	if (age < 0 || age > 100){ //둘 중 하나라도 맞으면 ture가 나오는 || 논리합이기 때문에 cout을 실행
		cout << "거짓말을 하시면 안됩니다!\n";
	}
	else if (20 <= age && age <= 29){ //두개의 표현식 모두 true가 나와야 true가 나오는 논리곱이기 때문에 cout 실행
		cout <<"당신은 20대 이군요?\n";
	}
	else {
		cout << "당신은 20대는 아니시군요!\n";
	}
	
	
	return 0;
}