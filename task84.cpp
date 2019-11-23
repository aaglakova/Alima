#include<iostream>
using namespace std;
int main(){
    double d,i;
    cin>>d;
    for (i=1; i<101;i++){
        cout<<i<<"$ - "<<(i*d)<<" p - "<<(i*d/20)<<" kg"<<endl;
    }
    return 0;
}
