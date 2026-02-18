#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    unordered_map<int,int> freq;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        freq[x]++;
    }

    cout << freq.size();
}
