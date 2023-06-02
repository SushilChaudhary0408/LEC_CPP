#include<iostream>
using namespace std;
class complex{
    private:
    float real;
    float imag;

    public:
    void readvalue()
    {
        cout<<"Enter the real part: ";
        cin>>real;
        cout<<"Enter the imaginary part:  ";
        cin>>imag;

    }
    void showvalue()
    {
        cout<<"("<<real<<","<<imag<<")";
    }

    void add(complex c1, complex c2)
    {
        real=c1.real+c2.real;
        imag=c1.imag+c2.imag;
    }

};
int main()
{
    complex c1,c2,c3;
    cout<<"Enter first complex number:\n";
    c1.readvalue();
    cout<<"Enter second complex number:\n";
    c2.readvalue();
    c1.showvalue();
    cout<<" = ";
    c2.showvalue();
    c3.add(c1,c2);
    cout<<" = ";
    c3.showvalue();
    return 0;
}