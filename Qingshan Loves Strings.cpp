#include<iostream>
#include<string>

using namespace std;

bool check_good(string s, string t, int n, int m){
	int i=0;
	for(i=0; i<n-1; i++){
		if(s[i] == s[i+1]){
//			cout << "in" << endl;
			if(s[i] == t[0]){
//				cout << "in4" << endl;
				return false;
			}
//			cout << s[i+1] << " and t is: " << t[m-1] << endl;
			if(s[i+1] == t[m-1]){
//				cout << "in5" << endl;
				return false;
			}
		}
	}
	return true;
}

bool check_s(string s, int n){
	for(int j=0; j<n-1; j++){
		if (s[j] == s[j+1]){
			return false;
		}
		
	}
	return true;
}


int main(void){
	
	int tests = 0;
	cin >> tests;
	
	string s = "";
	string t = "";
	int n = 0;
	int m = 0;
	while (tests--){
	
		cin >> n >> m;
		
		cin >> s;
		cin >> t;
		
		
		if(check_s(s, n)){
			cout << "YES" << endl;
//			cout << "in3" << endl;
		}
		else if(check_s(t,m)){		
		
			if(check_good(s, t, n, m)){
//			cout << "in2" << endl;
				cout << "YES" << endl;
			}
			else{
				cout << "NO" << endl;
			}
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
}
