#include <iostream>
using namespace std;
class complex{
    float real;
    float img;
    public:
    void getdata(){
        cout<<"enter the real value:\n";
        cin>>real;
        cout<<"enter the img value:\n";
        cin>>img;

    }
    void multiply(complex a, complex b)
    {
     real=(a.real*b.real)-(a.img*b.img);
     img=(a.real*b.img)+(a.img*b.real);
    } 
    void display()
    {
        cout<<""<<real<<""+"<<img<<";
    }

};
int main(){
    complex c1,c2,c3;
    cout<<"enter the complex c1";
    c1
}