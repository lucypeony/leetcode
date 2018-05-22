/*
lucypeony@hotmail.com
first submit in leetcode. 
hope to learn more about algorithms and C++ 
stay hungry , stay stupid. 
The days are long. But the decades are short. 
*/


/*
this problem is a little difficult for me , not because of the problem itself. 
It's because I am not familiar with C++ class. 
How to test this twoSum() function? 
Now I can just use a Solution example. 
I will only update the class Solution part of the code. :-)
*/
#include<iostream>
#include<vector>
using namespace std;


class Solution{
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> res;
		int s = nums.size();
		for (int i = 0; i < s; i++) {
			for (int j = 0; j < s; j++) {
				if ((i!=j)&& (nums[i] + nums[j] == target))
				{
					res.push_back(i);
					res.push_back(j);
					return res;
				}
			}
		}
	}
};


int main() {
	Solution mysolution;
	vector<int> myv = { 3,2,4 };
	vector<int> res = mysolution.twoSum(myv,6);
	cout << res[0] << endl;
	cout << res[1] << endl;

	cout << "end of program" << endl;
	return 0;
}
