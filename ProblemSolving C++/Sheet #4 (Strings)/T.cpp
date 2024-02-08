#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string s;
    cin >> s;

    vector<string> parameters;

    string temp;

    for (int i = 0; i < s.length(); ++i) {
        if (s.at(i) == '=') {
            for (int j = i + 1; j < s.length() && s.at(j) != '&'; j++)
                temp += s.at(j);

            parameters.push_back(temp);
            temp.clear();
        }
    }

    cout << "username: " << parameters.at(0) << endl;
    cout << "pwd: " << parameters.at(1) << endl;
    cout << "profile: " << parameters.at(2) << endl;
    cout << "role: " << parameters.at(3) << endl;
    cout << "key: " << parameters.at(4) << endl;

    return 0;
}