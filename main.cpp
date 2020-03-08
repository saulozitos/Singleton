#include <QCoreApplication>
#include <iostream>

#include "mysingleton.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MySingleton &s = MySingleton::getInstance();

    std::cout << "Address: " << &s << std::endl;

    std::cout << "Multiplication: " << s.multiply(2, 2) << std::endl;

    return a.exec();
}
