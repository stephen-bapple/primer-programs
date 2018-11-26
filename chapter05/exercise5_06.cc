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
        letter_grade = grade < 60 ? scores[0] :
                     grade == 100 ? scores.back() :
                   grade % 10 > 7 ? scores[(grade - 50) / 10] + '+' :
                   grade % 10 < 3 ? scores[(grade - 50) / 10] + '-' :
                                    scores[(grade - 50) / 10];

       cout << "The letter version of a grade of " << grade
             << " is " << letter_grade << endl;
    }
}

