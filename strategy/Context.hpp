#ifndef __JM_STRATEGY_DESIGN_PATTER_CONTEXT
#define __JM_STRATEGY_DESIGN_PATTER_CONTEXT

#include <iostream>
#include <memory>
#include "Strategy.hpp"

class Context {
private:
    std::unique_ptr<StrategyText> m_strategy;
public:
    Context(StrategyText*);
    void do_context_job() {
        std::cout << "doing some context job" << std::endl << std::endl;
        m_strategy->do_job();
        std::cout << std::endl << "doing more context job" << std::endl;
    }
};

Context::Context(StrategyText* strategy) : m_strategy(std::unique_ptr<StrategyText>(strategy)) {}

#endif //__JM_STRATEGY_DESIGN_PATTER_CONTEXT
