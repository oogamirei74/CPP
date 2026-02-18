#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	unordered_map<string, int> freq;
	vector<string> arr(n);

	for(int i = 0; i < n; i++){
		cin >> arr[i];
		freq[arr[i]]++;
	}

	for(int i = 0; i < n; i++){
		if(freq[arr[i]] == 1){
			cout << arr[i] << endl;
			cout << i << endl;
			return 0;
		}
	}
	cout << -1;
}