/*
 ���ݣ�����������
*/
 
#include<iostream>
using namespace std;
int num[6]; //ȫ�ֱ�����¼ÿ�����ӷֵõ���������
void orange(int i,int left) 
{
	int ave = 420;   //2520������ƽ���ָ�6�����ӵĸ���
	if (i == 0)
	{
		num[i] = (ave - ave / 2)*(8 - i) / (8 - i - 1);//��һ�����ӵ���Ŀ, 
		left = num[i] - ave / 2; //��һ�����ӵõ���������
	}
	else
	{
		num[i] = ave*(8 - i) / (8 - i - 1) - left;//��left���i+1�����ӵ�������Ŀ
		left = ave / (8 - i - 1);//��i+1�����ӵõ���������Ŀ 
	}
	if (i < 6)
		orange(i + 1, left);
}
int main()
{
	orange(0, 0);
	for (int i = 0; i<6; i++)
	{
		cout << "��" << i + 1 << "������ԭ�����е�������Ŀ��Ϊ" << num[i] << endl;//���ÿ������ԭ�����е�������Ŀ 
	}
 
	return 0;
}
