#include <iostream>

using namespace std;

//주머니에 45개의 공이 있습니다.
//그중 6개를 뽑는 프로그램을 만들어 보세요.

void Initialize(int* Pocket)
{
	for (int i = 0; i < 45; ++i)
	{
		Pocket[i] = i + 1;
	}
}

void RandomBalls(int* Pocket)
{
	//// 랜덤하게 공 섞기
	//for (int i = 0; i < 45; i++)
	//{
	//	Pocket[i] = rand() % 45 + 1;
	//}

	// -----------------

	// 강사님 코드
	for (int i = 0; i < 45 * 100; i++)
	{
		int FirstIndex = rand() % 45;
		int SeconedIndex = rand() % 45;

		int Temp = Pocket[FirstIndex];
		Pocket[FirstIndex] = Pocket[SeconedIndex];
		Pocket[SeconedIndex] = Temp;
	}
}

void PickBalls(int* Pocket)
{
	//// 주머니에서 6개의 랜덤 공
	//for (int i = 0; i < 6; i++)
	//{
	//	Picked[i] = Pocket[i] % 45 + 1;
	//	for (int j = 0; j < i; j++)
	//	{
	//		if (Picked[i] == Picked[j]) // 중복 공 뽑지 않음
	//		{
	//			i--;
	//			break;
	//		}
	//	}
	//}

	// -----------------

	// 뽑은 공 6개 출력하기
	cout << "뽑은 공들: ";
	for (int i = 0; i < 6; i++)
	{
		cout << Pocket[i] << ' ';
	}
}

int main()
{
	srand(unsigned(time(NULL)));
	
	int Pocket[45] = { 0, };
	int* B = Pocket;

	int Picked[6];
	int* P = Picked;

	Initialize(Pocket);

	RandomBalls(Pocket);

	PickBalls(Pocket);

	return 0;
}