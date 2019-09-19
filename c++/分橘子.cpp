/*
 内容：分橘子问题
*/
 
#include<iostream>
using namespace std;
int num[6]; //全局变量记录每个儿子分得的橘子数量
void orange(int i,int left) 
{
	int ave = 420;   //2520个橘子平均分给6个儿子的个数
	if (i == 0)
	{
		num[i] = (ave - ave / 2)*(8 - i) / (8 - i - 1);//第一个儿子的数目, 
		left = num[i] - ave / 2; //下一个儿子得到的橘子数
	}
	else
	{
		num[i] = ave*(8 - i) / (8 - i - 1) - left;//由left求第i+1个儿子的橘子数目
		left = ave / (8 - i - 1);//第i+1个儿子得到的橘子数目 
	}
	if (i < 6)
		orange(i + 1, left);
}
int main()
{
	orange(0, 0);
	for (int i = 0; i<6; i++)
	{
		cout << "第" << i + 1 << "个儿子原先手中的橘子数目数为" << num[i] << endl;//输出每个儿子原先手中的橘子数目 
	}
 
	return 0;
}
