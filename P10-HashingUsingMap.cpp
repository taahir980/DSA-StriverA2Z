#include<bits/stdc++.h>
using namespace std;

int main() {
    cout << endl;
    int n;
    cout << "Enter no. of elements: " << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the elements: " << endl;
    for(int i = 0; i<n; i++) {
        cin >> arr[i];
    }

    // PreStoring 
    unordered_map<int, int> mpp;
    for(int i=0; i<n; i++) {
        mpp[arr[i]]++;
    }

    int q;
    cout << "Enter the no. of quries: " << endl;
    cin >> q;

    cout << "Enter query: " << endl;
    while(q--) {
        int num;
        cin >> num;
        cout << "appeared " << mpp[num] << endl;
    }

    cout << endl;
    return 0;
}