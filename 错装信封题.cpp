#include<iostream>
using namespace std;
string str;
//分别有10个带编号的球和袋子，每个球不能放到自己编号的袋子里，问有几种解决方案
int ans = 0;
int a[100000];
int n;//规定0<n<100000吧
bool vis[1000000] = {};
void put(int num)
{
	
	if (num == n+1)
	{
		ans++;
		return;
	}
	for (int i = 1; i <= n; i++)
	{
		if (!vis[i]&&i!=num)
		{
			a[i] = num;
			vis[i] = 1;
			put(num + 1);
			
			vis[i] = 0;
			
		}
	}
}
int main()
{
	cin>>n;
	put(1);
	cout << ans << " ";
	for (int i = 1; i <= n; i++)
	{
		cout << a[i];
	}
	}



