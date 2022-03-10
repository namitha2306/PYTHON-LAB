// c++ lab cycle no1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class students
{
private:
	int rollno;
	string name;
	int mark1,mark2,mark3,Avg;
public:
	void get_data(void);
	string calc_grade(void);
	void display();
	
};
	void students::get_data(void)
{
		cout << "======================MARK LIST OF STUDENTS========================";
		cout << "\nPlease enter the following details:  \n1.Name of student \n2.Rollno \n3.Mark of three subjects in order(out of 100) :" << endl;
		cin >> name >> rollno >> mark1>>mark2>>mark3;
		Avg =(( mark1 + mark2 + mark3)/3);
	}
	string students::calc_grade(void)
	{
		string grade;
		int avg = Avg;
		cout << "Grade of  "<<name<<" : ";
		if (avg >= 91)
			grade = "A+";
		else if (avg >= 81)
			grade = "A";
		else if (avg >= 71)
			grade = "B+";
		else if (avg >= 61)
			grade = "C+";
		else if (avg >= 51)
			grade = "C";
		else if (avg >= 41)
			grade = "D+";
		else
			grade = "D - failed!!!";
		cout << grade << endl;
		return grade;
		
	}
	void students::display()
	{
		cout << "Name : " << name << endl;
		cout << "Rollno : " << rollno << endl;
		cout << "Mark in first subject : " << mark1 << endl;
		cout << "Mark in second subject : " << mark2 << endl;
		cout << "Mark in third subject : " << mark3 << endl;
		cout << "Average of marks in three subjects : " << Avg << endl;
		

	}
	
	
	
	
int main() {
	string ch;
	students s;
	while (true) {
		s.get_data();
		s.calc_grade();
			cout << "DO YOU WANT TO CONTINUE ? ";
		cin >> ch;
		if (ch == "yes")
			continue;
		else
			cout << "EXIT PROGRAM !!";
		return false;
	}
	}
