/* 抽奖小程序 */ 

#include <vector>
#include <stdio.h>
#include <time.h>
#include <windows.h>
#define NUMBER 100

using namespace std;  // 后面的向量必须用到这一名称空间 

void prize_frame() // 搭建抽奖页面框架
{
	int i,j;
	for(i=0;i<50;i++)
	{
		printf("*");
	}
	printf("\n");
	for(i=1;i<3;i++)
	{
		printf("*");
		for(j=0;j<48;j++)
		{
			printf(" ");
		}
		printf("*\n");
	}
	printf("*");
	for(j=0;j<17;j++)
	{
		printf(" ");
	}
	printf("1.我是黄金会员");
	for(j=0;j<17;j++)
	{
		printf(" ");
	}
	printf("*\n");
	for(i=1;i<3;i++)
	{
		printf("*");
		for(j=0;j<48;j++)
		{
			printf(" ");
		}
		printf("*\n");
	}
	printf("*");
	for(j=0;j<17;j++)
	{
		printf(" ");
	}
	printf("2.我是白银会员");
	for(j=0;j<17;j++)
	{
		printf(" ");
	}
	printf("*\n");
	for(i=1;i<3;i++)
	{
		printf("*");
		for(j=0;j<48;j++)
		{
			printf(" ");
		}
		printf("*\n");
	}
	printf("*");
	for(j=0;j<17;j++)
	{
		printf(" ");
	}
	printf("3.我是普通会员");
	for(j=0;j<17;j++)
	{
		printf(" ");
	}
	printf("*\n");
	for(i=1;i<3;i++)
	{
		printf("*");
		for(j=0;j<48;j++)
		{
			printf(" ");
		}
		printf("*\n");
	}
	for(i=0;i<50;i++)
	{
		printf("*");
	}
	printf("\n");
} 

int rand_prize()   // 返回0-99之间的随机数 
{
	vector<int> arrayInt;
	int i;
	for(i=0;i<NUMBER;i++)
	{
		arrayInt.push_back(i);
	}
	for(i=0;i<arrayInt.size();i++)
	{
		srand(int(time(0)));
		int para = rand()%(arrayInt.size()-i)+i;
		swap(arrayInt[i], arrayInt[para]);
	}
	return arrayInt[0];
}

void prize_a()   // 黄金会员的抽奖函数 
{
	// 设置黄金会员10%一等奖，30%二等奖，50%三等奖，10%不获奖 
	int para_a = rand_prize();
	if(para_a < 90)
	{
		if(para_a < 40)
		{
			if(para_a < 10)
			{
				printf("恭喜您获得一等奖！\n\n");
			}
			else
			{
				printf("恭喜您获得二等奖！\n\n");
			}
		}
		else
		{
			printf("恭喜您获得三等奖！\n\n");
		} 
	} 
	else
	{
		printf("感谢参与！\n\n"); 
	}
}

void prize_b()   // 白银会员的抽奖函数 
{
	// 设置白银会员5%一等奖，20%二等奖，35%三等奖，40%不获奖 
	int para_a = rand_prize();
	if(para_a < 60)
	{
		if(para_a < 25)
		{
			if(para_a < 5)
			{
				printf("恭喜您获得一等奖！\n\n");
			}
			else
			{
				printf("恭喜您获得二等奖！\n\n");
			}
		}
		else
		{
			printf("恭喜您获得三等奖！\n\n");
		} 
	} 
	else
	{
		printf("感谢参与！\n\n"); 
	}
}

void prize_c()   // 普通会员的抽奖函数 
{
	// 设置普通会员1%一等奖，9%二等奖，20%三等奖，70%不获奖 
	int para_a = rand_prize();
	if(para_a < 30)
	{
		if(para_a < 10)
		{
			if(para_a < 1)
			{
				printf("恭喜您获得一等奖！\n\n");
			}
			else
			{
				printf("恭喜您获得二等奖！\n\n");
			}
		}
		else
		{
			printf("恭喜您获得三等奖！\n\n");
		} 
	} 
	else
	{
		printf("感谢参与！\n\n"); 
	}
}

int main()
{
	prize_frame();   // 抽奖页面 
	
	printf("\n确认您的会员身份\n黄金会员请输1、白银会员请输2、普通会员请输3\n请输入："); 
	int judge_id;    // 输入会员身份
	scanf("%d",&judge_id);
	getchar();
		
	char now_or_later; 
	switch(judge_id)
	{
		case 1:
		{
			system("cls");
			printf("\n\n欢迎您，尊敬的黄金会员！\n");
			printf("请问您是否立即进行抽奖\n现在抽奖输入Y，稍后再抽输入N\n请输入：");
			scanf("%c",&now_or_later);
			if(now_or_later == 'Y' || now_or_later == 'y')
			{
				prize_a();
			}
			break;
		}
		case 2:
		{
			system("cls");
			printf("\n\n欢迎您，尊敬的白银会员！\n");
			printf("请问您是否立即进行抽奖\n现在抽奖输入Y，稍后再抽输入N\n请输入：");
			scanf("%c",&now_or_later);
			if(now_or_later == 'Y' || now_or_later == 'y')
			{
				prize_b();
			}
			break;
		}
		case 3:
		{
			system("cls");
			printf("\n\n欢迎您，尊敬的普通会员！\n");
			printf("请问您是否立即进行抽奖\n现在抽奖输入Y，稍后再抽输入N\n请输入：");
			scanf("%c",&now_or_later);
			if(now_or_later == 'Y' || now_or_later == 'y')
			{
				prize_c();
			}
			break;
		}
		default:
		{
			system("cls");
			printf("\n\n您的输入不对哦！\n");
			break;
		}
	}
	system("pause"); 
} 
