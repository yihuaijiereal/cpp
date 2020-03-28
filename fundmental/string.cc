/**
 * std string
 */
#include <iostream>
#include <string>
#include <cstddef>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::size_t;

int main(int argc, char *argv[])
{
    string s1;
    string s2 = "value";
    string s3("value");
    string s4(s2);
    string s5 = s3;
    string s6(10, 'c');
    /* 不能把字面值相加，至少有一个是string对象 */
    string s7 = s5 + s6;
    auto len = s7.size(); /* string::size_type */

    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    cout << s5 << endl;
    cout << s6 << endl;
    cout << s7 << endl;
    cout << len << endl;

    cout << "s1 empty: " << s1.empty() << endl;
    cout << "s2 size: " << s2.size() << endl;
    cout << s3[2] << endl;
    cout << "s2 == s3 " << (s2 == s3) << endl;
    cout << "s2 < s6 " << (s2 < s6) << endl;

    for (auto c : s2) {
        cout << c << endl;
    }

    /**
     * isalnum
     * isalpha
     * iscntrl
     * isdigit
     * islower
     * isprint
     * isspace
     * isupper
     * tolower
     * toupper
     */
    for (auto &c : s2) {
        c = toupper(c);
    }
    cout << s2 << endl;

    for (decltype(s2.size()) index = 0;
            index != s2.size() && !isspace(s2[index]);
            ++index) {
        s2[index] = tolower(s2[index]);
    }
    cout << s2 << endl;

    cin >> s1;
    cout << s1 << endl;

    return 0;
}
