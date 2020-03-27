/**
 * while for if
 */
#include <iostream>

int main(int argc, char *argv[])
{
    int sum = 0;
    int val = 1;
    int even = 0;
    int odd = 0;

    /* while */
    while (val <= 10) {
        sum += val;
        val++;
    }
    std::cout << "sum of 1 to 10 is " << sum << std::endl;

    /* for */
    sum = 0;
    for (int i = 1; i <= 10; ++i) {
        sum += i;
    }
    std::cout << "sum of 1 to 10 is " << sum << std::endl;

    /* if */
    for (int i = 0; i < 6; ++i) {
        std::cin >> val;
        if (val % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    std::cout << "even: " << even << ", odd: " << odd << std::endl;

    /* 循环直到EOF 或者无效输入 */
    sum = 0;
    while (std::cin >> val) {
        sum += val;
    }
    std::cout << "sum is " << sum << std::endl;

    return 0;
}
