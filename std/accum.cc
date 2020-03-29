/**
 * fill and accumulate
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <string>
#include <fstream>
#include <functional>

using namespace std;
using namespace std::placeholders;

ostream &print(ostream &os, const string &s, char c)
{
	return os << s << c;
}

int main(int argc, char *argv[])
{
    vector<int> vec(10);
    vector<string> v;
    string s;
    string concat;
    int sum;
    ofstream os("file");
    //istream_iterator<int> in(cin), eof;

    //cout << accumulate(in, eof, 0) << endl;

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
    cout << sum << " of " << vec.size() << " elements" << endl;

    while (cin >> s) {
        v.push_back(s);
    }
    concat = accumulate(v.begin(), v.end(), string(""));
    cout << concat << endl;

    for_each(v.begin(), v.end(),
        bind(print, ref(cout), _1, ' '));
    cout << endl;

    for_each(v.begin(), v.end(),
        bind(print, ref(os), _1, ' '));
    cout << endl;

    return 0;
}
