#include <iostream>

#include <QDebug>

#include "example.h"

int main()
{
	qDebug() << "Travis app started...";

    std::cout << example::sum(2, 5) << std::endl;
    std::cout << example::multiply(2, 5) << std::endl;

	return 0;
}
