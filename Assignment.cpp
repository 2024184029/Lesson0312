#include <iostream>

using namespace std;

//주머니에 45개의 공이 있습니다.
//그중 6개를 뽑는 프로그램을 만들어 보세요.

void RandomBalls(int* Pocket)
{
	// 1~45 숫자 넣기
	for (int i = 0; i < 45; i++)
	{
		Pocket[i] = i + 1;
	}

	// 랜덤하게 공 섞기
	for (int i = 0; i < 45; i++)
	{
		Pocket[i] = rand() % 45;
	}
}

void PickBalls(int* Picked, int* Pocket)
{
	// 주머니에서 6개 공 랜덤하게 섞기
	for (int i = 0; i < 6; i++)
	{
		Picked[i] = Pocket[i] % 45 + 1;
	}

	// 뽑은 공 6개 출력하기
	cout << "뽑은 공들: ";
	for (int i = 0; i < 6; i++)
	{
		cout << Picked[i] << ' ';
	}
}

int main()
{
	srand(unsigned(time(NULL)));
	
	int Pocket[45];
	int* B = Pocket;

	int Picked[6];
	int* P = Picked;

	RandomBalls(Pocket);

	PickBalls(Picked, Pocket);

	return 0;
}