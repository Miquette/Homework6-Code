///////////////////
// Miquette Orren
// CS172 HW06_03
////////////////////////
#include <iostream>
#include <fstream>
#include <string>
using namespace std;




int main()
{
	string year;
	char gender = 'F';
	char miqgender;
	string name;
	string miqname;
	int num;
	int count = 0;
	string s1 = "\\\\This PC\\Documents\\Whitworth\\CS2\\Homeworks\\HW6\\Babynameranking";
	string type = ".txt";


	cout << "Enter a year between 2010 and 2014: " << endl;
	cin >> year;
	cout << "Enter the gender: " << endl;
	cin >> gender;
	cout << "Enter the name: " << endl;
	cin >> name;


	string place = s1 + year + type;

	ifstream fin(place);

	if (fin.fail())
	{
		cout << "Cannot open file." << endl;
		return 0;
	}

	bool isNameThere = false;
	bool isFemale;

	while (!fin.eof())
	{
		fin >> miqname >> miqgender >> num; //puts all variable into fin
		count++;

		if (gender == 'F' || gender == 'f')
		{
			isFemale = true;
			count = 1;
		}
		else
		{
			isFemale = false;
		}
		
		if (miqgender == gender && miqname == name)
		{
			getline(fin, miqname);
			cout << "The name " << name << " is ranked " << count << " in the year " << year << "." << endl;
			isNameThere = true;
			break;
		}
		
	}
	if ( isNameThere == false)
	{
		cout << "Sorry, but the name " << name << " was not found in our database for that year." << endl;
	}
	fin.close();

	return 0;
}