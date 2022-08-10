// Tooth Pick Game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int  tothpicks = 23, num;
	bool humanturn, lost;
	lost = false;
	humanturn = true;
	while (tothpicks >= 1 && !lost)
	{
		if (humanturn)
		{
			if (tothpicks == 1)
			{

				lost = true;
			}
			else
			{
				cout << "Availabale toothpicks are : " << tothpicks << endl;
				cout << "How many toothpicks you want to pick? : ";
				cin >> num;
				while (num < 1 || num>3 || num > tothpicks) 
				{
					cout << "Enter a value between 1-3 which is <= " << tothpicks << " : ";
					cin >> num;
				}
				tothpicks = tothpicks - num;
				if (tothpicks == 0)
				{
					lost = true;
				}
				else
				{
					humanturn = false;
				}
			}
		}
		else
		{
			if (tothpicks == 1)
			{
				lost = true;
			}
			else
			{
				switch (tothpicks)
				{
				case 2:
					tothpicks = tothpicks - 1;
					break;
				case 3:
					tothpicks = tothpicks - 2;
					break;
				case 4:
					tothpicks = tothpicks - 3;
					break;
				default:
					tothpicks = tothpicks - 3;

				}
				humanturn = true;
			}
		}
	}
	if (humanturn)
	{
		cout << "***Compter Wins***";
	}
	else
	{
		cout << "***Human Player Wins***";
	}
}