#include<iostream>
using namespace std;
int glo=6;
void sum(){
    int a;
    cout<<"The globe scope is "<<glo;
    }
int main(){
    int glo=55;
    //bool is_true=false;
    sum();
    cout<<"\nThe scope is "<<glo;
    return 0;

}