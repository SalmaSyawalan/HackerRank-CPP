#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n, q, tempIdx, tempVal;
    cin >> n;
    cin >> q;
    
    vector<int> arr[n];
    int query[q][2];
    
    for(int i = 0; i < n; i++){
    	cin >> tempIdx;
    	for(int j = 0; j < tempIdx; j++){
    		cin >> tempVal;
    		arr[i].push_back(tempVal);
		}
	}
	
	for(int i = 0; i < q; i++){
		for(int j = 0; j < 2; j++){
			cin >> query[i][j];
		}
	}
	
	for(int i = 0; i < n; i++){
		cout << arr[query[i][0]].at(query[i][1]) << endl;
	}
    
    return 0;
}
