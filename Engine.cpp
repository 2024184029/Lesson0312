#include "Engine.h"
#include "conio.h"
#include <iostream>
#include <Windows.h>

FVector2i PlayerPosition = { 1, 1 };

int Map[10][10] =
{
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }
};

int Input()
{
	//if (_kbhit())
	//{

	//	_getch();
	//}

	return _getch();
}

void Tick(int KeyCode)
{
	if (KeyCode == 'w')
	{
		AddPlayerOffset(0, -1);
	}
	if (KeyCode == 's')
	{
		AddPlayerOffset(0, 1);
	}
	if (KeyCode == 'a')
	{
		AddPlayerOffset(-1, 0);
	}
	if (KeyCode == 'd')
	{
		AddPlayerOffset(1, 0);
	}
}

void Clear()
{
	for (int Y = 0; Y < 10; ++Y)
	{
		Gotoxy(1, Y);
		std::cout << "           ";
	}

}

void AddPlayerOffset(FVector2i DeltaPosition)
{
	PlayerPosition.X += DeltaPosition.X;
	PlayerPosition.Y += DeltaPosition.Y;
}

void Render()
{
	Clear();

	for (int Y = 0; Y < 10; ++Y)
	{
		for (int X = 0; X < 10; ++X)
		{
			Gotoxy(X, Y);

			if (PlayerPosition.X == X && PlayerPosition.Y == Y)
			{
				std::cout << "P";
			}
			else if (Map[Y][X] == 1)
			{
				std::cout << "#";
			}
			else if (Map[Y][X] == 0)
			{
				std::cout << " ";
			}

		}
	}
}


void Gotoxy(int x, int y)
{
	COORD Pos = { (SHORT)x, (SHORT)y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}