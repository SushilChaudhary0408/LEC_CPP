#include <iostream>
using namespace std;
class complex {
    int A;
    int B;
    
public:
complex(int x,int y){
    A=x;
    B=y;
}
 void operator -(){
    A=-A;
    B=-B;
 }
void display(){
    cout<<"\n "<<A;
    cout<<"\n "<<B;
}

};
int main(){
complex C1(1, 2);
C1.display();


-C1;
C1.display();


return 0;
}