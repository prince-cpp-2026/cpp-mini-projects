#include<iostream>

using namespace std;
int main(){

    double num1, num2;
    char op, choice;


    do{
        cout<<"Enter: num1 operator num2  e.g. 5 + 3"<<endl;
        cin>>num1>>op>>num2;

        switch(op){
            case '+':
            cout<<num1<< "+"<<num2<< "="<<num1+num2<<endl;
            break;
            case '-':
            cout<<num1<< "-"<<num2<< "="<<num1-num2<<endl;
            break;
            case '*':
            cout<<num1<< "*"<<num2<< "="<<num1*num2<<endl;
            break;
            case '/':
            if(num2 == 0){
                cout<<"Error:Cannot divided by 0"<<endl;
            }
            else
            {
                cout<<num1<< "/"<<num2<< "="<<num1/num2<<endl;
            }
            break;
            default:
            cout<<"Error: Invalid operator"<<endl;
        }
        cout<<"Continue? y/n: ";
        cin>>choice;
    }
    while(choice == 'y' || choice == 'y');

    cout<<"Calculator closed."<<endl;

    
    return 0;
}
