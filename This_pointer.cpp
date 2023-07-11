#include <iostream>
using namespace std;
class A{
    int x;
    public:
    void getnum( int x){
    this->x=x;// !=
    }

void shownum(){
cout<<x;
}

};
int main (){
    class A A1, A2;
    A1.getnum(5);
    A1.shownum();
    A2.getnum(5);
    A2.shownum();
    return 0;
}

