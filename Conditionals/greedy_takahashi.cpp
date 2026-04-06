#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a, b, k;
    cin >> a >> b >> k; // 2 3 3
                        // 2 3 1
                        // 2 3 8

    if(k >= a){ // 3 > 2 // 8 > 2
        k = k - a; // 3 - 2 = 1 // 8 - 2 = 6
        a = 0;
        if(k >= b){ // 6 > 3
            b = 0;
        }
        else{ 
            b = b - k; // 3 - 1 = 2
        }
    }
    else if(k < a){
        a = a - k;
        b = b;
    }
    else{
        a = 0;
        b = 0;
    }

    cout << a << " " << b << endl;
}