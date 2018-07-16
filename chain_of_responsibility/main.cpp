#include <iostream>

class Handler
{
public:
    Handler(Handler *next = nullptr) : m_next(next) {
        std::cout << "Constructor handler" << std::endl;
    }

    void Handle() {
        std::cout << "Handler..." << std::endl;
        if (m_next != nullptr) {
            std::cout << "Calling parent" << std::endl;
            m_next->Handle();
        }
    }
private:
    Handler *m_next;
};


class Layer1 : public Handler
{
public:
    Layer1(Handler* handler) {
        std::cout << "Constructing Layer 1" << std::endl;
    }
};

class Layer2 : public Handler
{
public:
    Layer2(Handler* handler) : Handler(handler) {
        std::cout << "Constructing Layer 2" << std::endl;
    }
};

class Layer3 : public Handler
{

};


int main()
{
    auto l2 = new Layer2(nullptr);
    auto l1 = new Layer1(l2);
    l1->Handle();
    return 0;
}
