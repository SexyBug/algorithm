#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int main()
{
	vector<int> v;
	int num;
	while (cin >> num)
	{
		if (num == 0) {
			break;
		}
		v.push_back(num);
	}

	bool hasSwap = true;
	for (int i = v.size() - 1; i > 0 && hasSwap; --i)
	{
		for (int j = 0; j <= i-1; ++j)
		{
			hasSwap = false;
			if (v[j] > v[j + 1])
			{
				hasSwap = true;
				swap(v[j], v[j + 1]);
			}
		}
	}

	for (int k = 0; k < v.size(); ++k) {
		cout << v[k] << ",";
	}
	cout << endl;
}