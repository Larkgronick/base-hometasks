#include <iostream>
#include <string>
using namespace std;

#define SIZE 3

int counter;
int mode;
char sign = 'X';
std::string playerOne("Player One");
std::string playerTwo("Player Two");
char field[SIZE][SIZE] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

void selectMode()
{
  
    int userChoice;
    system("cls");

    while (true)
    {

        cout << "Please, select game mode" << endl;
        cout << "1) VS Computer" << endl;
        cout << "2) VS Player" << endl;
        cin >> userChoice;

        if (userChoice == 1)
        {
            playerOne = "Player";
            playerTwo = "Computer";
            mode = 1;
            break;
        } else if (userChoice == 2)
        {
            playerOne = "Player One";
            playerTwo = "Player Two";
            mode = 2;
            break;
        } else {
             system ("CLS");
            cout << "Select 1 or 2, please" << endl;
            
        }
    }
    
}

void drawField()
{
    system("cls");    
    cout << endl;
    cout << "TIC TAC TOE GAME" << endl << endl;
    for (int i = 0; i < SIZE; i++)
    { 
      for (int j = 0; j < SIZE; j++)
      {
        cout << " | " <<  field[i][j] ;
      }
      cout << " |" << endl;
      cout << "----------------" << endl << endl;
    }
}

void makeMove()
{
    int userChoice;
    if (sign == 'X')
    {
       cout << playerOne <<  " select cell: "; 
       cin >> userChoice;
    } 
    else
    {
        cout << playerTwo <<  " select cell: "; 
        if(mode == 1)
        {
            userChoice = rand() % 9 + 1;
        } else
        {
            cin >> userChoice;
        }
       
    }

    switch (userChoice)
    {
    case 1:
        if (field[0][0] == '1')
        {
            counter++;
            field[0][0] = sign;
        }   
        else
        {
            cout << "Field is already in use try again!" << endl;
            makeMove();
        }
        break;
    case 2:
         if (field[0][1] == '2')
         {
            counter++;       
            field[0][1] = sign;
         }
          
        else
        {
            cout << "Field is already in use try again!" << endl;
            makeMove();
        }
        break;
    case 3:
        if (field[0][2] == '3')
        {
            counter++;
            field[0][2] = sign;
        }
        else
        {
            cout << "Field is already in use try again!" << endl;
            makeMove();
        }
        break; 
    case 4:
        if (field[1][0] == '4')
        {
            counter++;       
            field[1][0] = sign;
         }
        else
        {
            cout << "Field is already in use try again!" << endl;
            makeMove();
        }
        break;   
    case 5:
        if (field[1][1] == '5')
        {
            counter++;       
            field[1][1] = sign;
        }
        else
        {
            cout << "Field is already in use try again!" << endl;
            makeMove();
        }
        break;   
    case 6:
        if (field[1][2] == '6')
        {
            counter++;       
            field[1][2] = sign;
         }
        else
        {
            cout << "Field is already in use try again!" << endl;
            makeMove();
        }
        break;

    case 7:
        if (field[2][0] == '7')
        {
            counter++;       
            field[2][0] = sign;
        }
        else
        {
            cout << "Field is already in use try again!" << endl;
            makeMove();
        }      
        break;
    case 8:
        if (field[2][1] == '8')
        {
            counter++;       
            field[2][1] = sign;
        }
        else
        {
            cout << "Field is already in use try again!" << endl;
            makeMove();
        }
        break;
    case 9:
        if (field[2][2] == '9')
        {
            counter++;       
            field[2][2] = sign;
         }
        else
        {
            cout << "Field is already in use try again!" << endl;
            makeMove();
        }
        break;
    default:
        break;
    }
    
}
    
void changePlayer()
{
    if(sign == 'X')
    {
        sign = 'O';
        
    } else {
        sign = 'X';
    }
 
}

char endGame()
{
    if (field[0][0] == 'X' && field[0][1] == 'X' && field[0][2] == 'X')
        return 'X';
    if (field[1][0] == 'X' && field[1][1] == 'X' && field[1][2] == 'X')
        return 'X';
    if (field[2][0] == 'X' && field[2][1] == 'X' && field[2][2] == 'X')
        return 'X';
    if (field[0][0] == 'X' && field[1][0] == 'X' && field[2][0] == 'X')
        return 'X';
    if (field[0][1] == 'X' && field[1][1] == 'X' && field[2][1] == 'X')
        return 'X';
    if (field[0][2] == 'X' && field[1][2] == 'X' && field[2][2] == 'X')
        return 'X';
 
    if (field[0][0] == 'X' && field[1][1] == 'X' && field[2][2] == 'X')
        return 'X';
    if (field[2][0] == 'X' && field[1][1] == 'X' && field[0][2] == 'X')
        return 'X';

    if (field[0][0] == 'O' && field[0][1] == 'O' && field[0][2] == 'O')
        return 'O';
    if (field[1][0] == 'O' && field[1][1] == 'O' && field[1][2] == 'O')
        return 'O';
    if (field[2][0] == 'O' && field[2][1] == 'O' && field[2][2] == 'O')
        return 'O';
    if (field[0][0] == 'O' && field[1][0] == 'O' && field[2][0] == 'O')
        return 'O';
    if (field[0][1] == 'O' && field[1][1] == 'O' && field[2][1] == 'O')
        return 'O';
    if (field[0][2] == 'O' && field[1][2] == 'O' && field[2][2] == 'O')
        return 'O';
    if (field[0][0] == 'O' && field[1][1] == 'O' && field[2][2] == 'O')
        return 'O';
    if (field[2][0] == 'O' && field[1][1] == 'O' && field[0][2] == 'O')
        return 'O';
 
    return '?';

}

int main()
{
    selectMode();
    drawField(); 
    while (true)
    {
        makeMove();
        drawField();
        if (endGame() == 'X')
        {
            cout << "Thanks for playing!" << endl;
            cout << playerOne << " wins!" << endl; 
            break;
        }
        else if (endGame() == 'O')
        {
            cout << "Thanks for playing!" << endl;
            cout << playerTwo << " wins!" << endl;
            break;
        }
        else if (counter == 9 && endGame() == '?')
        {
            cout << "It's a draw!" << endl;
            cout << "Thanks for playing!" << endl;
            break;
        }
        
        changePlayer(); 
    }
    system("pause");
    return 0;

}
