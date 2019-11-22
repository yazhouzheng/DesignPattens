#include "Duck.h"

Duck::Duck():
    flyBehavior(nullptr),
    quackBehavior(nullptr)
{
}

Duck::~Duck()
{
    if (quackBehavior != nullptr)
    {
        delete quackBehavior;
        quackBehavior = nullptr;
    }
    if (flyBehavior != nullptr)
    {
        delete flyBehavior;
        flyBehavior = nullptr;
    }
}

void Duck::performFly()
{
    flyBehavior->fly();
}

void Duck::performQuack()
{
    quackBehavior->quack();
}

void Duck::swim()
{
    std::cout << "All ducks float, even decoys!" << std::endl;
}

void Duck::setFlyBehavior(FlyBehavior* fb)
{
    flyBehavior = fb;
}

void Duck::setQuackBehavior(QuackBehavior* qb)
{
    quackBehavior = qb;
}