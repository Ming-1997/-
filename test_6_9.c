#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<math.h>


////////////////////////////////////////////////////  旋转字符串  /////////////////////////////////////////////////////////
//void left_move(char*p)
//{
//	assert(p); // 断言
//	int len = strlen(p);
//	int n = 0;
//	printf("请输入想要旋转的个数：\n");
//	scanf("%d", &n);
//	if (n >= len)
//		printf("%s\n", p);
//	else
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			char tmp = *p;
//			int j = 0;
//			for (j = 0; j < len - 1; j++)
//			{
//				*(p + j) = *(p + j + 1);
//			}
//			*(p + len - 1) = tmp;
//		}
//		printf("%s\n", p);
//	}
//	//char arr[256] = { 0 };
//	//int i = 0;
//	//for (i = n; i < len; i++)
//	//{
//	//	arr[i-n] = p[i];
//	//}
//	//for (i = 0; i < n; i++)
//	//{
//	//	arr[len - n + i] = p[i];
//	//}
//	//for (i = 0; i < len; i++)
//	//{
//	//	printf("%c", arr[i]);
//	//}
//}
//int main()
//{
//	char ch[256] = "0";
//	printf("请输入需要旋转字符串：\n");
//	gets(ch);
//	left_move(ch);
//	return 0;
//}

////////////////////////////////////////////////////////  ///////////////////////////////////////////////////////////
//int Is_left_move(char*p,char*p2)
//{
//	assert(p); // 断言
//	assert(p2);
//	int len = strlen(p);
//	int len2 = strlen(p2);
//	if (len != len2)
//		return 0;
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		char tmp = *p;
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(p + j) = *(p + j + 1);
//		}
//		*(p + len - 1) = tmp;
//		int ret = strcmp(p, p2);
//		if (ret == 0)
//			return 1;		
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "ABCDEFG";
//	char arr2[] = "ABCDEFG";
//	int ret = Is_left_move(arr1,arr2);
//	if (1 == ret)
//		printf("Yes\n");
//	else
//		printf("No\n");
//	return 0;
//}
//方法2：
//int Is_left_move(char*p, char*p2)
//{
//	assert(p); // 断言
//	assert(p2);
//	int len = strlen(p);
//	int len2 = strlen(p2);
//	if (len != len2)
//		return 0;
//	strncat(p, p, len);
//	char*ret = strstr(p, p2);
//	if (ret == NULL)
//		return 0;
//	else
//		return 1;
//}
//int main()
//{
//	char arr1[256] = "ABCDEFG";
//	char arr2[] = "ABCDEFG";
//	int ret = Is_left_move(arr1, arr2);
//	if (1 == ret)
//		printf("Yes\n");
//	else
//		printf("No\n");
//	return 0;
//}

////////////////////////////////////////////////////////////////////////////////////////////
//int Find_Num(int arr[5][5], int row, int col, int k)
//{
//	int x = 0;
//	int y = col - 1;
//	while (x<=(row-1)&&y>=0)
//	{
//		if (arr[x][y] > k)
//			y--;
//		else if (arr[x][y] < k)
//			x++;
//		else
//			return 1;
//	}
//	return 0;
//}
//方法2：
//int Find_Num(int arr[5][5], int* px, int* py, int k)
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x <= (*px - 1) && y >= 0)
//	{
//		if (arr[x][y] > k)
//			y--;
//		else if (arr[x][y] < k)
//			x++;
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[5][5] = { {1,5,8,9,11},{2,6,11,15,18},{3,8,12,20,23},{4,9,13,21,25},{8,12,15,22,29} };
//	int k = 8;
//	int x = 5;
//	int y = 5;
//	int ret = Find_Num(arr, &x, &y, k);
//	if (1 == ret)
//	{
//		printf("找到了,下标是[%d][%d]\n",x,y);
//	}
//	else
//		printf("没有\n");
//	return 0;
//}

///////////////////////////////////////////////////////////  strlen函数实现  ////////////////////////////////////////////
int my_strlen(const char*str)
{
	assert(str!=NULL); //断言
	int count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[255] = { 0 };
	gets(arr);
	int len = my_strlen(arr);
	printf("len = %d\n", len);
	return 0;
}

///////////////////////////////////////////////  strcpy函数实现  /////////////////////////////////////////////

//int main()
//{
//	char arr1[] = "********************";
//	char arr2[] = "hello world";
//	return 0;
//}