#include<iostream>
using namespace std;
int main()
{
    int num1,num2,result;
    char x;
    cout<<"press +/A for addition of two numbers."<<endl;
    cout<<"press - for Sub of two numbers."<<endl;
    cout<<"press * for Multi of two numbers."<<endl;
    cout<<"press / for Div of two numbers."<<endl;
    cout<<"press % for Mod of two numbers."<<endl;
    cout<<"Please enter your choice"<<endl;
    cin>>x;
    switch(x)
    {
        case '*': cout<<"enter two numbers: "<<endl;
                        cin>>num1>>num2;
                        result=num1*num2;
                        cout<<"Multi of two numbers are : "<<result<<endl;
                        break;
        case 'A':
        case '+':cout<<"enter two numbers: "<<endl;
                        cin>>num1>>num2;
                        result=num1+num2;
                    cout<<"addition of two numbers are : "<<result<<endl;
                   break;
        case '-':cout<<"enter two numbers: "<<endl;
                        cin>>num1>>num2;
                    result=num1-num2;
                    cout<<"sub of two numbers are : "<<result<<endl;
                    break;

        case '/': cout<<"enter two numbers: "<<endl;
                        cin>>num1>>num2;
                        result=num1/num2;
                        cout<<"div of two numbers are : "<<result<<endl;
                        break;
        case '%': cout<<"enter two numbers: "<<endl;
                        cin>>num1>>num2;
                        result=num1%num2;
                    cout<<"Mod of two numbers are : "<<result<<endl;
                    break;
        default:cout<<"wrong choice."<<endl;
    }
}
