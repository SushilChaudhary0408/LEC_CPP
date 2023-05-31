#include<iostream>
using namespace std;
int swap(int &s, int &u){
    int t;
    cout<<"Initial values\nX="<<s<<" Y="<<u;
    t=s;
    s=u;
    u=t;
    return 0;
}
int getnum(){
    int a;
    cout<<"Enter a number";
    cin>>a;
    return a;
}
int main(){
    int x=getnum();
    int y=getnum();
    swap(x,y);
    cout<<"\nSwapped Values\nX="<<x<<" Y="<<y;
    return 0;
}
