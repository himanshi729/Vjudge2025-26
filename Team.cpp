#include<iostream>
using namespace std;

class Team{
    public:
        int petya, vasya, tonya;
        int problem = 0;

    void countProblems(int n){

        for(int i=0; i<n; i++){
            cin>>petya >>vasya >> tonya;
        

        if(petya+vasya+tonya >=2){
            problem++;
            }
        }
    cout<<problem;
    }
};

int main(){

    int n;
    cin>>n;
    
    Team t;

    t.countProblems(n);

    return 0;

}