#include <iostream>
#include <conio.h>
#include <winsock.h>


using namespace std;

int main()

{


	int Map[10][10] =
	{
		{ 1,1,1,1,1,1,1,1,1,1 },
		{ 1,0,0,0,1,0,0,0,0,1 },
		{ 1,0,0,0,0,0,0,0,0,1 },
		{ 1,0,0,0,0,0,0,0,0,1 },
		{ 1,0,0,0,0,0,0,1,1,1 },
		{ 1,0,0,0,0,0,0,0,0,1 },
		{ 1,0,0,0,0,0,0,0,0,1 },
		{ 1,0,0,0,0,0,1,0,0,1 },
		{ 1,0,0,0,0,0,1,0,0,1 },
		{ 1,1,1,1,1,1,1,1,1,1 }
	};


	int PlayerX = 1;
	int PlayerY = 1;

	int GoalX = 8;
	int GoalY = 8;

	int X;
	int Y;

	char Key = 0;


	//wasd
	for (;;)
	{
		
		system("cls");
		for (Y = 0; Y < 10; ++Y)

		{

			for (X = 0; X < 10; ++X)
			{

				if (PlayerX == X && PlayerY == Y)
				{

					cout << "P";

				}
				else if (GoalX == X && GoalY == Y)
				{

					cout << "G";

				}

				else if (Map[Y][X] == 0)
				{

					cout << " ";

				}
				else if (Map[Y][X] == 1)
				{

					cout << "*";

				}



			}

			cout << endl;

		}
		



		cin >> Key;

		if (Key == 'w')
		{

			PlayerX--;

		}

		else if (Key == 'a')
		{

			PlayerY--;

		}

		else if (Key == 's')
		{

			PlayerX++;

		}

		else if (Key == 'd')
		{

			PlayerY++;

		}


	}



	return 0;


}