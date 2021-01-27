#include <iostream>
#include <cstring>
using namespace std;
#define N 100

bool isSeparator(char c)
{
   char s[] = ",.! ?";
   for (int i = 0; s[i] != '\0'; i++)
   {
      if(c == s[i])
      {
         return true;
      }
   }
   return false;
   
}

void removeDuplicates(char str[])
{
    int start, end, i, length = 0;
    char substr[N][N]={0};

    while(str[i] != '\0')
    {
        end = 0;

        while(!isSeparator(str[i]) && str[i] != '\0')
        {
            substr[start][end]=str[i];
            i++;
            end++;
        }

        substr[start][end] = '\0';
        start++;

        if(str[i] != '\0')
        {
            i++;
        }
    }

    length = start;

    for(start = 0; start < length; start++)
    {
         for(end = start+1; end < length;)
            if(strcmp(substr[start], substr[end]) == 0)
            {
                for(i = end; i < length; i++)
                {
                    strcpy(substr[i], substr[i+1]);
                }
                length--;
            }
         else
         {
             end++;
         }
    }
   for(start = 0; start < length; start++)
    {
        cout << substr[start] << " ";
    }
}


int main ()
{
    char str[] = "how do you do? you boring, do you? ";
    char words[128];

    cout << "Initial string:" << endl;
    cout << str << endl;
    cout << "Removed duplicates:" << endl;
    
    removeDuplicates(str);
   
	return 0;
}

