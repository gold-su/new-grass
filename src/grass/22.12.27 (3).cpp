#include <iostream>
#include <cstring>

using namespace std;

int main() {
	//구조체 중요
	//cf(복습)) 배열 : 같은 데이터형의 집합
	// 구조체 : 다른 데이터형이 허용되는 데이터의 집합
	
	//축구선수의 데이터
	
	/*
	string name;
	string position;
	float height;
	float weight;
	*/
	//위 데이터 모두 한 사람의 데이터
	//배열로는 하나의 집합으로 표현불가 [불편함]
	
	
	struct MyStruct 
	{
		string name;
		string position;
		float height;
		float weight;
	}; //B; //A처럼 하지않고 마지막 ;안에 변수를 하나 설정해줘도 됨
	
	// A Struct;
	// struct.name = "park";
	// struct.position = "stroker";
	// struct.height = 1234;
	// struct.weight = 6777; //이렇게도 가능하지만 
	//밑의 초기화의 방식도 사용가능
	
	/*
	MyStruct A = {
		"park","striker",190,77
	}; //,로 구분 가능 순서대로
	
	cout << A.name << endl;
	cout << A.position << endl;
	cout << A.height << endl;
	cout << A.weight << endl;
	*/
	
	/*
	B = {
		"doo","dd",126,162
	};
	
	cout << B.name << endl;
	*/
	
	MyStruct A[2] = {
		{"a","a",1,1}, //이름,포지션,키,몸무게의 값 4가지 //A[0]을 입력할시 이 값들에서 출력
		{"b","b",2,2}  //이름,포지션,키,몸무게의 값 4가지 [두번째 index] //A[1]을 입력할시 이 값들에서 출력
		
	};
	
	cout << A[1].position << endl; 
	
	return 0;
}