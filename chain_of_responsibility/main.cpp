#include "Layer.hpp"

int main()
{
    auto l3 = new Layer3(nullptr);
    auto l2 = new Layer2(l3);
    auto l1 = new Layer1(l2);

    l1->Handle(Code::code_1);
	std::cout << std::endl;

    l1->Handle(Code::code_2);
	std::cout << std::endl;
    
	l1->Handle(Code::code_3);
	std::cout << std::endl;
    
	l1->Handle(Code::code_4);
    return 0;
}
