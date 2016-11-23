#include <iostream>
#include <time.h>

using namespace std;


int main(){
    int A=10000;
    int high = A &0xFF;
    int low = (A >> 8) & 0xFF;
    cout <<"high = " << high << endl;
    cout <<"low = " << low << endl;
    return 1;
}
