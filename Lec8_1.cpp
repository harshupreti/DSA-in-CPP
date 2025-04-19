// No. of notes required using switch statement
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout << "Enter an amount: ";
    cin >> n;

    int choice;
    if (n > 100)
    {
        choice = 1;
    }
    else if (n > 50)
    {
        choice = 2;
    }
    else if (n > 20)
    {
        choice = 3;
    }
    else
    {
        choice = 4;
    }

    int hundred_notes = 0;
    int fifty_notes = 0;
    int twenty_notes = 0;

    switch (choice)
    {
    case 1:
        hundred_notes = n/100;
        cout << "No.of 100 notes: " << hundred_notes << endl;
        n -= (hundred_notes*100);

    case 2:
        fifty_notes = n/50;
        cout << "No.of 50 notes: " << fifty_notes << endl;
        n -= (fifty_notes*50);

    case 3:
        twenty_notes = n/20;
        cout << "No.of 20 notes: " << twenty_notes << endl;
        n -= (twenty_notes*20);

    case 4:
        cout << "No. of 1 notes: " << n << endl;
        break;

    default:
        cout << "Invalid Amount" << endl;
    }

    return 0;
}