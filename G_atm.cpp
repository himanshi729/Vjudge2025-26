#include<iostream>
#include<iomanip>
using namespace std;

float atm_withdraw(int X, float Y){
    if(X%5==0 && (X+0.50)<=Y){
        Y = Y - X - 0.50;
    }
    return Y;
}

int main(){
    int X;
    float Y;
    cin>>X>>Y;

    cout<< fixed << setprecision(2) << atm_withdraw(X,Y);

    
    return 0;
}