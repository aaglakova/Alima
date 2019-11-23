#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c,s;
    cin>>a>>b>>c;
    if ((a+b>c) && (a+c>b) && (b+c>a)){
        s=(a+b+c)/2;
        cout<<sqrt(s*(s-a)*(s-b)*(s-c));
    } else {
        cout<<"Doesn't exist";
    }
    return 0;
}
