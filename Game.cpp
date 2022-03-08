#include <iostream>
#include <conio.h>
using namespace std;
// data structures
int const length = 3;
char gride[length][length] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
string player1 = " ", player2 = " ";
// prototypes
void welcomeHeader();             // game welcome screen header
void menu();                      // game main menu
void header();                    // game header
void playersSelection();          // players names
void displayGride();              // game playing area
void playerChoose(int turn);      // changing of player turn and store input
bool checkRows(char symbol);      // check winner condition in row
bool checkColumns(char symbol);   // check winner condition in column
bool checkDiagonals(char symbol); // check winner condition in digonally
bool draw();
void hold();       // hold the screen unit user value;
void reSeat();     // reSeat the value of game after game over
void invalidTry(); // show when invalid key press
int main()
{
    char userOption = ' ';
    while (true)
    {
        welcomeHeader();
        menu();
        cin >> userOption;
        if (userOption == '1')
        {
            playersSelection();
            reSeat();
            int counter = 0;
            while (true)
            {
                header();
                displayGride();
                playerChoose(counter);
                bool check = draw();
                if (counter % 2 == 0)
                {
                    if ((checkRows('X')) || (checkColumns('X')) || (checkDiagonals('X')))
                    {
                        header();
                        displayGride();
                        cout << "Congratulation!!! " << player1 << endl;
                        cout << player1 << " is Winner." << endl;
                        hold();
                        break;
                    }
                    else if (check == true)
                    {
                        header();
                        displayGride();
                        cout << "Well played" << endl;
                        cout << "Match draw!!! " << endl;
                        hold();
                        break;
                    }
                }
                else if (counter % 2 != 0)
                {
                    if ((checkRows('O')) || (checkColumns('O')) || (checkDiagonals('O')))
                    {
                        header();
                        displayGride();
                        cout << "Congratulation!!! " << player2 << endl;
                        cout << player2 << " is Winner." << endl;
                        hold();
                        break;
                    }
                    else if (check == true)
                    {
                        header();
                        displayGride();
                        cout << "Well played" << endl;
                        cout << "Match draw!!! " << endl;
                        hold();
                        break;
                    }
                }
                counter++;
            }
        }
        else if (userOption == '2')
        {
            header();
            cout << "Application name : Tic Tac Toe " << endl;
            cout << "Version          : 1.0" << endl;
            cout << "Develop by       : Muhammad Hammad Hassan" << endl;
            cout << "Instructor       : Dr Awais Hassan " << endl;
            hold();
        }
        else if (userOption == '3')
        {
            header();
            cout << "Thank for using Tic Tac Toe gaming application " << endl;
            cout << "Take Care Allah Hafiz" << endl;
            break;
        }
        else
        {
            invalidTry();
        }
    }
} // end of function
void welcomeHeader()
{
    system("cls");
    cout << "*************************************************" << endl;
    cout << "*                      ***                      *" << endl;
    cout << "*                  ***    ***                   *" << endl;
    cout << "*            Welcome to Tic Tac Toe             *" << endl;
    cout << "*                  ***    ***                   *" << endl;
    cout << "*                      ***                      *" << endl;
    cout << "*************************************************" << endl;
} // end of function
void menu()
{
    cout << "Choose Option" << endl;
    cout << "1. Play" << endl;
    cout << "2. About" << endl;
    cout << "3. Exit" << endl;
    cout << "Press option... ";
} // end of function
void header()
{
    system("cls");
    cout << "*************************************************" << endl;
    cout << "*                      ***                      *" << endl;
    cout << "*               Tic Tac Toe Game                *" << endl;
    cout << "*                      ***                      *" << endl;
    cout << "*************************************************" << endl;
} // end of function
void playersSelection()
{
    header();
    cout << "Enter first plyer name  : ";
    cin >> player1;
    cout << "Enter second plyer name : ";
    cin >> player2;
} // end of function
void displayGride()
{
    cout << endl;
    cout << "|---------------|---------------|---------------|" << endl;
    for (int x = 0; x < length; x++)
    {
        cout << "|               |               |               |" << endl;
        for (int y = 0; y < length; y++)
        {
            cout << "|\t" << gride[x][y] << "\t";
        }
        cout << "|";
        cout << endl;
        cout << "|               |               |               |" << endl;
        cout << "|---------------|---------------|---------------|" << endl;
    }
} // end of function
void playerChoose(int turn)
{
    char option;
    if (turn % 2 == 0)
    {
        cout << "Player 1 :  " << player1 << "  [X]  Option : ";
        cin >> option;
        if (option == '1')
        {
            if (gride[0][0] == '1')
            {
                gride[0][0] = 'X';
            }
            else
            {
                invalidTry();
            }
        }
        else if (option == '2')
        {
            if (gride[0][1] == '2')
            {
                gride[0][1] = 'X';
            }
            else
            {
                invalidTry();
            }
        }
        else if (option == '3')
        {
            if (gride[0][2] == '3')
            {
                gride[0][2] = 'X';
            }
            else
            {
                invalidTry();
            }
        }
        else if (option == '4')
        {
            if (gride[1][0] == '4')
            {
                gride[1][0] = 'X';
            }
            else
            {
                invalidTry();
            }
        }
        else if (option == '5')
        {
            if (gride[1][1] == '5')
            {
                gride[1][1] = 'X';
            }
            else
            {
                invalidTry();
            }
        }
        else if (option == '6')
        {
            if (gride[1][2] == '6')
            {
                gride[1][2] = 'X';
            }
            else
            {
                invalidTry();
            }
        }
        else if (option == '7')
        {
            if (gride[2][0] == '7')
            {
                gride[2][0] = 'X';
            }
            else
            {
                invalidTry();
            }
        }
        else if (option == '8')
        {

            if (gride[2][1] == '8')
            {
                gride[2][1] = 'X';
            }
            else
            {
                invalidTry();
            }
        }
        else if (option == '9')
        {
            if (gride[2][2] == '9')
            {
                gride[2][2] = 'X';
            }
            else
            {
                invalidTry();
            }
        }
        else
        {
            invalidTry();
        }
    }
    else if (turn % 2 != 0)
    {
        cout << "Player 2 : " << player2 << "  [O]  Option : ";
        cin >> option;
        if (option == '1')
        {
            if (gride[0][0] == '1')
            {
                gride[0][0] = 'O';
            }
            else
            {
                invalidTry();
            }
        }
        else if (option == '2')
        {

            if (gride[0][1] == '2')
            {
                gride[0][1] = 'O';
            }
            else
            {
                invalidTry();
            }
        }
        else if (option == '3')
        {

            if (gride[0][2] == '3')
            {
                gride[0][2] = 'O';
            }
            else
            {
                invalidTry();
            }
        }
        else if (option == '4')
        {

            if (gride[1][0] == '4')
            {
                gride[1][0] = 'O';
            }
            else
            {
                invalidTry();
            }
        }
        else if (option == '5')
        {
            if (gride[1][1] == '5')
            {
                gride[1][1] = 'O';
            }
            else
            {
                invalidTry();
            }
        }
        else if (option == '6')
        {

            if (gride[1][2] == '6')
            {
                gride[1][2] = 'O';
            }
            else
            {
                invalidTry();
            }
        }
        else if (option == '7')
        {

            if (gride[2][0] == '7')
            {
                gride[2][0] = 'O';
            }
            else
            {
                invalidTry();
            }
        }
        else if (option == '8')
        {

            if (gride[2][1] == '8')
            {
                gride[2][1] = 'O';
            }
            else
            {
                invalidTry();
            }
        }
        else if (option == '9')
        {

            if (gride[2][2] == '9')
            {
                gride[2][2] = 'O';
            }
            else
            {
                invalidTry();
            }
        }
        else
        {
            invalidTry();
        }
    }
} // end of function
bool checkRows(char symbol)
{
    int count = 0;
    for (int x = 0; x < length; x++)
    {
        count = 0;
        for (int y = 0; y < length; y++)
        {
            if (gride[x][y] == symbol)
            {
                count = count + 1;
            }
        }
        if (count == length)
        {
            return 1;
        }
    }
    return 0;
} // end of function
bool checkColumns(char symbol)
{
    int count = 0;
    for (int y = 0; y < length; y++)
    {
        count = 0;
        for (int x = 0; x < length; x++)
        {
            if (gride[y][x] == symbol)
            {
                count = count + 1;
            }
        }
        if (count == length)
        {
            return 1;
        }
    }
    return 0;
} // end of function
bool checkDiagonals(char symbol)
{
    int count = 0;
    for (int idx = 0; idx < length; idx = idx + 1)
    {
        if (gride[idx][idx] == symbol)
        {
            count = count + 1;
        }
    }
    if (count == length)
    {
        return 1;
    }
    return 0;
} // end of function
bool draw()
{
    bool check = false;
    int count = 0;
    for (int x = 0; x < length; x++)
    {
        for (int y = 0; y < length; y++)
        {
            if (gride[x][y] == 'X' || gride[x][y] == 'O')
            {
                count = count + 1;
            }
        }
    }
    if (count == 9)
    {
        check = true;
    }
    return check;
}
void hold()
{
    cout << "Press any key to continue...";
    getch();
} // end of function
void reSeat()
{
    int num = 49;
    char i;
    for (int x = 0; x < length; x++)
    {
        for (int y = 0; y < length; y++)
        {
            i = num;
            gride[x][y] = i;
            // cout << gride[x][y];
            num++;
        }
    }
} // end of function
void invalidTry()
{
    cout << "Invalid Try" << endl;
    hold();
} // end of function