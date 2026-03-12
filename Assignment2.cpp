#include <iostream>

using namespace std;

void PrintArray()
{
	return;
}

int main()
{
	//PrintArray();

	char Array[10][10] = { };

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i == 0 || i == 9 || j == 0 || j == 9)
			{
				Array[i][j] = '*';
			}
			else
			{
				Array[i][j] = ' ';
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << Array[i][j];
		}
		cout << endl;
	}

	// ----------------

	char Player = 'P';
	char Moving[4] = { 'w', 'a', 's', 'd' };
	char Input;

	cin >> Input;

	while (Input)
	{
		if (Input == Moving[0]) //w
		{
			for (int i = 0; i < 10; i++)
			{
				for (int j = 0; j < 10; j++)
				{
					j++;
					Array[i][j] = Player;
				}
			}
		}

		else if (Input == Moving[1]) //a
		{
			for (int i = 0; i < 10; i++)
			{
				for (int j = 0; j < 10; j++)
				{
					i--;
					Array[i][j] = Player;
				}
			}
		}

		else if (Input == Moving[2]) //s
		{
			for (int i = 0; i < 10; i++)
			{
				for (int j = 0; j < 10; j++)
				{
					j--;
					Array[i][j] = Player;
				}
			}
		}

		else // (Input == Moving[3] // d
		{
			for (int i = 0; i < 10; i++)
			{
				for (int j = 0; j < 10; j++)
				{
					i++;
					Array[i][j] = Player;
				}
			}
		}
	}




	return 0;
}