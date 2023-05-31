#include <iostream>
using namespace std;
class student{
    int age;
    char name [50];
    int roll;
    public:
    void ages(){
    cout<<"Enter your age";
    cin>>age;    
    }
    void names(){
        cout<<"Enter your name";
        cin>>name;
    }
    void rolls(){
        cout<<"Enter your roll";
        cin>>roll;
    }
    void displays(){
        cout<<age;
        cout<<name;
        cout<<roll;
    }
};
int main()
{
    class student s1,s2;
    s2.ages();
    s2.names();
    s2.rolls();
    s2.displays();
    return 0;
}