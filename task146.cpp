#include<iostream>
#include<cmath>
using namespace std;
int main(){
    char a;
    int counter=0;
    for(char i='a';i<='z';i++){
        cout<<i;
        counter++;
        if(counter==5){
        counter=0;
        cout<<endl;
        }}
}
