#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int main() 
{
	vector<int> v;
	int num;
	while (cin>>num) 
	{
		if (num == 0) {
			break;
		}
		v.push_back(num);
	}

	for (int i = 0; i < v.size();++i) 
	{
		int min = i;
		for (int j = i + 1; j < v.size(); ++j) 
		{
			if (v[j] < v[min]) 
			{
				min = j;
			}
		}
		swap(v[i],v[min]);
	}

	for (int k = 0; k < v.size(); ++k) 
	{
		cout << v[k] << ",";
	}
	cout << endl;
}