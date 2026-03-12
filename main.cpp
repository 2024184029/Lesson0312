#include <iostream>
#include "Engine.h"

using namespace std;

struct InnerType
{
	int A; 
	int B;
};

struct CustomDataType
{
	int A;
	int B;
	float C;
	bool D;
	InnerType Inner;
};

struct AActor
{
	int X;
	int Y;
	int StaticMesh;

	void Add()
	{

	}

	void Move()
	{
		this->Add();
	}
};

 //OOP(사물단위) or 절차지향 둘 중 뭐가 더 실행속도가 빠를까?
 //절차 지향이 더 빠름. OOP는 해석이 필요하니까 오버헤드가 생길 수밖에 없는 구조.
 //하지만 Computer가 매우 빠르므로 그 단점은 상쇄됨
 //수정 관리가 쉬운 OOP로 만드는 게 ㄹㅇ 장점
 //사물 -> 데이터 (데이터 모델링)

int main()
{
	CustomDataType Data;
	CustomDataType* P = &Data;
	Data.A = 1;
	std::cout << (*P).A;
	std::cout << P->A; // 윗 줄과 동일한 의미를 가지는 '->'

	AActor* Player = nullptr; // 포인터만 가지고 있다가 필요할 때 생성

	Player = new AActor();

	Player->Move();

	delete Player;
	Player = nullptr;

	return 0;

	//bool bIsRunning = true;

	//// GameLoop
	//while (bIsRunning) // frame
	//{
	//	int KeyCode = Input();
	//	Tick(KeyCode);
	//	Render();
	//}

	//return 0;
}
