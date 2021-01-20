#include <iostream>
#include <cstring>
using namespace std;


void showExponentsTwo(int array[], int length);

bool isPowerOfTwo(int n); 

int main()
{
    int array[] = {5, 2, 4, 6, 8, 10, 1};
    int length = sizeof(array)/sizeof(array[0]);
    showExponentsTwo(array, length);
}

void showExponentsTwo(int array[], int length)
{
    for (int i = 1; i < length ; i++)
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
    return true; 
} 
