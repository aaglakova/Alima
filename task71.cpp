#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double h,m;
    cin>>h>>m;
    if (h>12)
    h=h-12;
    h=(h*60+m)*0.5;
    m=m*6;
    cout<<abs(h-m);
}
