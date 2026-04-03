#include<bits/stdc++.h>
using namespace std;

int main(){
	string line;
	vector<string> colours;

	getline(cin, line);
	stringstream ss(line);

	string colour;

	while(ss >> colour){
		colours.push_back(colour);
	}

	vector<string> wrong;
	for(auto s: colours){
		for(auto c : s){
			if(c >= '0' && c <= '9'){
				wrong.push_back(s);
				break;
			}
		}
	}

	cout << "All the colours were: ";
	for(auto s : colours){
		cout << s << " ";
	}
	cout << endl;

	cout << "The wrong colours are: ";
	for(auto s: wrong){
		cout << s << " ";
	}
	cout << endl;
}