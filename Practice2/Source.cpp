#include <iostream>
using namespace::std;
int main()
{
	int value = 0;
	do 
	{
		cout << "please enter a value." << endl;
		cin >> value;
		int i;
		for (i = value; i > 1; i--)
		{
			if (value % i == 0)
			{
				cout << "non prime" << endl;
				break;
			}
		}
		if (i = 1)
			cout << " is prime!" << endl;
	} while (value != 0);

	return 0;

}