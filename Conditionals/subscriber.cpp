#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    if(N < 1000){
        
    }
    else if((N >= 1000) && (N < 10000)){
        N = N - (N%10);
    }
    else if((N >= 10000) && (N < 100000)){
        N = N - (N%100);
    }
    else if((N >= 100000) && (N < 1000000)){
        N = N - (N%1000);
    }
    else if((N >= 1000000) && (N < 10000000)){
        N = N - (N%10000);
    }
    else if((N >= 10000000) && (N < 100000000)){
        N = N - (N%100000);
    }
    else if((N >= 100000000) && (N < 1000000000)){
        N = N - (N%1000000);
    }

    cout << N << endl;
}