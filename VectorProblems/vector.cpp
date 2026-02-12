#include<bits/stdc++.h>
using namespace std;

// void printVec(vector<pair<int, int>> &v){
//     cout << "Size: " << v.size() << endl;
//     for(int i = 0; i < v.size(); i++){
//         cout << v[i].first << " " << v[i].second << endl;
//     }
//     cout << endl;
// }

void printVec(vector<int> &v){
    cout << "Size: " << v.size() << endl;
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){
    // vector<pair<int, int>> v = {{1,2}, {3,4}, {5,6}};
    // vector<pair<int, int>> v;
    // int n;
    // cin >> n;
    // for(int i = 0; i < n; i++){
    //     int a, b;
    //     cin >> a >> b;
    //     v.push_back({a, b});
    // }
    // printVec(v);

    int N;
    cin >> N;
    vector<int> v[10];
    for (int i = 0; i < N; i++){
        int n;
        cin >> n;
        for (int j = 0; j < n; j++){
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }
    for(int i = 0; i < N; i++){
        printVec(v[i]);
    }
    
    return 0;
}

