/*
 * Ch10Exercise2.cpp
 *
 *  Created on: Nov 17, 2012
 *      Author: jonl316
 */

// Age.cpp - displays the user's age in a message
// Created/revised by Jonathan David Livesay on 11/17/2012

#include <iostream>
using namespace std;

// function prototype
void displayAge(int years);

int main()
{
	int age = 0;
	// get age
	cout << "How old are you? ";
	cin >> age;
	// display age
	displayAge(age);

	// system("pause");
	return 0;
}	//end of main function


// ****function definitions*****
void displayAge(int years)
{
	cout << "You are " << years << " years old." << endl;
}	//end of displayAge function

