#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c,d;
    for (int i=1000;i<10000;i++){
    a=i/1000;
    b=(i/100)%10;
    c=(i/10)%10;
    d=i%10;
    if (a==3 || b==3 || c==3 || d==3)
    cout<<i<<endl;
    }
}
