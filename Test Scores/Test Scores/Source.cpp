#include <iostream>
#include <string>
using namespace std;

int main()
{
	double average;
	double highScore = 100;
	double lowScore = 0;
	double high;
	double low;
	double testScore;
	string result;
	double scoreArray[10] = { 0.0 };

	for (int i = 0; i < size(scoreArray); i++) 
	{

		cout << "Enter a test score or 999 to quit >> ";
		cin >> scoreArray[10];

		if (scoreArray[10] <= lowScore && scoreArray[10] <= highScore)
		{
			if (scoreArray[10] >= highScore)
			{
				highScore = scoreArray[10];
				high = scoreArray[10];
			}
			else if (scoreArray[10] > 100 || scoreArray[10] < 0)
			{
				lowScore = scoreArray[10];
				low = scoreArray[10];
			}
		}
		else
			result = "enter another score ";
	}



	average = (scoreArray[1] + scoreArray[2] + scoreArray[3] + scoreArray[4] + scoreArray[5] + scoreArray[6] + scoreArray[7] + scoreArray[8] + scoreArray[9] + scoreArray[10]) / 10;
	cout << average << endl;




	system("pause");
	return 0;
}