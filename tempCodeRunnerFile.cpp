#include <iostream>
using namespace std;
class MyClasses{
public:
    MyClasses(){
        cout<< "Constructor called." << endl;
    }

    ~ MyClasses(){
        cout<< "Destructor called." << endl;
    }
};

int main(){
    cout<< "Creating an object." << endl;
    MyClasses obj; // Object creation (construction)

    cout<< "Exiting the program." << endl;
    return 0; // Object destruction
}