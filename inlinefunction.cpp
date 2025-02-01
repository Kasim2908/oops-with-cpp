#include<iostream>
using namespace std;

inline int fun(int a, int b, int c){
   return (a > b) ? ((a < c) ? a : (b > c ? b : c)) : ((b > c) ? b : (a > c ? a : c));
}

int main(){
    int value = fun(65, 87, 66); // function calling
    cout <<"The biggest value between a,b and c is:" <<value;
    return 0;
}
