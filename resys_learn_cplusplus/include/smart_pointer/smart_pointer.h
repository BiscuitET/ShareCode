#include <iostream>
#include <memory>

namespace sp{

class SMART_P{
public:
    SMART_P();
    ~SMART_P();

private:
    std::shared_ptr<int> my_s_ptr_;
};


}