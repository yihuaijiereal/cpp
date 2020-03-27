/**
 * compile with cc, you must link c++ by -lstdc++,
 * while with g++, it is not needed
 */
#include <iostream>

int main(int argc, char *argv[])
{
    int val1 = 0;
    int val2 = 0;

    std::cout << "Enter two numbers:" << std::endl;
    std::cin >> val1 >> val2;
    std::cout << "The sum of " << val1 << " and " << val2
            << " is " << val1 + val2 << std::endl;

    return 0;
}

