#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    int n, q;
    string s;
    cin >> n >> q;
    cin.ignore();
    getline(cin, s);

    while (q--) {
        string operation;
        cin >> operation;

        if (operation == "pop_back")
            s.pop_back();
        else if (operation == "back")
            cout << s.back() << endl;
        else if (operation == "front")
            cout << s.front() << endl;
        else if (operation == "push_back") {
            char temp;
            cin >> temp;
            s.push_back(temp);
        } else if (operation == "print") {
            int pos;
            cin >> pos;
            cout << s.at(pos - 1)<<endl;
        } else if (operation == "sort") {
            int l, r;
            cin >> l >> r;
            if (l > r)
                swap(l, r);

            l--;

            sort(s.begin() + l, s.begin() + r);
        } else if (operation == "reverse") {
            int l, r;
            cin >> l >> r;
            if (l > r)
                swap(l, r);

            l--;

            reverse(s.begin() + l, s.begin() + r);

        } else if (operation == "substr") {
            int l, r;
            cin >> l >> r;
            if (l > r)
                swap(l, r);

            l--;

            string temp;

            for (int j = l; j < r; ++j)
                temp += s.at(j);

            cout << temp << endl;
            
        }

    }


}