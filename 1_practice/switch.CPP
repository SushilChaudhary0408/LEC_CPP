#include <iostream>
using namespace std;

int main(){
    int choice;
    cout<< "1. option 1\n";
    cout<< "2. option 2\n";
    cout<< "3. option 3\n";
    cin>>choice;

    switch(choice) {
        case 1: 
        cout << "you selected option 1\n ";
        break;

        
        case 2 :
        cout << "you selected option 2 \n";
        break;

        case 3:
        cout << "you selected option 3 \n ";
        break;
    }
    return 0;
    }