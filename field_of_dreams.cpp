#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

void showField(char hiddenWord[], int wordLength)
{
    system("cls");

    cout << "Field of Dream Game with Leonid Jacubovich" << endl;
    cout << "----------" << endl;
    cout << "Question: What do the chicken and us have in common?" << endl; 
    cout << "----------" << endl;
    cout << "Choose a letter until you guess a word:" << endl;

    for (int i = 0; i < wordLength; i++)
    {
        cout << "-----";
    }

    cout << endl;

    for (int i = 0; i <= wordLength; i++)
    {
        if (i % 2 == 0 && i == wordLength);
        {
            cout << " | ";
        } 
        cout << hiddenWord[i];
    }

    cout << endl;

    for (int i = 0; i < wordLength; i++)
    {
        cout << "-----";
    }

    cout << endl;
   
}

void runJakubovichJoke()
{
    const char *phrases[4] = { "Da ladno!", "AAAutomobil!", "Prizy v studiu!", "Pa-be-di-tel! Pa-be-di-tel!"};

    std::cout << phrases[rand() % 4] << endl;

}

char* hideWord(char wordToHide[])
{
    int wordLength = strlen(wordToHide);
    char* ch = new char;

    for (int i = 0; i < wordLength; i++)
    {
        ch[i] = '?';
    }

    return ch;
}


bool checkAnswer(char symbol, char wordToHide[], char* hiddenWord)
{
    char *letter = hiddenWord;
    int match = 0;

    for (int i = 0; i < strlen(wordToHide); i++)
    {
        if(symbol == wordToHide[i])
        {
            letter[i] = symbol;
            showField(hiddenWord, 9);
            match = 1;
        }
    }

    if(match == 1)
    {
        return strcmp(hiddenWord, wordToHide) == 1;
    } 

    return false;
}

void makeGuess(char wordToHide[], char* hiddenWord)
{
    char userChoice;
    while(!(checkAnswer(userChoice, wordToHide, hiddenWord)))
    {
        cout << "Your letter is?" << endl;
        cin >> userChoice;
    }
    runJakubovichJoke();
   
}


int main()
{

 char wordToHide[] = "incubator";
 int wordLength = strlen(wordToHide);

 char* hiddenWord = hideWord(wordToHide);

 showField(hiddenWord, wordLength);
 makeGuess(wordToHide, hiddenWord);

}
