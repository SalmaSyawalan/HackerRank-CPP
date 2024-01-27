#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    string num = "";
    
    // Write your code here
    if(n > 9){
    	cout << "Greater than 9" << endl;
    	return 0;
	} else {
		if(n == 1) num = "one";
		else if(n == 2) num = "two";
		else if(n == 3) num = "three";
		else if(n == 4) num = "four";
		else if(n == 5) num = "five";
		else if(n == 6) num = "six";
		else if(n == 7) num = "seven";
		else if(n == 8) num = "eight";
		else if(n == 9) num = "nine";
	}
    
    cout << num << endl;

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

