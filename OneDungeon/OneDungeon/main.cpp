#include <iostream>
#include <string>

using namespace std;

int main()
{

	string answer;

	cout << "Hello!" << endl;
	cout << "Dew �r en sn�ll pojke! Eller vad tycker du?(y/n): " << endl;

	cin >> answer;
	cin.ignore();

	if (answer == "y")
	{
		cout << "Du har fel, Dew �r en elak pojke!" << endl;
	}
	else if (answer == "n")
	{
		cout << "Du har r�tt, Dew �r en elak pojke!" << endl;
	}
	else
	{
		cout << "Du svarade inte ens i r�tt format. Men jag antar att du h�ller med om att Dew �r en elak pojke!" << endl;
	}


	cin.ignore();

	return 0;
}