#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 5;

    if (x > y) {
        cout << "x is greater than y." << endl;

        if (x > 0) {
           cout << "x is a positive number." << endl;
        } 
        else {
            cout << "x is a negative number." << endl;
        }
    } else {
        cout << "x is not greater than y." << endl;

        if (x == 0) {
            cout << "x is zero." << endl;
        } else {
            cout << "x is a negative number." << endl;
        }
    }

    return 0;
}