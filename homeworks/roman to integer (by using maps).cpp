#include <iostream>
#include <string>
#include <map>

using namespace std;

class Solution
{
public:

	int romanToInt(string s)
	{
		int sum = 0;

		map<char, int> roman;

		roman['I'] = 1;
		roman['V'] = 5;
		roman['X'] = 10;
		roman['L'] = 50;
		roman['C'] = 100;
		roman['D'] = 500;
		roman['M'] = 1000;

		for(int i = 0; i < s.size(); i++)
		{
			if(roman[s[i]]<roman[s[i+1]])
			{
				sum -= roman[s[i]];
			}
			else
			{
				sum += roman[s[i]];
			}
		}
		return sum;
	}

};

int main()
{
	string s;

	cin >> s;

	int ret = Solution().romanToInt(s);

	cout << ret << endl;
}