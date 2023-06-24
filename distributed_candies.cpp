/*Q2.Alice has n candies, where the ith candy is of type candyType[i]. Alice noticed that she started to gain weight, so she visited a doctor. 

The doctor advised Alice to only eat n / 2 of the candies she has (n is always even). Alice likes her candies very much, and she wants to eat the maximum number of different types of candies while still following the doctor's advice. 

Given the integer array candyType of length n, return the maximum number of different types of candies she can eat if she only eats n / 2 of them.

Example 1:
Input: candyType = [1,1,2,2,3,3]
Output: 3

Explanation: Alice can only eat 6 / 2 = 3 candies. Since there are only 3 types, she can eat one of each type.
*/


#include<bits/stdc++.h>
using namespace std;


int distributeCandies(vector<int>& v) {
        unordered_map<int,int> freq;
        for(int i=0;i<v.size();i++){
            if(freq.find(v[i])  == freq.end() ){
                freq[v[i]] =1;
            }
               
            else  {
                freq[v[i]]++;
            }              
        }
        return min(freq.size(),v.size()/2);
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
		
		cout<<distributeCandies(nums)<<endl;
	}
	return 0;
}
