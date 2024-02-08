#include <iostream>
#include <vector>

using namespace std;


int main() {
    string s;
    cin >> s;

    vector<string> maxSup;

    int l, r;
    l = r = 0;

    string sub;

    for (char c: s) {
        if (c == 'L')
            l++;
        else
            r++;

        sub += c;

        if (l == r) {
            maxSup.push_back(sub);
            sub.clear();
        }
    }

    cout << maxSup.size() << endl;

    for (auto &temp: maxSup)
        cout << temp << endl;

}
