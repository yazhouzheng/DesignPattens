#include "MallardDuck.h"
#include "ModelDuck.h"
#include "FlyRocketPowered.h"

int main(int argc, char**argv)
{
    Duck* mallard = new MallardDuck();
    mallard->performQuack();
    mallard->performFly();

    Duck* model = new ModelDuck();
    model->performFly();
    model->setFlyBehavior(new FlyRocketPowered());
    model->performFly();

    delete mallard;
    delete model;

    mallard = nullptr;
    model = nullptr;
}