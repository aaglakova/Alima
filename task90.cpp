#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double sum=0,i;
    for (i=3;i<=111;i=i+2){
        sum+=cos(i/(i+2));
    }
    cout<<sum;
}
