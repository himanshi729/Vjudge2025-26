#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    int X=0;

        for(int i=1; i<=n; i++)
        {
            cin>>s;

            if(s[1]== '+')
            X++;
            
            if(s[1] =='-')
            X--;
        }
        cout<<X; 
    
    return 0;
}