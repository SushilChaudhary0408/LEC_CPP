#include <iostream>
using namespace std;
class mobile{
    int m=10;
    public:
    void display(){
        cout<<"value of m is"<<this->m;
        cout<<"the value of object is"
    }
};
int main (){
    class mobile m1, m2;
    m1.display();
    m2.display();
return 0;
}