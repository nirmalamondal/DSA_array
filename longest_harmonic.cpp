/*We define a harmonious array as an array where the difference between its maximum value
and its minimum value is exactly 1.

Given an integer array nums, return the length of its longest harmonious subsequence
among all its possible subsequences.

A subsequence of an array is a sequence that can be derived from the array by deleting some or no elements without changing the order of the remaining elements.

Example 1:
Input: nums = [1,3,2,2,5,2,3,7]
Output: 5

Explanation: The longest harmonious subsequence is [3,2,2,2,3].
*/
#include<bits/stdc++.h>
using namespace std;

int findLHS(vector<int>& v) {
        map<int,int> freq;
        int max_len = 0;
        for(int i=0;i<v.size();i++){

                freq[v[i]]++;       
        }
        
        vector<int> high_len;
       for(int i=0;i<v.size();i++){
           if( freq.find(v[i]+1) != freq.end()){
               max_len = max(max_len,freq[v[i]+1] + freq[v[i]]);
           }
       }
        
        return max_len;
        
    }




int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>nums;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			nums.push_back(x);
		}
		
		cout<<findLHS(nums)<<endl;
	}
	return 0;
}
