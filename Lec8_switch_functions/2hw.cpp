#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the amount in rupees: ";
    cin >> n;

    int remaining = n;
    int notes100, notes50, notes20, notes1;
    
    for (int step = 1; step <= 4; ++step) {
        switch (step) {
            case 1:
                notes100 = remaining / 100;
                remaining %= 100;
                cout << "Number of notes of Rs.100: " << notes100 << endl;
                break;
            case 2:
                notes50 = remaining / 50;
                remaining %= 50;
                cout << "Number of notes of Rs.50: " << notes50 << endl;
                break;
            case 3:
                notes20 = remaining / 20;
                remaining %= 20;
                cout << "Number of notes of Rs.20: " << notes20 << endl;
                break;
            case 4:
                notes1 = remaining;
                cout << "Number of notes of Rs.1: " << notes1 << endl;
                break;
        }
    }

    return 0;
}
