#include <iostream>
using namespace std;

void display(){
int static i=1; 
i=i+5;
cout<<"enter value";
};
int main()
{
    display();
    display();
    return 0;
}
