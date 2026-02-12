#include<bits/stdc++.h>
using namespace std;


int main(){

	int n;
	cin >> n;
	vector<int> v;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		v.push_back(x);
	}
	vector<int>small;
	for(int i = 0; i < v.size(); i++){
		if(v[i] < v[i+1] && v[i] < v[i-1]){
			small.push_back(v[i]);
		}
	}

	cout << "The given numbers are: ";
	for(auto i : v){
		cout << i << " ";
	}
	cout << endl;

	cout << "The smallest numbers are: ";
	for(auto j : small){
		cout << j << " ";
	}
	cout << endl;

}