/**
 * fill and accumulate
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    vector<int> vec(10);
    vector<string> v;
    string s;
    string concat;
    int sum;

    fill(vec.begin(), vec.end(), 1);
    sum = accumulate(vec.begin(), vec.end(), 0);
    cout << sum << endl;

    fill(vec.begin(), vec.begin() + vec.size() / 2, 10);
    sum = accumulate(vec.begin(), vec.end(), 0);
    cout << sum << endl;

    fill_n(vec.begin(), vec.size() / 2, 0);
    sum = accumulate(vec.begin(), vec.end(), 0);
    cout << sum << endl;

    fill_n(back_inserter(vec), 10, 42);
    sum = accumulate(vec.begin(), vec.end(), 0);
    cout << sum << "of " << vec.size() << " elements" << endl;

    while (cin >> s) {
        v.push_back(s);
    }
    concat = accumulate(v.begin(), v.end(), string(""));
    cout << concat << endl;

    return 0;
}
