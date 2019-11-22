#include "ModelDuck.h"
#include "FlyNoWay.h"
#include "Quack.h"

ModelDuck::ModelDuck()
{
    flyBehavior = new FlyNoWay();
    quackBehavior = new Quack();
}

ModelDuck::~ModelDuck()
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

void ModelDuck::display()
{
    std::cout << "I am a model Duck" << std::endl;
}
