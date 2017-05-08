#include <iostream>
#include <string>

using namespace std;

int main()
{

	string answer;

	cout << "Hello!" << endl;
	cout << "Dew är en snäll pojke! Eller vad tycker du?(y/n): " << endl;

	cin >> answer;
	cin.ignore();

	if (answer == "y")
	{
		cout << "Du har fel, Dew är en elak pojke!" << endl;
	}
	else if (answer == "n")
	{
		cout << "Du har rätt, Dew är en elak pojke!" << endl;
	}
	else
	{
		cout << "Du svarade inte ens i rätt format. Men jag antar att du håller med om att Dew är en elak pojke!" << endl;
	}


	cin.ignore();

	return 0;
}