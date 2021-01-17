#include <iostream>
#include <cstring>
using namespace std;

bool isDigit (char symbol);
bool isNumber(char str[]); 
bool isAlpha(char symbol); 
bool isWord(char str[]); 

int strtoint(char str[]);


int main()
{
    int checkPosition = 0;
    char str[]= "1234567aaaa233"; 

    cout << endl;

    
    if (isDigit(str[checkPosition])) {
        cout << str[checkPosition] << " is a digit" << endl;
    } else {
        cout << str[checkPosition] << " is not a digit" << endl;
    }

   if (isNumber(str)) {
        cout << str << " is a number" << endl;
    } else {
        cout << str << " is not a number" << endl;
    }

    if (isAlpha(str[checkPosition])) {
        cout << str[checkPosition] << " is an alpha" << endl;
    } else {
        cout << str[checkPosition] << " is not an alpha" << endl;
    }

    if (isWord(str)) {
        cout << str << " is a word" << endl;
    } else {
        cout << str << " is not a word" << endl;
    }

    cout << "Integer from " << str << " is " << strtoint(str) << endl;
    cout << endl;

}

 

bool isNumber(char str[])
{
    for (int i = 0; i < strlen(str); i++)
    {
         if(isDigit(str[i]) == false)
        {
          return false;
        } 
    
    }
    return true;

}

bool isDigit (char symbol)
{
    if(symbol >= '0' and symbol <= '9') {
     return true;
    } else {
     return false;
    }
  
}


bool isAlpha(char symbol)
{
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                      "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < strlen(alphabet); i++) {
        if(alphabet[i] == symbol)
        {
          return true;   
        }
    }
    return false;

}

bool isWord(char str[])
{
    for (int i = 0; i < strlen(str); i++)
    {
         if(isDigit(str[i]))
        {
          return false;
        } 
    
    }
    return true;

}

int strtoint(char str[])
{
    int i = 0;
    int num = 0;
    while (str[i] != 0)
    {
        num =  (str[i] - '0')  + (num * 10);
        i++;
    }
    return num;;
  
}


