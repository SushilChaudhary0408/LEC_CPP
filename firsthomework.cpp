#include<iostream>
using namespace std;

class Room {
    public:
    int length ;
    int breadth;
    int height;
    double calculateArea() {
        return length * breadth;
    }
    double calculateVolume() {
        return length * breadth * height;
    } 
};
    int main(){
    Room obj401;
    cout<<"Enter Room length:";
    cin>>obj401.length;
    cout<<"Enter Room breadth:";
    cin>>obj401.breadth;
    cout<<"Enter Room height:";
    cin>>obj401.height;

    cout<<"Area of Room:";
    cout<<obj401.calculateArea();
    cout<<"Volume of Room:";
    cout<<obj401.calculateVolume();
    return 0;
    }




