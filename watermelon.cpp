#include<iostream>
using namespace std;

string watermelon(int w){
    if(w %2 == 0 && w>=2)
        return "YES";
    
    else
        return "NO";
}
int main(){
    int w;
    cin>>w;
    cout<<watermelon(w);
    return 0;
}