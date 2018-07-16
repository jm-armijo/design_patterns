#include <iostream>
#include "Context.hpp"
#include "Strategy.hpp"

int main() {
    std::string option;
    std::cin >> option;

    if(option == "S") {
        Context c(new ConcreteStrategyTextSmall);
        c.do_context_job();
    } else if (option == "M") {
        Context c(new ConcreteStrategyTextMedium);
        c.do_context_job();
    } else if (option == "L") {
        Context c(new ConcreteStrategyTextLarge);
        c.do_context_job();
    }

    return 0;
}
