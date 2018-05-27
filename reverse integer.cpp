/*
lucypeony@hotmail.com

leetcode: Reverse Integer 
the difficulty lies how to detect the integer overflow. 
if integer overflows , output 0

I use an ad hoc method to solve this problem.
*/

class Solution {
public:
	int reverse(int x) {
		bool f = false;
		if (x < 0)
		{
			f = true;
			x = 0 - x;
		}

		long long  y = 0;
		while (x > 0) {
			int t = x % 10;
			y *= 10;
			y += t;
			x /= 10;
		}

		if (y > LONG_MAX)
			return 0;

		if (f)
			y = 0 - y;
		return y;
	}
};
