#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int oneful = (a + b + (a * b));

    if(oneful == 111){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}