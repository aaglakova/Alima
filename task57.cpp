#include<iostream>
using namespace std;
int main(){
    int day,month,year;
    cin>>day>>month>>year;
    if (year<0) {
        cout<<"no";
    } 
    else if (month<1 || month>12) {
        cout<<"no";
    } 
    else{
    switch (month){
    case 1:
        if(day>=1 && day<=31)
            cout<<"yes";
        else 
            cout<<"no";
        break;
    case 2:
        if(day>=1 && day<=28)
            cout<<"yes";
        else 
            cout<<"no";
        break;
    case 3:
        if(day>=1 && day<=31)
            cout<<"yes";
        else 
            cout<<"no";
        break;
    case 4:
        if(day>=1 && day<=30)
            cout<<"yes";
        else 
            cout<<"no";
        break;
    case 5:
        if(day>=1 && day<=31)
            cout<<"yes";
        else 
            cout<<"no";
        break;
    case 6:
        if(day>=1 && day<=30)
            cout<<"yes";
        else 
            cout<<"no";
        break;
    case 7:
        if(day>=1 && day<=31)
            cout<<"yes";
        else 
            cout<<"no";
        break;
    case 8:
        if(day>=1 && day<=31)
            cout<<"yes";
        else 
            cout<<"no";
        break;
    case 9:
        if(day>=1 && day<=30)
            cout<<"yes";
        else 
            cout<<"no";
        break;
    case 10:
        if(day>=1 && day<=31)
            cout<<"yes";
        else 
            cout<<"no";
        break;
    case 11:
        if(day>=1 && day<=30)
            cout<<"yes";
        else 
            cout<<"no";
        break;
    case 12:
        if(day>=1 && day<=31)
            cout<<"yes";
        else 
            cout<<"no";
        break;
    }
    }
}
