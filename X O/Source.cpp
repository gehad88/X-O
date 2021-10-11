#include<iostream>
using namespace std;
void showTable(string arr[3][3],string name1, string name2)
{
	system("cls");
	cout << endl;
	cout << "                       Tic Tac Toe                                  " << endl << endl;
	cout << name1 << " (X) " << " - " << name2 << " (O) " << endl << endl;
	cout << "                  |        " << "          |          " << endl;
	cout << "         " << arr[0][0] << "        |        " << arr[0][1] << "         |          " << arr[0][2] << endl;
	cout << "                  |        " << "          |          " << endl;
	cout << "__________________|__________________|__________________" << endl;
	cout << "                  |        " << "          |          " << endl;
	cout << "         " << arr[1][0] << "        |        " << arr[1][1] << "         |          " << arr[1][2] << endl;
	cout << "                  |        " << "          |          " << endl;
	cout << "__________________|__________________|__________________" << endl;
	cout << "                  |        " << "          |          " << endl;
	cout << "         " << arr[2][0] << "        |        " << arr[2][1] << "         |          " << arr[2][2] << endl;
	cout << "                  |        " << "          |          " << endl << endl << endl;

}
void main()
{
	string arr[3][3] = { "1","2","3","4","5","6","7","8","9" };
	string num1, num2;
	int i = 0;
	///////////////////
	string name1, name2;
	cout << "Enter the name of First Player : ";
	cin >> name1;
	cout << "Enter The Name of Second Player : ";
	cin >> name2;
	system("cls");
	/////////////////////

	do
	{
		bool check1 = false, check2 = false;
		showTable(arr,name1, name2);
		cout << name1 << " , Enter a number : ";
		cin >> num1;
		while (true)
		{
			if (num1 < "1" || num1 > "9")
			{
				cout << "Enter number between (1-9) : ";
				cin >> num1;
			}
			else
				break;
		}
		while (true)
		{

			for (size_t i = 0; i < 3; i++)
			{
				for (size_t j = 0; j < 3; j++)
				{
					if (arr[i][j] == num1)
					{
						arr[i][j] = "X";     //WHAT !!! how does arr[i][j]='X' works !
						check1 = true;
						break;
					}
				}
			}
			if (check1 == false)
			{
				cout << "Invalid Move ! " << endl;
				cout << name1 << " , Enter a number : ";
				cin >> num1;
			}
			else
				break;
		}
		i++;
		if (i == 9)
		{
			cout << endl;
			cout << "DRAW " << endl<<endl;
			//int choice;
			//cout << "Your choice is : ";
			//cin >> choice;
			//if (choice == 1)
			//{
			//	/*string arr[3][3] = { "1","2","3","4","5","6","7","8","9" };             // i will think about this case again tomorrow
			//	showTable(arr, name1, name2);*/
			//}
			//else 
			break;
		}
		//////////////////////////////////
		if (arr[0][0] == arr[0][1]) // check first row
		{
			if (arr[0][0] == arr[0][2])
			{
				if (arr[0][0] == "X")
				{
			  showTable(arr,name1, name2);
					cout << endl;
					cout << "==>" << name1 << " win ";
					break;
				}
				else
				{
			  showTable(arr,name1, name2);
					cout << endl;
					cout << "==>" << name2 << " win ";
					break;
				}

			}
		}
		if (arr[1][0] == arr[1][1]) // check second row
		{
			if (arr[1][0] == arr[1][2])
			{
				if (arr[1][0] == "X")
				{
			  showTable(arr,name1, name2);
					cout << endl;
					cout << "==>" << name1 << " win ";
					break;
				}
				else
				{
			  showTable(arr,name1, name2);
					cout << endl;
					cout << "==>" << name2 << " win ";
					break;
				}

			}
		}
		if (arr[2][0] == arr[2][1]) // check third row
		{
			if (arr[2][0] == arr[2][2])
			{
				if (arr[2][0] == "X")
				{
			  showTable(arr,name1, name2);
					cout << endl;
					cout << "==>" << name1 << " win ";
					break;
				}
				else
				{
			  showTable(arr,name1, name2);
					cout << endl;
					cout << "==>" << name2 << " win ";
					break;
				}

			}
		}
		if (arr[0][0] == arr[1][1]) // check left diagonal 
		{
			if (arr[0][0] == arr[2][2])
			{
				if (arr[0][0] == "X")
				{
			  showTable(arr,name1, name2);
					cout << endl;
					cout << "==>" << name1 << " win ";
					break;
				}
				else
				{
			  showTable(arr,name1, name2);
					cout << endl;
					cout << "==>" << name2 << " win ";
					break;
				}

			}
		}
		if (arr[0][2] == arr[1][1]) // check right diagonal 
		{
			if (arr[0][2] == arr[2][0])
			{
				if (arr[0][2] == "X")
				{
			  showTable(arr,name1, name2);
					cout << endl;
					cout << "==>" << name1 << " win ";
					break;
				}
				else
				{
			  showTable(arr,name1, name2);
					cout << endl;
					cout << "==>" << name2 << " win ";
					break;
				}

			}
		}
		if (arr[0][0] == arr[1][0]) // check first column from left 
		{
			if (arr[0][0] == arr[2][0])
			{
				if (arr[0][0] == "X")
				{
			  showTable(arr,name1, name2);
					cout << endl;
					cout << "==>" << name1 << " win ";
					break;
				}
				else
				{
			  showTable(arr,name1, name2);
					cout << endl;
					cout << "==>" << name2 << " win ";
					break;
				}

			}
		}
		if (arr[0][1] == arr[1][1]) // check middele column from left 
		{
			if (arr[0][1] == arr[2][1])
			{
				if (arr[0][1] == "X")
				{
			  showTable(arr,name1, name2);
					cout << endl;
					cout << "==>" << name1 << " win ";
					break;
				}
				else
				{
			  showTable(arr,name1, name2);
					cout << endl;
					cout << "==>" << name2 << " win ";
					break;
				}

			}
		}
		if (arr[0][2] == arr[1][2]) // check last column from right 
		{
			if (arr[0][2] == arr[2][2])
			{
				if (arr[0][2] == "X")
				{
			  showTable(arr,name1, name2);
					cout << endl;
					cout << "==>" << name1 << " win ";
					break;
				}
				else
				{
			  showTable(arr,name1, name2);
					cout << endl;
					cout << "==>" << name2 << " win ";
					break;
				}
			}
		}
		////////////////////////////////
  showTable(arr,name1, name2);
		cout << name2 << " , Enter a number : ";
		cin >> num2;
		while (true)
		{
			if (num2 < "1" || num2 > "9")
			{
				cout << "Enter number between (1-9) : ";
				cin >> num2;
				cin.ignore();
			}
			else
				break;
		}
		while (true)
		{

			for (size_t i = 0; i < 3; i++)
			{
				for (size_t j = 0; j < 3; j++)
				{
					if (arr[i][j] == num2)
					{
						arr[i][j] = "O";   
						check2 = true;
						break;
					}
				}
			}
			if (check2 == false)
			{
				cout << "Invalid Move ! " << endl;
				cout << name2 << " , Enter a number : " << endl;
				cin >> num2;
			}
			else
				break;
		}
		i++;

		system("cls");

		//////////////////////////////////
		if (arr[0][0] == arr[0][1]) // check first row
		{
			if (arr[0][0] == arr[0][2])
			{
				if (arr[0][0] == "X")
				{
			  showTable(arr,name1, name2);
					cout << endl;
					cout << "==>" << name1 << " win ";
					break;
				}
				else
				{
			  showTable(arr,name1, name2);
					cout << endl;
					cout << "==>" << name2 << " win ";
					break;
				}

			}
		}
		if (arr[1][0] == arr[1][1]) // check second row
		{
			if (arr[1][0] == arr[1][2])
			{
				if (arr[1][0] == "X")
				{
			  showTable(arr,name1, name2);
					cout << endl;
					cout << "==>" << name1 << " win ";
					break;
				}
				else
				{
			  showTable(arr,name1, name2);
					cout << endl;
					cout << "==>" << name2 << " win ";
					break;
				}

			}
		}
		if (arr[2][0] == arr[2][1]) // check third row
		{
			if (arr[2][0] == arr[2][2])
			{
				if (arr[2][0] == "X")
				{
			  showTable(arr,name1, name2);
					cout << endl;
					cout << "==>" << name1 << " win ";
					break;
				}
				else
				{
			  showTable(arr,name1, name2);
					cout << endl;
					cout << "==>" << name2 << " win ";
					break;
				}

			}
		}
		if (arr[0][0] == arr[1][1]) // check left diagonal 
		{
			if (arr[0][0] == arr[2][2])
			{
				if (arr[0][0] == "X")
				{
			  showTable(arr,name1, name2);
					cout << endl;
					cout << "==>" << name1 << " win ";
					break;
				}
				else
				{
			  showTable(arr,name1, name2);
					cout << endl;
					cout << "==>" << name2 << " win ";
					break;
				}

			}
		}
		if (arr[0][2] == arr[1][1]) // check right diagonal 
		{
			if (arr[0][2] == arr[2][0])
			{
				if (arr[0][2] == "X")
				{
			  showTable(arr,name1, name2);
					cout << endl;
					cout << "==>" << name1 << " win ";
					break;
				}
				else
				{
			  showTable(arr,name1, name2);
					cout << endl;
					cout << "==>" << name2 << " win ";
					break;
				}

			}
		}
		if (arr[0][0] == arr[1][0]) // check first column from left 
		{
			if (arr[0][0] == arr[2][0])
			{
				if (arr[0][0] == "X")
				{
			  showTable(arr,name1, name2);
					cout << endl;
					cout << "==>" << name1 << " win ";
					break;
				}
				else
				{
			  showTable(arr,name1, name2);
					cout << endl;
					cout << "==>" << name2 << " win ";
					break;
				}

			}
		}
		if (arr[0][1] == arr[1][1]) // check middele column from left 
		{
			if (arr[0][1] == arr[2][1])
			{
				if (arr[0][1] == "X")
				{
			  showTable(arr,name1, name2);
					cout << endl;
					cout << "==>" << name1 << " win ";
					break;
				}
				else
				{
			  showTable(arr,name1, name2);
					cout << endl;
					cout << "==>" << name2 << " win ";
					break;
				}

			}
		}
		if (arr[0][2] == arr[1][2]) // check last column from right 
		{
			if (arr[0][2] == arr[2][2])
			{
				if (arr[0][2] == "X")
				{
			  showTable(arr,name1, name2);
					cout << endl;
					cout << "==>" << name1 << " win ";
					break;
				}
				else
				{
			  showTable(arr,name1, name2);
					cout << endl;
					cout << "==>" << name2 << " win ";
					break;
				}
			}
		}

		////////////////////////////////

	} while (true);

	cout << endl << endl;

	system("pause");
}