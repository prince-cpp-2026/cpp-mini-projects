#include<iostream>

using namespace std;
int main(){


    int year;

    cout<<"Enter year:";
    cin>>year;

    if(year % 400 == 0)
    {
        cout<<year<<"is a Leap year"<<endl;
    }
    else if(year % 4 ==0 && year % 100 != 0)
    {
        cout<<year<<"is a Leap year"<<endl;
    }
    else
    {
        cout<<year<<"ia not a Leap year "<<endl;
    }
    

    
    return 0;
}
