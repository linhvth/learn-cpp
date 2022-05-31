#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <set>
#include <vector>
#include <random>
#include <algorithm>
#include <algorithm>
#include <cctype>
#include <stdlib.h>
#include <time.h>
using namespace std;

class Wordle
{
private:
    int allowAttemp = 6;
    string userInput;
    string answer;
    string check = "-----";
    string fileWord;
    string history;
    set<string> allWords;
    char checkArr[5];

    void welcome();
    void hint();
    void chooseFile(const string filename) { fileWord = filename; }
    void openWordFile();
    void pickWord();
    void toLowerCase(string &word);
    void toUpperCase(string &word);
    bool isFiveLetter();
    bool isInDict();
    void getValidInput();
    void isWin();
    void checkUserGuess();

public:
    void gamePlay();
};

void Wordle::hint()
{
    cout << "How to get hints from your guesses? Letters will be:" << endl;
    cout << "-  Capitalized if in the word and in the correct spot." << endl;
    cout << "-  Lowercase if in the word but in the wrong place." << endl;
    cout << "-  Underscore if not in the word in any spot." << endl;
    cout << "\nAre you READY? Go.\n"
         << endl;
}

void Wordle::welcome()
{
    cout << "\nGuess the my-pretend-to-be WORDLE in 06 tries." << endl;
    cout << "Each guess must be a valid five-letter word. ";
    cout << "Hit the enter button to submit." << endl;
    cout << "After each guess,the color of the tiles will change ";
    cout << "to show how close your guess was to the word.\n"
         << endl;
}

void Wordle::openWordFile()
{
    fstream in_file(fileWord);
    string line;
    while (getline(in_file, line, '\n'))
    {
        if (line.length() == 5)
            allWords.insert(line);
    }
}

void Wordle::pickWord()
{
    srand(time(NULL)); // initialize the random seed
    int idx = rand() % allWords.size();
    set<string>::iterator iter = allWords.begin();
    for (int i = 0; i < idx; i++)
    {
        iter++;
    }

    answer = *iter;
}

void Wordle::toLowerCase(string &word)
{
    transform(word.begin(), word.end(), word.begin(), [](unsigned char c)
              { return tolower(c); });
}

void Wordle::toUpperCase(string &word)
{
    transform(word.begin(), word.end(), word.begin(), [](unsigned char c)
              { return toupper(c); });
}

bool Wordle::isFiveLetter() { return (userInput.length() == 5); }

bool Wordle::isInDict() { return (allWords.find(userInput) != allWords.end()); }

void Wordle::getValidInput()
{
    cout << "Your guess: ";
    cin >> userInput;
    toLowerCase(userInput);

    while (!isFiveLetter() or !isInDict())
    {
        if (!isFiveLetter())
        {
            cout << "Must be a 5-letter word.\n"
                 << endl;
        }
        else
        {
            cout << "Not in word list.\n"
                 << endl;
        }

        cout << "Guess another word: ";
        cin >> userInput;
        toLowerCase(userInput);
    }
}

void Wordle::checkUserGuess()
{
    for (int i = 0; i < 5; i++)
    {
        char a = userInput[i];
        char b = answer[i];
        if (a == b)
        {
            check[i] = toupper(a);
        }
        else if (answer.find(a) != string::npos)
        {
            check[i] = a;
        }
        else
        {
            check[i] = '_';
        }
    }

    history += (check + '\n');
    cout << history << "\n"
         << endl;
}

void Wordle::isWin()
{
    if (userInput == answer)
    {
        toUpperCase(userInput);
        history += (userInput);
        cout << history << endl;
        cout << "\nCongrats! You get the word!\n"
             << endl;
        allowAttemp = 0;
    }
    else
    {
        checkUserGuess();
        allowAttemp -= 1;
        if (allowAttemp == 0)
        {
            toUpperCase(answer);
            cout << "\nThe WORDLE is " << answer << "\n"
                 << endl;
        }
    }
}

void Wordle::gamePlay()
{
    chooseFile("5-letter-words.txt");
    openWordFile();
    pickWord();

    welcome();
    hint();
    while (allowAttemp > 0)
    {
        cout << "You have " << allowAttemp << " attemps left" << endl;
        getValidInput();
        isWin();
    }
}

int main()
{
    cout << "\nWelcome to my-pretend-to-be WORDLE!" << endl;
    string userChoice = "Y";

    while (userChoice == "Y")
    {
        Wordle Game;
        Game.gamePlay();
        cout << "Do you want to play another round? (Y/N): ";
        cin >> userChoice;
        cout << "----------------------------------" << endl;
    }

    return 0;
}
