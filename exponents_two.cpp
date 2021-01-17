#include <iostream>
#include <cstring>
using namespace std;


void showExponentsTwo(int array[], int length);

bool isPowerOfTwo(int n); 

int main()
{
    int length = 10;
    int array[length] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    showExponentsTwo(array, length);
}

void showExponentsTwo(int array[], int length)
{
    for (int i = 1; i < length; i++)
    {
        if (isPowerOfTwo(array[i]))
        {
             cout << array[i]  << " " ;
        }
    }

};


bool isPowerOfTwo(int n) 
{ 
    if (n == 0) {
        return false; 
    }
      
    while (n != 1) 
    { 
        if (n%2 != 0) {
            return false; 
        }
            
        n /= 2; 
    } 

    return 1; 
} 
