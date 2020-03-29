/**
 * std vector
 */
#include <iostream>
#include <vector>
#include <string>
#include <cstddef>

using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::size_t;

int main(int argc, char *argv[])
{
    vector<string> articles = { "a", "an", "the" };
    vector<string> articles_1{"a", "an", "the"};
    vector<string> svec; /* 不包含任何元素 */
    vector<string> svec2(10);
    vector<string> svec2_1{10};
    vector<string> svec3(10, "hi");
    vector<string> svec3_2{10, "hi"};
    vector<int> ivec;
    vector<int> ivec2(10); /* 10个执行了值初始化的元素 */
    vector<int> ivec3{10};
    vector<int> ivec4{10 ,2};
    vector<int> ivec5(10, -1); /* 10个-1 */
    vector<vector<string>> file; /* 元素为vector的vector */
    vector<vector<int>> vecOfvec;

    cout << articles.size() << " " << articles_1.size() << endl;

    cout << svec.size() << " " << ivec.size() << " "
        << ivec2.size() << " " << ivec3.size() << " "
        << ivec4.size() << " " << ivec5.size() << " "
        << file.size() << " " << vecOfvec.size() << endl;

    cout << ivec2.size() << " " << ivec3.size() << " "
        << svec2.size() << " " << svec3.size() << " "
        << svec2_1.size() << " " << svec3_2.size() << endl;

    /**
     * v.empty()
     * v.size()
     * v.push_back()
     * v[n]
     * v1 = v2
     * v1 = { a, b, c }
     * v1 == v2
     * v1 != v2
     * < <= > >=
     */
    for (int i = 0; i < 10; ++i) {
        ivec.push_back(i);
    }

    for (auto &i : ivec) {
        i *= i;
    }

    for (auto i : ivec) {
        cout << i << endl;
    }

    return 0;
}
