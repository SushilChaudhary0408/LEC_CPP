#include<iostream>
using namespace std;
class complex {
         private:
         double real;
         double imag;
//constant double real
public:
double constant(){
    real=5;
return real;
}
double imaginary(){
    cout<<"get imagimary numbwer";
    cin>>imag;
    return imag;
}
void display(double i,double g);

};
void complex::display(double i,double g){
    cout<<"complex nunber is   "<< i <<"+"<< " i"<< g;
}
 int main(){
complex x1;
double y,z;
z=x1.constant();
y=x1.imaginary();
x1.display(z,y);
return 0;
}