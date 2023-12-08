#include<iostream>
using namespace std;

int main(void){
	
	int t;
	cin >> t;
	while(t--){
		
		int n = 0;
		cin >> n;
		
		int rounds = 0;
		
		int turn = 0;
		bool game = true;
		while(game){
			if(turn == 0){
				if((n + 1)% 3 == 0){
					cout << "First" << endl;
					game = false;
				}
				else if((n - 1)% 3 == 0){
					
					cout << "First" << endl;
					game = false;
				}
				else{
					if(n % 3 == 0){
						n = n + 1;
					}else{
						n = n - 1;
					}
				}
				turn = 1;
			}
			if(turn == 1){
				
				if(n+1 % 3==0){
					n = n - 1;
				}else if(n - 1 % 3==0){
					n = n + 1;
				}else{
					
					if(n-1 % 3 == 0){
						n = n - 1;
					}else if(n + 1 % 3 == 0){
						n = n + 1;
					}else if (n % 3 ==0){
						n = n + 1;
					}else{
						n = n - 1;
					}
				}
				turn = 0;
				
			}
			rounds++;
			if(rounds == 10){
				cout << "Second" << endl;
				game = false;
			} 
		}
		
	}
	
	return 0;
}
