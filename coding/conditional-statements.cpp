#include <iostream>
using namespace std;

int main()
{
    // if statement
    int score1 = 80;
    cout << "Your score: " << score1 << endl;
    if (score1 >= 60)
    {
        cout << "Yes! You passed the exam!" << endl;
    }

    if (score1 < 60)
    {
        cout << "Oh no! You have to do the exam again! :(" << endl;
    }

    // if-else statement
    int score2 = 50;
    cout << "Your score: " << score2 << endl;
    if (score2 >= 60)
    {
        cout << "Yes! You passed the exam!" << endl;
    }
    else
    {
        cout << "Oh no! You have to do the exam again! :(" << endl;
    }

    // if - else if - else statement
    int bloodPressure = 120;
    cout << "Blood Pressure: " << bloodPressure << endl;
    if (bloodPressure >= 140)
    {
        cout << "Your blood pressure is high" << endl;
    }
    else if (bloodPressure >= 90)
    {
        cout << "You blood pressure is normal" << endl;
    }
    else
    {
        cout << "Your blood pressure is low" << endl;
    }

    // switch - case
    char testScore = 'B';
    cout << "Your test score is: " << testScore << endl;
    switch (testScore)
    {
    case 'A':
        cout << "Excellent!" << endl;
        break;
    case 'B':
        cout << "You did a good job!" << endl;
        break;
    case 'C':
        cout << "You can improve it!" << endl;
        break;
    case 'D':
        cout << "You passed the exam!" << endl;
        break;

    default:
        cout << "You have to take the exam again! :(" << endl;
        break;
    }

    return 0;
}