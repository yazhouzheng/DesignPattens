#pragma once
#include "QuackBehavior.h"
class MuteQuack : public QuackBehavior
{
public:
    MuteQuack();
    ~MuteQuack();

    void quack();
};

