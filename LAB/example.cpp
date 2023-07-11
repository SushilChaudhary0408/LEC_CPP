#include<iostream>
using namespace std;
class parent{
    protected:
    int id_protected;
};
class child: public parent {
  public:
    void setid(int id){
        id_protected=id;
    }
    void displayid(){
        cout<<"id_protected is::"<<id_protected<<endl;
    }
};
int main(){
 child obj1;
 int y;
 cout<<"enter the value of y:";
 cin>>y;
 obj1.setid(y);
 obj1.displayid();
 return 0;
}