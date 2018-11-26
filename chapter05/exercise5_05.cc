#include <iostream>
#include <vector>
#include <string>

using std::cout; using std::endl; using std::cin;
using std::vector;
using std::string;

int main()
{
    vector<string> scores{"F", "D", "C", "B", "A", "A++"};
    string letter_grade;
    int grade;

    cout << "Enter a grade [0 - 100]: " << endl;
    while (cin >> grade && grade >= 0 && grade <= 100)
    {
        if (grade < 60) {
            letter_grade = scores[0];
        }
        else if (grade == 100)
        {
            letter_grade = scores.back();
        }
        else
        {
            letter_grade = scores[(grade - 50) / 10];
            if (grade % 10 > 7)
            {
                letter_grade += '+';
            }
            else if (grade % 10 < 3)
            {
                letter_grade += '-';
            }
        }
        cout << "The letter version of a grade of " << grade
             << " is " << letter_grade << endl;
    }
}

