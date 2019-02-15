// 
//
// This program gets user input and determines a students major and year in college
// Created by : Dylan Kinzer
// 15 Feb 2019
//
//

#include <iostream>
#include <string>
using namespace std;

void getStudentCode(string str) {

	//Variables
	string major;
	string year;
	
	//split up string into individual characters
	char majorCode = toupper(str.at(0));
	char yearCode = str.at(1);

	if ((majorCode == 'M' || majorCode == 'C' || majorCode == 'I') && (yearCode == '1' || yearCode == '2' || yearCode == '3' || yearCode == '4'))
	{
		switch (majorCode)
		{
		case 'M': major = "Mathematics";
			break;
		case 'C': major = "Computer Science";
			break;
		case 'I': major = "Information Technology";
			break;
		default:  return;
			break;
		}

		//Switch statement for year
		switch (yearCode)
		{
		case '1': year = "Freshman";
			break;
		case '2': year = "Sophmore";
			break;
		case '3': year = "Junior";
			break;
		case '4': year = "Senior";
			break;
		default: return;
			break;
		}

		cout << major << " " << year;
	}
	else 
		cout << "Invalid Status Code..." << endl;
	

}

int main()
{
	// Declare user variable
	string userValue;

	//Prompt user and store value
	cout << "Enter two characters: ";
	getline(cin, userValue);

	//Run Function to get the proper major and year
	getStudentCode(userValue);
	return 0;
}