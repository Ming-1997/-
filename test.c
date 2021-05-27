#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>

////////////////////////////////////求某个数的阶乘////////////////////////////////////////
//int main()
//{
//	int n = 0, a = 1;
//	scanf("%d", &n);
//	printf("%d的阶乘是：", n);
//	for (; n > 0; n--)
//	{
//		a = a*n;
//	}
//printf("%d", a);
//}
////////////////////////////////////求1!+2!+...+10! //////////////////////////////
//int main()
//{
//	int i = 0, j = 0;
//	long int a = 1;
//	long int sum = 0;
//	for ( i = 1; i <= 3; i++)
//	{
//		a = 1;
//		for ( j = i; j > 0; j--)
//		{
//			a = a * j;
//		}
//		sum = sum + a;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
////////////////////////////////////求1!+2!+...+10! 简化版//////////////////////
//int main()
//{
//	int i = 0;
//	long int a = 1;
//	long int sum = 0;
//	for ( i = 1; i <= 10; i++)
//	{
//		a = a * i;
//		sum = sum + a;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
///////////////////////////////////逐个对比法 找数组中的某个元素//////////////////////////////
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);           //计算数组的元素个数；
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//	}
//	if (i==sz)
//		printf("找不到\n");
//	return 0;
//}
///////////////////////////////////////二分法 找数组中某个元素////////////////////////////////////
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);  //计算数组的元素个数；
//	int left = 0;      //左下标
//	int right = sz-1;     //右下表
//	while (left <= right) //只能在左下标<=右下标时进入循环；
//	{
//		int mid = (left + right) / 2; //计算中间元素的下标；
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
////////////////////////////////////////////让一串字符从两边往中间出现//////////////////////////
//int main()
//{
//	char arr1[] = "welcome to Quanta!!!!!!";
//	char arr2[] = "***********************";
//	int left = 0;
//	int right = strlen(arr1)-1;
//	while (left <= right)
//	{
//		printf("%s\n", arr2);
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		Sleep(1000);
//		system("cls");
//	}
//	printf("%s\n", arr2);
//	return 0;
/////////////////////////////////////////////////密码验证///////////////////////////////////////////
//int main()
//{
//	char password[20] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("密码输入错误三次，请联系管理员");
//	}
//	return 0;
//}
////////////////////////////////////////////////////把三个数从大到小排列////////////////////////////////
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a<b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b<c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d>%d>%d\n", a, b, c);
//	return 0;
//}
///////////////////////////////////////////求两个数的最大公约数/////////////////////////////////////////////////////
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d%d", &a, &b);
//	int n = 0;
//	while (a%b)
//	{
//		n = a%b;
//		a = b;
//		b = n;
//	}
//	printf("这两个数的最大公约数是：%d\n", b);
//	return 0;
//}
///////////////////////////////////////////求100-200之间的素数////////////////////////////////////////////////
#include<math.h>
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 101; i <= 200; i+=2) 
//	{
//		int j = 0;
//		for ( j = 2; j <= sqrt(i); j++)  //sqrt -是一个数学函数，表示对i开平方；
                                         //任何一个数，如果他不是素数，那么它一定能被一个小于等于它自身开方的数整除；
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
///////////////////////////////////////////////////输出100以内9的个数///////////////////////////////////////////////////////
//int main()
//{
//	int count = 0;
//	for (int i = 0; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//			printf("%d ", i);
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}
////////////////////////////////////////////////////打印乘法表//////////////////////////////////////////////////
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for ( i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j); //%-2d中，-2表示两位数左对齐；2表示两位数右对其；不足两位用空格补齐。
//		}
//		printf("\n");
//	}
//	return 0;
//}
//////////////////////////////////////////////猜数字游戏///////////////////////////////////////////////////////////////////////////////////
#include<time.h>
void menu()
{
	printf("********************************************************\n");
	printf("****************        数字游戏      ******************\n");
	printf("********************************************************\n");
	printf("***************   1. play    0. exit   *****************\n");
	printf("********************************************************\n");
}
void game()
{
	//第一步，生成一个随机数
	int	ret = 0;
	int guess = 0; //接收玩家猜的数
	//拿时间戳来设置随机数的生成起始点
	//time_t time(time_t *timer)
	//time_t
	ret = rand() % 100 + 1; //生成1-100之间的随机数
	//printf("%d\n",ret);
	//第二步，猜数字
	while (1)
	{
		printf("请猜数字>：");
		scanf("%d", &guess);
		if (guess>ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择>：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game(); //猜数字游戏
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择无效，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}
/////////////////////////////////////////////  关机指令  //////////////////////////////////////////////////////
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60"); //system() -用于执行系统命令
// again:                          	//shutdown -s -t 60  表示系统在60s后关机
//	printf("请注意，你的电脑将在60s内关机；请输入\"我是猪\"取消关机。\n请输入>：");
//	scanf("%s", &input);
//	if (strcmp(input, "我是猪") == 0)
//		system("shutdown -a");
//	else
//	{
//		goto again;
//	}
//	return 0;
//}