class Solution {
public:
	int reverse(int x) {
		bool f = false;
		if (x < 0)
		{
			f = true;
			x = 0 - x;
		}

		int y = 0;
		while (x > 0) {
			int t = x % 10;
			if (y > LONG_MAX / 10)
				return 0;
			y *= 10;
			y += t;
			x /= 10;
		}

		if (f)
			y = 0 - y;
		return y;
	}
};
