#include <iostream>
#include <math.h>
#include <iomanip>
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h> 
using namespace std;
int main() {
    int exit = 0;
    srand(time(0));
    int d1 = (rand() % 6) +1;
    int d2 = (rand() % 6) +1;
    int total = d1+d2;
    
    while (exit != 1) {   
        if (total == 7 || total == 9 || total == 11) {
            cout << "Die 1: " << d1 << "    " << "Die 2: " << d2 << "   " << "Total: " << total << endl;
            cout << "You're a WINNER!" << endl;
            exit = 1;
        }
        else if (total == 2 || total == 3 || total == 5) {
            cout << "Die 1: " << d1 << "    " << "Die 2: " << d2 << "   " << "Total: " << total << endl;
            cout << "You LOST!!" << endl;
            exit = 1;
        }
        else {
            int exit2 = 0;
            while (exit2 != 1) {
                
                if(total == 1 || total == 4 || total == 6 || total == 8 || total ==10 || total == 12) {
                    cout << "Die 1: " << d1 << "    " << "Die 2: " << d2 << "   " << "Total: " << total << endl;
                    cout << "Let's roll again... " << endl;
                    d1 = (rand() % 6) +1;
                    d2 = (rand() % 6) +1;
                    total = d1+d2;
                }
                else {
                    exit2 = 1;
                }
            }
        }
    }
    cout << "Game Over." << endl;
}