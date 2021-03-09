#include <iostream>
#include<Windows.h>
using namespace std;

int n=0, badTry=1;

int checkin(int enteredPass)
{
	int pass = 1234;
	if (enteredPass != pass && n!=4)
	{
		n++;
		cout << "wrong password\nTry again, aviable attempt :" << 5 - n << endl;
		return 1;
	}
	else if (enteredPass != pass && n == 4)
	{
		cout << "wrong password\nWait 30 seconds to try again\n";
		Sleep(30000 * badTry);
		return 1;
	}
	else
	{
		cout << "pass right\n";
		system("pause");
		return 0;
	}
}

int main()
{
	int enteredPass, n;
	do
	{
	cout << "Enter password\n";
	cin >> enteredPass;
	} 
	while (checkin(enteredPass));
}
