// Noah Lindn
// CSCI 270
// 12/3/19

#include "FinalExam.h";
#include <iostream>

using namespace std;

int main()
{
	FinalExam essay(20, 10, 20, 30);

	// Display the test results.
	cout << "The exam score is " << essay.getScore() << endl;
	cout << "The exam grade is " << essay.getLetterGrade() << endl;

	cout << "The grammar score is " << essay.getGrammar() << endl;
	cout << "The spelling score is " << essay.getSpelling() << endl;
	cout << "The length score is " << essay.getLength() << endl;
	cout << "The content score is " << essay.getContent() << endl;

	system("pause");
	return 0;
}