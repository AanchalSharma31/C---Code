#include <bits/stdc++.h>
using namespace std;

vector<string> comparePassword(const vector<string>& passwords, int k) {
    unordered_map<string, int> passwordCount;
    vector<string> result;
    for (const auto& password : passwords) {
        int count = ++passwordCount[password];
        result.push_back(count <= k ? "ACCEPT" : "REJECT");
    }
    return result;
}

int main() {
    vector<string> passwords = {"lp", "mn", "mn", "mn", "lp"};
    for (const auto& str : comparePassword(passwords, 2)) {
        cout << str << ' ';
    }
    cout << endl;
    return 0;
}