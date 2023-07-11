#include <iostream>
using namespace std;
class time {
    private:
    int hr;
    int min;
    int sec;

    public:
    //defult constructor

    time(){
        hr = 0;
        min = 0;
        sec = 0;
    }
    time (int x, int y, int z){
        //paramitrized constructor
        hr = x;
        min = y;
        sec = z;
    }
     void display(){
        cout<<"time is:\n";
        cout<<hr<< "hour "<< min <<" minute and "<< sec <<"sec"<<endl;
    }
    
};
 int calc_h(int s){
    int t,f;
    t=s/3600;
    if (t>=1){
        return t;}
        else {
            return 0;
        }
          }
    int calc_m(int s){
    int t;
    t=s/60;
    if (t>=1){
        return t;}
        else {
            return 0;
        }

    
    };
    
int main(){
    int s,h,m,o,p,q,l,n;
    cout<<"time in second:\n";
    cin>>s;
    o=calc_h(s);
    l=s-(o*3600);

    p=calc_m(l);
    n=l-(p*60);
    q=n;
    time t1,t2(o,p,q);
    t1.display();
    t2.display();
    return 0;

}

