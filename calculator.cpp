#include <iostream>
using namespace std;
class calculator {
    public:
    double add (double a, double b) {
        cout<< a+b;
    }
       double sub (double a, double b) {
        cout<< a-b;
    }
       double mul (double a, double b) {
        cout<< a*b;
    }
       double div (double a, double b) {
        cout<< a/b;
    }
};

int main() {
calculator calc;
double a,b,input;

cout << "enter the 2 datas"<<endl;
cin >> a>>b;
cout<<"what operation you want to do?"<<endl;
cout<<" 1 for add, 2 for sub, 3 for mul, 4 for div"<<endl;
cin>>input;
if(input == 1)
{
    calc.add(a,b);
}

if(input == 2)
{
    calc.sub(a,b);
}

if(input == 3)
{
    calc.mul(a,b);
}

if(input == 4)
{
    calc.div(a,b);
}

}    