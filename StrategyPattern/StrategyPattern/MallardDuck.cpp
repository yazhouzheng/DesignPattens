#include "MallardDuck.h"
#include "Quack.h"
#include "FlyWithWings.h"

MallardDuck::MallardDuck()
{
    quackBehavior = new Quack();
    flyBehavior = new FlyWithWings();
}

MallardDuck::~MallardDuck()
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

void MallardDuck::display()
{
    std::cout << "I am a real Mallard duck" << std::endl;
}
