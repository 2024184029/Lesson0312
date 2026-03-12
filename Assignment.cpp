#include <iostream>

using namespace std;

//주머니에 45개의 공이 있습니다.
//그중 6개를 뽑는 프로그램을 만들어 보세요.

void Initialize(int* Pocket);
void Shuffle(int* Pocket);
void Pick(int* Pocket);

int main()
{	
	int Pocket[45] = { 0, };

	int Picked[6];

	Initialize(Pocket);

	Shuffle(Pocket);

	Pick(Pocket);

	return 0;
}

void Initialize(int* Pocket)
{
	srand(unsigned(time(NULL)));

	for (int i = 0; i < 45; ++i)
	{
		Pocket[i] = i + 1;
	}
}

void Shuffle(int* Pocket)
{
	for (int i = 0; i < 45 * 100; i++)
	{
		int FirstIndex = rand() % 45;
		int SeconedIndex = rand() % 45;

		int Temp = Pocket[FirstIndex];
		Pocket[FirstIndex] = Pocket[SeconedIndex];
		Pocket[SeconedIndex] = Temp;
	}
}

void Pick(int* Pocket)
{
	cout << "뽑은 공들: ";
	for (int i = 0; i < 6; i++)
	{
		cout << Pocket[i] << ' ';
	}
}
