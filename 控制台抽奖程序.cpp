/* �齱С���� */ 

#include <vector>
#include <stdio.h>
#include <time.h>
#include <windows.h>
#define NUMBER 100

using namespace std;  // ��������������õ���һ���ƿռ� 

void prize_frame() // ��齱ҳ����
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
	printf("1.���ǻƽ��Ա");
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
	printf("2.���ǰ�����Ա");
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
	printf("3.������ͨ��Ա");
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

int rand_prize()   // ����0-99֮�������� 
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

void prize_a()   // �ƽ��Ա�ĳ齱���� 
{
	// ���ûƽ��Ա10%һ�Ƚ���30%���Ƚ���50%���Ƚ���10%���� 
	int para_a = rand_prize();
	if(para_a < 90)
	{
		if(para_a < 40)
		{
			if(para_a < 10)
			{
				printf("��ϲ�����һ�Ƚ���\n\n");
			}
			else
			{
				printf("��ϲ����ö��Ƚ���\n\n");
			}
		}
		else
		{
			printf("��ϲ��������Ƚ���\n\n");
		} 
	} 
	else
	{
		printf("��л���룡\n\n"); 
	}
}

void prize_b()   // ������Ա�ĳ齱���� 
{
	// ���ð�����Ա5%һ�Ƚ���20%���Ƚ���35%���Ƚ���40%���� 
	int para_a = rand_prize();
	if(para_a < 60)
	{
		if(para_a < 25)
		{
			if(para_a < 5)
			{
				printf("��ϲ�����һ�Ƚ���\n\n");
			}
			else
			{
				printf("��ϲ����ö��Ƚ���\n\n");
			}
		}
		else
		{
			printf("��ϲ��������Ƚ���\n\n");
		} 
	} 
	else
	{
		printf("��л���룡\n\n"); 
	}
}

void prize_c()   // ��ͨ��Ա�ĳ齱���� 
{
	// ������ͨ��Ա1%һ�Ƚ���9%���Ƚ���20%���Ƚ���70%���� 
	int para_a = rand_prize();
	if(para_a < 30)
	{
		if(para_a < 10)
		{
			if(para_a < 1)
			{
				printf("��ϲ�����һ�Ƚ���\n\n");
			}
			else
			{
				printf("��ϲ����ö��Ƚ���\n\n");
			}
		}
		else
		{
			printf("��ϲ��������Ƚ���\n\n");
		} 
	} 
	else
	{
		printf("��л���룡\n\n"); 
	}
}

int main()
{
	prize_frame();   // �齱ҳ�� 
	
	printf("\nȷ�����Ļ�Ա���\n�ƽ��Ա����1��������Ա����2����ͨ��Ա����3\n�����룺"); 
	int judge_id;    // �����Ա���
	scanf("%d",&judge_id);
	getchar();
		
	char now_or_later; 
	switch(judge_id)
	{
		case 1:
		{
			system("cls");
			printf("\n\n��ӭ�����𾴵Ļƽ��Ա��\n");
			printf("�������Ƿ��������г齱\n���ڳ齱����Y���Ժ��ٳ�����N\n�����룺");
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
			printf("\n\n��ӭ�����𾴵İ�����Ա��\n");
			printf("�������Ƿ��������г齱\n���ڳ齱����Y���Ժ��ٳ�����N\n�����룺");
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
			printf("\n\n��ӭ�����𾴵���ͨ��Ա��\n");
			printf("�������Ƿ��������г齱\n���ڳ齱����Y���Ժ��ٳ�����N\n�����룺");
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
			printf("\n\n�������벻��Ŷ��\n");
			break;
		}
	}
	system("pause"); 
} 
