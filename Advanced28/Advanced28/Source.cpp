#include <iostream>
#include <string>
#include <time.h>
using namespace std;

int main()
{
	//declare array


	//declare variables
	int searchScore = 0;
	int total = 0;
	int scores[20];
	srand(time(NULL));
	for (int x = 0; x < size(scores); x++) {
		
		scores[x] = rand() % 100 + 1;
	}
	cout << "Enter a score from 0 through 100 (-1 to end): ";
	cin >> searchScore;
	while (searchScore >= 0)
	{
		total = 0;
		//search for score
		for (int x = 0; x < 20; x += 1)
			if (scores[x] == searchScore)
				total += 1;
		//end if    
		//end for

		//display total
		cout << "Number of students earning a score of "
			<< searchScore << ": "
			<< total << endl << endl;

		cout << "Enter a score from 0 through 100 (-1 to end): ";
		cin >> searchScore;
	}  //end while

	   //system("pause");
	return 0;
}