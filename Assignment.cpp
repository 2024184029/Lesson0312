#include <iostream>

using namespace std;

//주머니에 45개의 공이 있습니다.
//그중 6개를 뽑는 프로그램을 만들어 보세요.

void Initialize(int* Pocket, int Size);
void Shuffle(int* Pocket, int Size);
void Pick(int* Pocket, int Size, int PickCount);

int main()
{	
	int Size = 0;
	int PickCount = 0;

	cin >> Size;
	cin >> PickCount;

	int* Pocket = new int[Size];

	Initialize(Pocket, Size);

	Shuffle(Pocket, Size);

	Pick(Pocket, Size, PickCount);

	delete[] Pocket;
	Pocket = nullptr;

	return 0;
}

void Initialize(int* Pocket, int Size)
{
	srand(unsigned(time(NULL)));

	for (int i = 0; i < Size; ++i)
	{
		Pocket[i] = i + 1;
	}
}

void Shuffle(int* Pocket, int Size)
{
	for (int i = 0; i < Size * 10; i++)
	{
		int FirstIndex = rand() % Size;
		int SeconedIndex = rand() % Size;

		int Temp = Pocket[FirstIndex];
		Pocket[FirstIndex] = Pocket[SeconedIndex];
		Pocket[SeconedIndex] = Temp;
	}
}

void Pick(int* Pocket, int Size, int PickCount)
{
	cout << "뽑은 공들: ";
	for (int i = 0; i < PickCount; i++)
	{
		cout << Pocket[i] << ", ";
	}
}
