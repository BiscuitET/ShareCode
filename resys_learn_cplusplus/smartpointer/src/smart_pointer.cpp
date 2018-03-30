#include "smart_pointer.h"
namespace sp {
SMART_P::SMART_P(){
    std::cout <<"This is the construct function of my SMART_P class." << std::endl;
}

SMART_P::~SMART_P(){
    std::cout << "OK , Destory SMART_P pointer." << std::endl;
}

}