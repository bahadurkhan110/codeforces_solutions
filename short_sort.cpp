#include<iostream>
#include<string>

using namespace std;


bool check(string s){
		for(int i=0; i<3; i++){
				
				for(int j=0; j<3; j++){
					if(i != j){
						
						string temp = s;
						char c = temp[i];
						temp[i] = temp[j];
						temp[j] = c;
						
						if(temp == "abc"){
							return true;
						}
						
					}
				}
			}	
		return false;
		
}

int main(void){
	
	int t;
	cin >> t;
	
	while(t--){
		
		string s;
		cin >> s;
	
		string temp = "";
		if(s == "abc"){
			cout << "YES" << endl;
		}
		else{
			if(check(s)){
				cout << "YES" << endl;
			}
			else{
				cout << "NO" << endl;
			}
		}
		
		
	}
	
	
	return 0;
}
