#include "mysingleton.h"

MySingleton &MySingleton::getInstance()
{
    static MySingleton instance;
    return instance;
}

int MySingleton::multiply(int a, int b)
{
    return a * b;
}
