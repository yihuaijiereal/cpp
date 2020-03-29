/**
 * foreach and lambda
 */
#include <vector>
#include <iterator>
#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
    vector<int> vi;
    vector<int> orig;
    int i;

    while (cin >> i) {
        vi.push_back(i);
    }

    for_each(vi.begin(), vi.end(), [](int i) { cout << i << " "; });
    cout << endl;

    orig = vi;
    transform(vi.begin(), vi.end(), vi.begin(),
        [](int i) { return i < 0 ? -i : i; });
    for_each(vi.begin(), vi.end(), [](int i) { cout << i << " "; });
    cout << endl;

    vi = orig;
    transform(vi.begin(), vi.end(), vi.begin(),
        [](int i) -> int
        { if (i < 0) return -i; else return i; });
    for_each(vi.begin(), vi.end(), [](int i) { cout << i << " "; });
    cout << endl;   

    return 0;
}