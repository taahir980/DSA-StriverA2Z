#include<bits/stdc++.h>
using namespace std;
int main() {

    cout << endl;
    string str;
    cout << "Enter a string: " << endl;
    cin >> str;


    int freq[26] = {0};
    for(int i=0; i<str.size(); i++) {
        freq[str[i]-'a']++;
    }

    cout << "No. of query: " << endl;
    int query;
    cin >> query;
    cout << "Enter query: " << endl;
    while(query--) {
        char ch;
        cin >> ch;
        cout << "appeared -> " << freq[ch - 'a'] << endl;
    }
    cout << endl;
    return 0;
}