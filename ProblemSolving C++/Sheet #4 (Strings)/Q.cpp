#include <iostream>
#include <string>
#include <vector>

using namespace std;


void reverseWord(string &s) {
    string temp;

    for (int i = 0; i < s.length(); ++i)
        temp += s.at(s.length() - 1 - i);


    s = temp;

}

int main() {
    vector<string> vector;
    string input;
    getline(cin, input);

    string temp;
    for (char &c: input) {
        if (c == ' ') {
            vector.push_back(temp);
            temp.clear();
        } else
            temp += c;
    }

    if (!temp.empty())
        vector.push_back(temp);

    for (auto &s: vector)
        reverseWord(s);


    for (int i = 0; i < vector.size() - 1; ++i)
        cout << vector.at(i)<<" ";


    cout << vector.at(vector.size() - 1);


    return 0;
}