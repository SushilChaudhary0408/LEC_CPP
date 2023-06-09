#include <iostream>
using namespace std;

class Vehicle{
    private:
    int platenumber;

     public:
     Vehicle(int plate){
       platenumber=plate;
       cout<<"the platenumber is: "<<platenumber; 
     }   

};

int main(){
    Vehicle s1(1000);

    return 0;
}