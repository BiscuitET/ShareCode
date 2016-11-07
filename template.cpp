#include <iostream>

using namespace std;

template<typename arrayType>
class MyArray{
public:
    MyArray(arrayType &a,arrayType &b){
        array1 = a;
        array2 = b;
    }
    
    arrayType getArrayNum(arrayType array,int num){
        if(num < 0 || num > 10){
            cout << "out of index" << endl;
        }

        return array[num];
    }

private:
    arrayType array1[10];
    arrayType array2[10]; 

};


int main(){
    int* intArray = new int[10];
    for(int i = 0 ; i < 10 ;i++){
        intArray[i] = i;
    } 
    return 1;
}
