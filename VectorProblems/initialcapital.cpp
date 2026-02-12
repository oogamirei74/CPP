#include<bits/stdc++.h>
using namespace std;

char upper(char c){
	return 'A' + (c - 'a');
}

int main(){
	string line;
	vector<string> colours;

	getline(cin, line);
	stringstream ss(line);

	string colour;
	while(ss >> colour){
		colours.push_back(colour);
	}

	// int n;
	// cin >> n;
	// vector<string> colours;
	// for(int i = 0; i < n; i++){
	// 	string s;
	// 	cin >> s;
	// 	colours.push_back(s);
	// }

	cout << "The given line was: ";
	for(auto s: colours){
		cout << s << " ";
	}
	cout << endl << endl;

	for(int i = 0; i < colours.size(); i++){
		if(colours[i][0] >= 'a' && colours[i][0] <= 'z'){
			colours[i][0] = upper(colours[i][0]);
		}
	}


	//The mistake is in the comparison
	//I cannot do this since I have taken input like the vector.
	// for(int i = 1; i < colours.size(); i++){
	// 	if(colours[i-1][0] == " "){
	// 		colours[i][0] = upper(colours[i][0]);
	// 	}
	// }

	cout << "The capitalize form of your line is: ";

	for(auto s: colours){
		cout << s << " ";
	}
}