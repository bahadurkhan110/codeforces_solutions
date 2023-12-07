#include<iostream>
#include<vector>
using namespace std;

void check(vector<int> nums){
	int max = 0;
	int sum = 0;
	int k = 0;
	for(int i=0; i<nums.size(); i++){
		nums[i] = nums[i] + 1;
		k = i;
		sum = nums[0];
		for(int j=1; j<nums.size(); j++){
			sum = sum * nums[j];
		}
		if(max < sum){
			max = sum;
		}
		nums[k] = nums[k] - 1;
	}
	cout << max << endl;
}

int main(void){
	
	int t;
	cin >> t;
	
	while(t--){
		
		int n;
		cin >> n;
		vector<int> nums;
		for(int i=0; i<n; i++){
			int x;
			cin >> x;
			nums.push_back(x);
		}
		check(nums);
	
	}
	return 0;
}
