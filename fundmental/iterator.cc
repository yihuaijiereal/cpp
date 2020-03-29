/**
 * iterator
 */
#include <iostream>
#include <vector>

int main(int argc, char *argv[])
{
    std::vector<int> vec = { 1, 2, 3, 4, 5, 6 ,7 ,8 ,9 };

    /**
     * *it
     * it->member
     * ++it
     * --it
     * it1 == it2
     * it1 != it2
     *
     * vector<int>::iterator
     * vector<int>::const_iterator
     * it + n
     * it - n
     * it += n
     * it -= n
     * it1 - it2
     * > >= < <=
     */
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << std::endl;
    }

    return 0;
}
