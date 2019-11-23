#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double p,i,x,n;
    cin>>x>>n;
    for (i=1;i<=n;i++){
        p+=(1/(cos(pow(x,i))));
    }
    cout<<p;
}
