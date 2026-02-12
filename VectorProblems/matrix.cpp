#include<bits/stdc++.h>
using namespace std;

int main(){
	int rows, cols;
	//cout << "Tell me the size of the Matrix: ";
	cin >> rows >> cols;



	vector<vector<int>>matrix(rows, vector<int>(cols));

	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			cin >> matrix[i][j];
		}
	}

	cout << "Size of the Matrix given: " << matrix.size() << " x " << matrix[0].size() << endl << endl;

	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	// cout << matrix[0][2];
}