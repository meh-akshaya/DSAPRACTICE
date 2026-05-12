#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    string ss;
    int i=0;
    for (int i=0; i<s.size(); i++)
        if (isalnum(s[i])){
            ss.push_back(s[i]);
    }
    for (int i=0; i<ss.size(); i++) {
        ss[i] = tolower(ss[i]);
    }
    int p = ss.size()-1;
    for (int i=0; i<p+1; i++) {
        if (ss[i]==ss[p]) {
            p--;
        }
        else {
            cout << "False" << endl;
            return 0;
        }
    }
    cout << "True" << endl;
}

/*
for (int i = 0; i < s.size(); i++) {
    if (isalnum(s[i])) {
        ss.push_back(tolower(s[i]));   // lowercase immediately
    }
}
    better approach
*/