#include<iostream>
using namespace std;
string str;
//�ֱ���10������ŵ���ʹ��ӣ�ÿ�����ܷŵ��Լ���ŵĴ�������м��ֽ������
int ans = 0;
int a[100000];
int n;//�涨0<n<100000��
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



