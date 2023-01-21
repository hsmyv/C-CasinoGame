#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include <string>
#include <ctime>
using namespace std;

void drawLine(int n, char symbol);
void rules();


int main()
{
    string playerName;
    int amount;
    int bettingAmount;
    int guess;
    int random;
    char choice;
    int winning = 0;


    srand(time(0)); // "Seed" the random generator
    drawLine(60, '_');
    cout << "\n\n\n\t\tCASINO GAME\n\n\n\n";
    drawLine(60, '_');

    cout << "\n\nEnter Your Name : ";
    getline(cin, playerName);

    cout << "\n\nEnter Deposit amount to play game : $";
    cin >> amount;

    do
    {
        system("cls");
        cout << "\n\nYour current balance is $ " << amount << "\n";

        do
        {
            cout << playerName << ", enter money to bet : $";
            cin >> bettingAmount;
            if (bettingAmount > amount)
                cout << "Your betting amount is more than your current balance\n"
                     << "\nPlease re-enter again!\n ";
        } while (bettingAmount >amount);

        do
        {
            cout << "Guess your number to bet between 1 to 10 :";
            cin >> guess;
            if (guess <= 0 || guess > 10)
                cout << "Please check the number!! should be between 1 to 10\n"
                     << "\nPlease re-enter again\n ";
        } while (guess <= 0 || guess > 10);

        random = rand()%1 +1;
        if(random == guess)
        {
            if(winning >= 10)  // there is little fraude that if user win more than 10, he will lose although he guess truly
            {
                cout << "\nThe winning number was : " << random + 1 << "\n";
                cout << "Bad Luck this time !! You lost $ " << bettingAmount << "\n";
                amount = amount - bettingAmount;
                
            }else{
                cout << "\nThe winning number was : " << random << "\n";
                cout << "\n\nGood Luck!! You won $ " << bettingAmount * 10;
                amount = amount + bettingAmount * 10;
                winning += 1;
            }
        }

        cout << "\n"
             << playerName << ", You have $ " << amount << "\n";

        if (amount == 0)
        {
            cout << "You have no money to play ";
            break;
        }
        cout << "\n\n-->Do you want to play again (y/n)? ";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');
    cout << "\n\n\n";
    drawLine(70, '=');
    cout << "\n\nThanks for playing game. Your balance amount is $ " << amount << "\n\n";
    drawLine(70, '=');
}

    void drawLine(int n, char symbol){
        for (int i = 0; i < n; i++)
            cout << symbol;
        cout << "n";

    }
