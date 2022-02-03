#include<iostream>
using namespace std;
int main(){
    float d=34.4F;
    long double e=34.4L;
    //user defined data types

    
    //Float, double and long double literals
    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    cout<<endl;


    //Reference variable
    float x=455;
    float &y=x;
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<endl;

    //Typecasting
    int a=45;
    float b=45.67;
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of b is "<<(int)b<<endl;
    return 0;
}