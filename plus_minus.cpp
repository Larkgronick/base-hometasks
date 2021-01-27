#include <iostream>
#include <cstring>
using namespace std;

bool isLetter(char symbol)
{
    return !(symbol >= '0' && symbol <= '9'); 
}

bool isEven(char symbol)
{
    return (symbol - '0') % 2 == 0;
}
void printSign(char symbol, char sign)
{
    int counter = (symbol - '0');

    while (counter > 0)
    {
       cout << sign;
       counter--;
    }
}

void getPlusMinusView(char str[])
{
 
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if(isLetter(str[i])){ 
            cout << str[i];
        }
        else if(isEven(str[i]))
        {
            printSign(str[i], '+');
        } else {
             printSign(str[i], '-');
        }
    }
    
}

int main()
{
    int checkPosition = 0;
    char str[]= "AB3 2K 0"; 
    
    getPlusMinusView(str);

}
