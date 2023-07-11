#include <iostream>
using namespace std;
class employee {
    private:
    char name [20];
    float salary;

    public:
    void getdata()
    {
        cout<<"\nEnter name:";
        cin>>name;
        cout<<"\nEnter salary:";
        cin>>salary;
    }
    void showdata()
    {
        cout<<"\nName: "<<name<<endl;
        cout<<"\nSalary: "<<salary<<endl;
    }

};
int main(){
    employee *eptr;
    employee e;
    eptr =& e;
A    cout<<"\nAccessing data through pointer variable:";S
    eptr->showdata();
return 0;
}