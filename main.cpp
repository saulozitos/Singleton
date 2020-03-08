#include <QCoreApplication>
#include <iostream>

#include "mysingleton.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MySingleton &s = MySingleton::getInstance();

    std::cout << "end: " << &s << std::endl;

    std::cout << "mult: " << s.multiply(2,2) << std::endl;

    return a.exec();
}
