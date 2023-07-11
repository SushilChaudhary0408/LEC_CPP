// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Time
{
    private:
    int hr,min,sec;
    
    public:
    Time()
    {
       hr=12;
       min=0;
       sec=0;
    }
    Time(int seconds)
    {
        hr=seconds /3600;
        min = (seconds % 3600)/60;
        sec = (seconds % 60);
    }
    void showTime()
    {
        cout<<hr<<"hr "<<min<<"min "<<sec<<"sec "<<endl;
    }
    // Time(Time &copy)
    // {
    //     hr=copy.hr;
    //     min=copy.min;
    //     sec=copy.sec;
    // }
};
int main()
{
    Time defaultTime,userTime(700);
    Time copiedTime=userTime;
    cout<<"Default Time is:"<<endl;
    defaultTime.showTime();
    cout<<"User input time is:"<<endl;
    userTime.showTime();
    copiedTime.showTime();
    
    return 0;
}