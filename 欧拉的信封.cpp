#include<iostream>
using namespace std;
//�ֱ��и�����ŵ����ź��ŷ⣬ÿ���Ų��ܷŵ��Լ���ŵ��ŷ�����м��ֽ������
//������û��ݷ�
int ans = 0;
int n;//�涨0<n<100000��
bool vis[1000000] = {};
void put(int num)//num��ʾ��ǰ�÷ŵڼ�������
{
	
	if (num == n+1)
	{
		ans++;
		return;
	}//�߽�
	for (int i = 1; i <= n; i++)
	{
		if (!vis[i]&&i!=num)//��i���ŷ��ǿյ�����num��Ų�һ��
		{
			
			vis[i] = 1;
			put(num + 1);
			vis[i] = 0;//����
			
		}
	}
}
int main()
{
	cin>>n;
	put(1);
	cout << ans;
	}



