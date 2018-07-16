#include <iostream>
#include <memory>

class Singleton
{
public:
    static Singleton getInstance();
    void doSomething();
    ~Singleton() {}
private:
    Singleton() {}
};

Singleton Singleton::getInstance()
{
    // Thread-safe, since it is guaranteed that this will be be executed
    // exactly once.
    static Singleton instance;
    return instance;
}

void Singleton::doSomething()
{
    std::cout << "I'm doing something..." << this << std::endl;
}

int main()
{
    auto s = Singleton::getInstance();
    s.doSomething();
    s = Singleton::getInstance();
    s.doSomething();

    return 0;
}
