#ifndef __JM_STRATEGY_DESIGN_PATTER_STRATEGY
#define __JM_STRATEGY_DESIGN_PATTER_STRATEGY

#include <iostream>
#include <memory>

class StrategyText {
public:
    virtual void do_job() = 0;
};

class ConcreteStrategyTextSmall : public StrategyText {
public:
    void do_job();
};

class ConcreteStrategyTextMedium : public StrategyText {
public:
    void do_job();
};

class ConcreteStrategyTextLarge : public StrategyText {
public:
    void do_job();
};

#endif //__JM_STRATEGY_DESIGN_PATTER_STRATEGY
