#include<iostream>
using namespace std;
int main(){
    cout<<"It is known as end operator "<<endl<<"It is used for jumping into new line";
    //Arithmetic operators
    int a=60,b=4;
    cout<<"Following are the arthematic operators in c++"<<endl;
    cout<<"The value of a+b is "<<a+b<<endl;
    cout<<"The value of a-b is "<<a-b<<endl;
    cout<<"The value of a*b is "<<a*b<<endl;
    cout<<"The value of a/b is "<<a/b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;
    cout<<endl;
    //Assignment operators ---> Used to assign value to variable
    int c=5,d=8;
    char e='e';

    //Comparison operators
    cout<<"Following are the comparison operators in c++"<<endl;
    cout<<"The value of a==b is "<<(a==b)<<endl;
    cout<<"The value of a!=b is "<<(a!=b)<<endl;
    cout<<"The value of a>=b is "<<(a>=b)<<endl;
    cout<<"The value of a<=b is "<<(a<=b)<<endl;
    cout<<"The value of a>b is "<<(a>b)<<endl;
    cout<<"The value of a<b is "<<(a<b)<<endl;
    cout<<endl;

    //Logical operator
    cout<<"Following are the logical operators in c++"<<endl;
    cout<<"The value of (a==b)&&(a<b) logical and operator  is "<<((a==b)&&(a<b))<<endl;
    cout<<"The value of (a==b)||(a<b) logical or operator  is "<<((a==b)||(a<b))<<endl;
    cout<<"The value of (!(a==b)) logical nor operator  is "<<(!(a==b))<<endl;
    cout<<endl;
    return 0;
}