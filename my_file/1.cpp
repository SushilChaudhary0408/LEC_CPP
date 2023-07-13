#include<iostream>
using std::cin;
using std::cout;

class complex{
    public:
  float real;
  float img;

 complex add(complex x,complex y)
 {
    complex c3;
    c3.real=x.real+y.real;
    c3.img=x.img+y.img;
    return c3;

 } 


};

int main()
{
    complex c1,c2,c4;
    c1.real=44;
    c2.img=22;
    c1.img=33;
    c2.real=55;

    c4=c4.add(c1,c2);
    cout<<"("<<c4.real<<"+i"<<c4.img<<")";
    return 0;


    return 0;

}
