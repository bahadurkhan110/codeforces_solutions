#include<iostream>
#include<string>

using namespace std;

int dsum(int x){
	int sum = 0;
    string digits = std::to_string(x);
    
    for (char digit : digits) {
        sum += digit - '0';
    }
    
    return sum;
}

int main(void){
	
	int t;
	cin >> t;
	while(t--){
		
		int n;
		cin >> n;
		int count = 0;
		
		for(int i=0; i<=n; i++){
			for(int j=0; j<=n-i; j++){
				int k = n - i - j;	
				if (i+j+k == n){
					if((dsum(i) + dsum(j) + dsum(k)) == dsum(n)){
		
						count++;
					}
				}
			
			}
		}
		cout << count << "\n";
		
	}
	
	
	return 0;
}
