#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() 
{

	int valuesArray[7] = { 50, 10, 5, 25, 30, 15, 20 };
	int total = 0;
	for (int i = 0; i < size(valuesArray); i++)
	{
		cout << valuesArray[i]<< endl;
		total = total + valuesArray[i];
		/*cout << "Enter the sales for Region ";
		cout << i + 1 << ": ";
		cin >> valuesArray[i];*/

	}
	cout << total << endl;
	/*cout << fixed << setprecision(2) << endl << endl;
	for (int i = 0; i < 4; i += 1) 
	{
		cout << "Sales for Region " << sub + 1 << ": $";
		cout << valuesArray[i] << endl;
	
	}*/
	
		






	system("pause");
	return 0;
}