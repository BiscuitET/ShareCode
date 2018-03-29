#include <iostream>
#include <memory>

int main(){
    int a = 10;
    std::shared_ptr<int> ptra = std::make_shared<int>(a);
    std::shared_ptr<int> ptra2(ptra);
    std::cout << "ptra = " << ptra.use_count() << std::endl;
    std::shared_ptr<int> ptra3 = ptra;
    std::cout << "ptra = " <<ptra.use_count() << std::endl;

    return 1;
}
