#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;

    if((y > (x+2)) || y < (x-3)){
        cout << "No" << endl;
    }
    else{
        cout << "Yes" << endl;
    }
}