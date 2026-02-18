#include<bits/stdc++.h>
using namespace std;


/*
Catalan Numbers are special type of integers which follows the combinatorics rule.
	Cn = (2n)!/(n+1)!n!
*/

long long catalan(int n){
	vector<long long> dp(n+1);
	dp[0] = dp[1] = 1;

	for(int i = 2; i <= n; i++){
		dp[i] = 0;
		for(int j = 0; j < i; j++){
			dp[i] += dp[j] * dp[i-j-1];
		}
	}
	return dp[n];
}

int main(){

	vector<long long> v;

	int i = 0;
	while(i < 10){
		v.push_back(catalan(i));
		i++;
	}

	cout << "The  first 10 catalan numbers are:" << endl;
	for(auto i : v){
		cout << i << " ";
	}
}