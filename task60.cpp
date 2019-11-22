#include<iostream>
using namespace std;
int main(){
    int a,a1,a2,a3;
    cin>>a;
    a1=a/100;
    a2=(a/10)%10;
    a3=a%10;
    a=a1+10*a2+100*a3;
    cout<<a;
} 
