#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int a,sum=0;
    do{
    cin>>a;
    sum+=a;
    } 
    while(a!=0);
    cout<<sum;
}
