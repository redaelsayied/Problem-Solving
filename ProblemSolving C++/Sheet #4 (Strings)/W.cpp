#include <iostream>

using namespace std;
string Key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
string Original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";


int getIndex(string &s, char c) {
    for (int i = 0; i < s.length(); i++)
        if (c == s.at(i))
            return i;

    return -1;
}

void encryption(string &s) {
    for (int i = 0; i < s.length(); i++) {
        int index = getIndex(Original, s.at(i));
        s.at(i) = Key.at(index);
    }
}

void decryption(string &s) {
    for (int i = 0; i < s.length(); i++) {
        int index = getIndex(Key, s.at(i));
        s.at(i) = Original.at(index);
    }
}

int main() {
    int q;
    cin >> q;
    string s;
    cin >> s;

    if (q == 1)
        encryption(s);
    else
        decryption(s);

    cout << s;

}
