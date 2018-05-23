/*
lucypeony@hotmail.com

leetcode threeSum 
problem description: 
Given an array nums of n integers, are there elements a, b, c in nums such that a + b + c = 0? Find all unique triplets in the array which gives the sum of zero.
Note:
The solution set must not contain duplicate triplets.

This problem can be solved using naive method (n*n*n)

也可以使用循环+夹逼的方法。 此种方法的时间复杂度为：
１，首先要排序
２，先固定ｉ，然后使ｊ＝ｉ＋１，同时ｋ＝nums.end()-1
3,每次运算的时候，i++,根据*i+*j+*k 和target两个值之间的差别，决定如何移动j 和 k. 
4，每次循环后，j++,k--
这里要注意的是， 不要让下标产生out of bounds Exception. 
这里还要注意的是，跳过重复的数字
*/

class Solution {
public:
	vector<vector<int>> threeSum(vector<int> &nums) {
		vector<vector<int>> result;
		if (nums.size() < 3) return result;
		//at first , sort this list 
		sort(nums.begin(), nums.end());

		for (auto i = nums.begin(); i < nums.end() - 2; i++) {
			//skip values which are equal to *i
			if (i>nums.begin() && *i==*(i-1)) continue;

			auto k = nums.end() - 1;

			auto j = i + 1;

			while (j < k) {
				if (*i + *j + *k < 0) {
					j++;
					while (*j == *(j - 1) && j<k) j++;
				}
				else if(*i + *j + *k > 0){
					k--;
					while (*k == *(k + 1) && j<k) k--;
				}
				else {
					result.push_back({ *i,*j,*k });
					j++;
					k--;
					while (*j == *(j - 1) && *k == *(k + 1) && j < k) ++j;
				}
			}
			
		}
		return result;


	}//threeSum
};
