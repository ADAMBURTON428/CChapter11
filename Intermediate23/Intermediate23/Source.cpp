#include <iostream>
using namespace std;

int main()
{
	int points[5] = { 62, 75, 100, 83, 85 };
	char grades[5] = { 'D', 'C', 'A', 'B', 'B' };

	int x = 0;
	for (int x = 0; x < size(points); x++) {
		cout << points[x] << "->" << grades[x] << endl;
		
	}

	system("pause");
	return 0;
}	//end of main function