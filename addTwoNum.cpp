#include<iostream>
using namespace std;
// class Solution{
//      int a, b;
//     public:
//        int AddTwoNum(int a , int b){
//         return a+b;
//        }
// };
int add(int a, int b){
    return a+b ;
}

int main(){
    // Solution sol;
    int T;

    while(T--)
{
int x, y;

cin >> x >>  y ;

cout<<add(x, y);
}
    return 0;
    
}