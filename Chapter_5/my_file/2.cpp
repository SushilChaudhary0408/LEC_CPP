#include <iostream>
using namespace std;
class Kristal{
    public:
    string address;
    string name;
    int age;
    void student(){
        cout<<"timro naam k ho"<<name<<"yehi ta age ho"<<age<<"ghuna jaam na"<<address;

    }
    
    Kristal(int x ,int y)

    {
        cout<<"canstructer call vayo ta\n";
        cout<<x+y;
    //     cout<<"timro naam k ho"<<name<<"yehe ta age ho"<<umer<<"ghuna jaam na"<<adress<<"\n";
     }

};
int main()
{
    Kristal S1(1,2),S2(3,4);

    
    return 0;
}
