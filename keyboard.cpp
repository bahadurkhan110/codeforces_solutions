#include<iostream>
#include<string>
#include<vector>
#include <cctype>
#include <algorithm>


using namespace std;
	auto isLowerCase = [](const std::string& str) {
        return std::all_of(str.begin(), str.end(), ::islower);
    };
    	auto isUpperCase = [](const std::string& str) {
        return std::all_of(str.begin(), str.end(), ::isupper);
    };
void delete_right(vector<string> res){
	if(res.empty()){
		return;
	}


    res.erase(std::remove_if(res.rbegin(), res.rend(), isLowerCase).base(), res.end());
}

void delete_left(vector<string> res){
	if(res.empty()){
		return;
	}


    res.erase(res.begin(), std::remove_if(res.begin(), res.end(), isUpperCase));
}

int main(void){
	
	int t;
	cin >> t;
	
	while(t--){
		
		string s;
		cin >> s;
		string new_str = "";
		vector<string> res;
		
		for(int i=0; i<s.size(); i++){
			if(s[i] == 'B'){
				delete_right(res);		
			}
			else if(s[i] == 'b'){
				delete_left(res);
				
			}
			res.push_back(s[i]);
		}
		for(int i=0; i<res.size(); i++){
			cout << res[i];
		}
		cout << endl; 
	}
	
	
	return 0;
}
