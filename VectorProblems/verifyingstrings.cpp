#include<bits/stdc++.h>
using namespace std;

bool letters(string s1, string s2){
	vector<int> count(26, 0);

	for(char c : s1){
		count[c-'a']++;
	}
	for(char c : s2){
		if(count[c-'a'] == 0){
			return false;
		}
		count[c-'a']--;
	}

	return true;
}

int main(){
	int n;
	cin >> n;
	vector<string> v;
	for(int i = 0; i < n; i++){
		string s;
		cin >> s;
		v.push_back(s);
	}
	// for(auto s : v){
	// 	v.push_back(s);
	// }

	cout << "Original String Elements: ";
	for(auto s : v){
		cout << s << " ";
	}
	cout << endl;

	if(letters(v[0], v[1])){
		cout << "First string contains all the letters required to make the second string." << endl;
	}else{
		cout << "First string doesn't contain all the letters required to make the second string." << endl;
	}

}