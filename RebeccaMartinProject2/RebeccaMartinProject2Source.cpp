/* Author: Rebecca Martin
Date: February 25, 2019
Program: RebeccaMartinProject2.cpp
Description: Student Grade Calculator
Company: Santa Ana College, CA

*/

#include <iostream>
#include <string>

using namespace std;

int main() {

	//*************VARIABLES*************//

	int studentID = int();
	string fname = string();
	string lname = string();
	int engScore = int();
	int mathScore = int();
	int histScore = int();
	int total = int();
	double gradeAvg = double();
	char letterGrade = char();
	string comment = string();

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);



	//**************HEADER**************//
	cout << "Student Grading System (SGS)" << endl;
	cout << "Santa Ana College" << endl;
	cout << "Author: Rebecca Martin" << endl;
	cout << "February 25, 2019" << endl;

	//**************INPUTS**************//

	cout << "Please enter your student ID: ";
	cin >> studentID;

	cout << "Please enter your first name: ";
	cin >> fname;

	cout << "Please enter your last name: ";
	cin >> lname;

	cout << "Please enter your English score: ";
	cin >> engScore;

	cout << "Please enter your Math score: ";
	cin >> mathScore;

	cout << "Please enter your History score: ";
	cin >> histScore;


	//************PROCESSES************//
	total = engScore + mathScore + histScore;
	gradeAvg = total / 3;

	if (gradeAvg >= 90) {
		letterGrade = 'A';
		comment = "Fantastic work. Keep it up!";
	}

	else if (gradeAvg < 90 && gradeAvg >= 80) {
		letterGrade = 'B';
		comment = "Good job";
	}

	else if (gradeAvg < 80 && gradeAvg >= 70) {
		letterGrade = 'C';
		comment = "Average work";
	}

	else if (gradeAvg < 70 && gradeAvg >= 60) {
		letterGrade = 'D';
		comment = "Subpar work";
	}

	else if (gradeAvg < 60) {
		letterGrade = 'F';
		comment = "Failing work";
	}


	//*************OUTPUTS*************//
	cout << "Student ID: " << studentID << endl;
	cout << "First Name: " << fname << endl;
	cout << "Last Name: " << lname << endl;


	cout << "Total: " << total << endl;
	cout << "Average:" << gradeAvg << "%" << endl;
	cout << "Grade: " << letterGrade << endl;
	cout << "Comments: " << comment << endl;




	system("pause");
	return 0;
}