#include<iostream>
using namespace std;
//分别有个带编号的球信和信封，每封信不能放到自己编号的信封里，问有几种解决方案
//这里采用回溯法
int ans = 0;
int n;//规定0<n<100000吧
bool vis[1000000] = {};
void put(int num)//num表示当前该放第几封信了
{
	
	if (num == n+1)
	{
		ans++;
		return;
	}//边界
	for (int i = 1; i <= n; i++)
	{
		if (!vis[i]&&i!=num)//第i个信封是空的且与num编号不一致
		{
			
			vis[i] = 1;
			put(num + 1);
			vis[i] = 0;//回溯
			
		}
	}
}
int main()
{
	cin>>n;
	put(1);
	cout << ans;
	}



