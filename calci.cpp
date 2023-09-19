#include<bits/stdc++.h>
using namespace std;
int main(){
    char oper;
    float a,b;
    cout<<"Enter the two numbers a and b"<<endl;
    cin>>a>>b;
    cout<<"Enter the operation"<<endl;
    cin>>oper;
    switch(oper){
        case '+' :
        cout<<"Sum of two numbers is "<<a+b<<endl;
        break;
        case '-' :
        cout<<"Difference of two numbers is "<<a-b<<endl;
        break;
        case '*' :
        cout<<"Product of two numbers is "<<a*b<<endl;
        break;
        case '/' :
        if(oper = '/' && (a==0||b==0)){
        cout<<"Invalid operation"<<endl;
        }
        else cout<<"Division of two numbers is "<<a/b<<endl;
        break;
        default :
        cout<<"Invalid operation"<<endl;
        break;
    }
return 0;
}