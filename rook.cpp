#include<iostream>
#include<string>
using namespace std;


int main(void){
	
	int t;
	cin >> t;
	
	while(t--){
		string s;
		cin >> s;
		char row  = s[0];
		char col = s[1];
		int digit = col - '0';

		for (int i=0; i<8; i++){
			if(i+1 != digit)
				cout << row << i+1<<endl;
		}
		string a = "abcdefgh";
		int c = 0;
		for(int i=0; i<8; i++){
			if (a[i] == row){
				col = i;
			}
		}
		for(int i=0; i<8; i++){
			if(i != col)
				cout << a[i] << digit << endl;
		}
		
		
		
	}
	
	
	return 0;
}
