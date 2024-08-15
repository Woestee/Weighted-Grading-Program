#include<iostream>
using namespace std;

struct record
{
	double quiz1;
	double quiz2;
	double midyear, midyear_one;
	double final, final_one;
	double quiz_average;
	char final_grade;
	double total_grade;
};
void instructions();
void input(record& the_grades);
void output(record& the_grades);

int main()
{
	record grades;
	instructions();
	input(grades);
	output(grades);
	cout << endl;
	cout << "End of program";
	cout << endl;
	system("pause");
	return 0;
}

void instructions()
{
	cout << "Welcome to the grading program!";
	cout << endl << "Grading policies:";
	cout << endl << "There are two quizzes, each graded on the basis of 10 points";
	cout << endl << "There is one midterm exam and one final exam, each graded on the basis of 100 points.";
	cout << endl << "The final exam counts for 50 percent of the grade, the midterm counts for 25 percent and the two quizzes together count for a total of 25 percent";
	cout << endl;
}

void input(record& the_grades)
{
	cout << endl;
	cout << "Enter quiz 1 grade (out of 10 points):";
	cin >> the_grades.quiz1;
	cout << endl;
	cout << "Enter quiz 2 grade (out of 10 points):";
	cin >> the_grades.quiz2;
	cout << endl;
	cout << "Enter midyear Exam grade (out of 100 points):";
	cin >> the_grades.midyear;
	cout << endl;
	cout << "Enter Final Exam grade (out of 100 points):";
	cin >> the_grades.final;
	cout << endl;
}
void output(record& the_grades)
{
	the_grades.quiz_average = (((the_grades.quiz1 / 10) + (the_grades.quiz2 / 10)) / 2) * .25;
	the_grades.final_one = (the_grades.final / 100) * .5;
	the_grades.midyear_one = (the_grades.midyear / 100) * .25;
	the_grades.total_grade = (the_grades.quiz_average + the_grades.final_one + the_grades.midyear_one) * 100;

	cout << "Quiz 1: " << the_grades.quiz1 << "/10";
	cout << endl;
	cout << "Quiz 2: " << the_grades.quiz2 << "/10";
	cout << endl;
	cout << "Midyear exam: " << the_grades.midyear << "/100";
	cout << endl;
	cout << "Final exam: " << the_grades.final << "/100";
	cout << endl;
	cout << "Final grade: " << the_grades.total_grade;
	cout << endl;
	cout << "Letter grade: ";
	if (the_grades.total_grade < 60)
	{
		cout << "F";
	}
	if ((the_grades.total_grade > 60) && (the_grades.total_grade < 70))
	{
		cout << "D";
	}
	if ((the_grades.total_grade > 70) && (the_grades.total_grade < 80))
	{
		cout << "C";
	}
	if ((the_grades.total_grade > 80) && (the_grades.total_grade < 90))
	{
		cout << "B";
	}
	if (the_grades.total_grade > 90)
	{
		cout << "A";
	}
	cout << endl;
}