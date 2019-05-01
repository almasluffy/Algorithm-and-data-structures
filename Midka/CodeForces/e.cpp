#include <bits/stdc++.h>
using namespace std;

const int N = 100000;
int n, m;
int k = 1;
int a[N];
vector<pair<int, int> > numbers;

int _bsearch(int x)
{
	int low = 0, high = numbers.size() - 1;
	int res = -1;
	while (low <= high)
	{
		int mid = (low + high) / 2;
		if (x >= numbers[mid].first && x <= numbers[mid].second)
		{
			res = mid;
			break;
		}
		else if (x > numbers[mid].second)
			low = mid + 1;
		else if (x < numbers[mid].first)
			high = mid - 1;
	}
	return res + 1;
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		numbers.push_back(make_pair(k, a[i] + k - 1));
		k += a[i];
	}
	cin >> m;
	while (m--)
	{
		int x;
		cin >> x;
44		cout << _bsearch(x) << endl;
	}
}