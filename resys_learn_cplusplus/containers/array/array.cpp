#include <iostream>
#include <array>
#include <algorithm>
int main(){
    std::array<int, 10> myarray = {1, 2, 3, 4, 5};
    //int myarray[10] = {1,23, 2, 4};
    std::array<int, 10> theother_arr;
    std::sort(myarray.begin(), myarray.begin() + 7,std::less<int>());
    for (auto i = myarray.rbegin(); i != myarray.rend(); i++){
        std::cout << " " << *i;
    }
    std::cout << std::endl;

    return 1;
}
