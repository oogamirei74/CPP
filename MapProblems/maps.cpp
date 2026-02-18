#include<bits/stdc++.h>
using namespace std;

// void print(map<int, string> &m){
// 	cout << "size: " << m.size() << endl;
// 	cout << endl;
// 	for(auto &pr : m){
// 		cout << pr.first << " " << pr.second << endl;
// 	}

// }

void print(unordered_map<int, string> &m){
	cout << "size: " << m.size() << endl;
	cout << endl;
	for(auto &pr : m){
		cout << pr.first << " " << pr.second << endl;
	}

}

int main(){
	// map<string, string> m;
	// m[1] = "abc"; //O(log(n))
	// m[5] = "cdc";
	// m[3] = "acd";
	// m[6] = "a";
	// m["abcd"] = "abcd"; //s.size() * log(n)
	// auto it = m.find(5); //O(log(n))
	//cout << (*it).first << " " << (*it).second << endl;
	//if(it != m.end()) m.erase(it); // O(log(n))
	// if(it == m.end()){
	// 	cout << "NO Value";
	// }else{
	// 	cout << (*it).first << " " << (*it).second << endl;
	// }

	// map<int, string > ::iterator it;
	// for(it = m.begin(); it != m.end(); it++){
	// 	cout << (*it).first << " " << (*it).second << endl;
	// }

	// for(auto &pr : m){
	// 	cout << pr.first << " " << pr.second << endl;
	// }

	// print(m);

	//keys are unique in map.
	//keys are sorted always.
	//access time is also O(log(n))

	/*
	Given N strings, print unique strings in lexiographical order with their frequency
	N <= 10^5
	|S| <= 100
	*/

	// map<string, int> m;
	// int n;
	// cin >> n;
	// for(int i = 0; i < n; i++){
	// 	string s;
	// 	cin >> s;
	// 	//m[s] = m[s] + 1;
	// 	m[s]++;
	// }
	// for(auto pr : m){
	// 	cout << pr.first << " " << pr.second << endl;
	// }

	//Unordered Map
	//Three diffrences between Map & Unordered Map.
	//1. inbuilt implementation
	//2. Time Complexity
	//3. Valid Keys Datatype

	// unordered_map<int, string> m;
	// m[1] = "abc";
	// m[5] = "cdc";
	// m[3] = "acd";
	// m[6] = "a";
	// m[5] = "cde";

	// print(m);

	//inbuilt implementation
	//Every key makes a hash and uses hash table.
	//Time Complexity O(1)
	//unordered_map uses less time complexity
	//pair is not having any inbuilt hash table. That is why unordered_map cannot use pair.


	//Question of unordered_map
	/*
	Given N strings, print unique strings in lexiographical order with their frequency
	N <= 10^5
	|S| <= 100
	*/

	unordered_map<string, int> m;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		string s;
		cin >> s;
		m[s]++;
	}
	int q;
	cin >> q;
	while(q--){
		string s;
		cin >> s;
		cout << m[s] << endl;
	}

}