#include <iostream>
using namespace std;
#define N 128

bool isSeparator(char c);
void showWordAmount(char text[]);
void showMostRepeatedChar(char text[]);


int main()
{
   char text[N];

   cout << "Input text: ";
   cin.getline(text, N);
   
   showWordAmount(text);
   showMostRepeatedChar(text);
   
   return 0;
}

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

void showWordAmount(char text[])
{
   char word[N];
   int i, iw, wordLength,  maxLength, startIndex, wordAmount  = 0;

   for (i = 0; text[i] != '\0'; i++)
   {
      if (!isSeparator(text[i]))
      {
        word[iw] = text[i];
        iw++;
        
        if(isSeparator(text[i+1]) or text[i+1] == '\0')
        {
           wordLength = iw;
           if(maxLength < wordLength)
           {
              maxLength = wordLength;
              startIndex = i+1 - maxLength; 
           }
           word[iw] = '\0';
           iw = 0;
           wordAmount++;
        }
      }    
   }

   cout << "Word amount: " << wordAmount << endl;
   cout << "Largest word: ";

   for (i = startIndex; i < startIndex + maxLength; i++) 
   {
			cout << text[i];
	}

   cout << endl;
   
}

void showMostRepeatedChar(char text[])
{
   char repeatedChar;
   int i, repeat, max = 0;

   	for (i = 0; text[i] != '\0'; i++) {
		   for (int j = 0; text[j] != '\0'; j++) {
		   	if (text[i] == text[j]) {
		   		repeat++;
		   		if (repeat > max) {
		   			max = repeat;
		   			repeatedChar = text[i];
		   		}
		   	}
		   }
		   repeat = 0;
	   }

   cout << "Most repeated character is: " << repeatedChar << endl;
}