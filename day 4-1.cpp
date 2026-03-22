// day 4-1 casino v0.1
#include <iostream>
#include <time.h>


using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    srand(time(NULL)); // что бы выдавало всегда разные
    
    int balance = 100;
    bool exit = false;
    bool win;
    int chance, bet, reslt;
    float cef;
    cout << "Casino v0.1" << endl;
    cout << "g - to gamble" << endl;
    cout << "h - to get help" << endl;
    cout << "s - to see stats" << endl;
    cout << "q - to exit" << endl;
    cout << "start money = 100" << endl;

    do {
        char input;
        cout << "Enter command: (r;h;s)" << endl;

        cin >> input;

        if (input == 's') 
            cout << "balance: " << balance << endl;

        else if (input == 'h') {
            cout << "g - to gamble" << endl;
            cout << "h - to get help" << endl;
            cout << "s - to see stats" << endl;
        }
        else if (input == 'g') {
            cout << "Enter bet :";
            cin >> bet;
            if (bet <= 0){
                cout << "incorect bet" << endl;
            }
            else {
                cout << "Enter chance (99%-1%) :";
                cin >> chance;
                if (chance <= 0 || chance >= 100) {
                    cout << "incorect chance" << endl;
                    
                }
                else {
                    balance -= bet;
                    cef = 100.0 / chance;
                    reslt = 1 + rand() % 100;
                    if (reslt > chance){
                        win = false;
                    }
                    else if (reslt <= chance){
                        win = true;
                    }

                    if (win == false) {
                        cout << "you lose" << endl;
                        balance -= bet;
                    }
                    else if (win == true) {
                        cout << "you win" << endl;
                        balance += bet*cef;
                        cout << "balance: " << balance << endl;
                        
                    }

                }

            }

        } 
        else if (input == 'g')
            exit = true;
        else {
            cout << "input error" << endl;
        }


    } while (!exit);

    cout << "gg" << endl;
    return 0;
}
