#include <iostream>
using namespace std;
int main() {

    string grade;
    float gpa = 0;
    int round = 0;
    do
    {
        cout << "Enter the letter grade (Enter 'x' to exit)";
        cin >> grade;
        round++;
        if (grade == 'a' || ' A' )
        {
            gpa += 4;
        }
        else if (grade == 'b'|| 'B' )
        {
           gpa += 3;
        }
        else if (grade == 'c'|| 'C')
        {
            gpa += 2;
        }
        else if (grade == 'd' || 'D')
        {
            gpa += 1;
        }
        else if (grade == 'f'|| 'F')
        {
            gpa += 0;
        }
    } while (grade != "x");
    round -= 1;
    cout << round << endl;
    //total= total / round;
    cout << gpa;
}
   