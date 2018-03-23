#include <iostream>
#include <time.h>

using namespace std;

int getSecond(int a,int b,int c){  
    return a > b ? (b > c ? b : ( a > c ? c : a)) : ( a > c ? a: (b > c ? c : a));  
} 

int main(){
    int a = 2,b=9,c=1;
    cout <<"mid : " << getSecond(a,b,c) << endl; 
    return 1;
}
