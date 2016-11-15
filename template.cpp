#include <iostream>
#include <time.h>

using namespace std;


int main(){
    long i = 100000000l;
    clock_t start,finish;
    cout << "Time :" ;
    start = clock();
    while(i--);
    finish = clock();
    double duration = (double)(finish - start);/// CLOCKS_PER_SEC;
    cout << duration << " ms" << endl;
 
    return 1;
}
