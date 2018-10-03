#include <iostream>
using namespace std;

int main()
{
	int days[12]{31,28,31,30,31,30,31,30,31,30,31};
	int monthNumber[12];
	//get month number
	cout << "Enter the month number (-1 to stop): ";
	cin >> monthNumber[12];
	while (monthNumber[12] != -1)
	{
		//display number of days
		if (monthNumber[12] > 0 && monthNumber[12] < 13)
			cout << "Number of days: " << days[monthNumber[12] - 1] << endl << endl;
		else
			cout << "Invalid month number" << endl << endl;
		//end if
		cout << "Enter the month number (-1 to stop): ";
		cin >> monthNumber[12];
	}  //end while

	system("pause");
	return 0;
}