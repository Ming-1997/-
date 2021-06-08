#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<math.h>



int main()
{
	int i = 0;
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i <= 12; i++)
	{
		arr[i] = 0;
		printf("%d\n", i);
	}
	return 0;
}


int main()
{
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;
	int E = 0;
	for ( A = 0; A < 5; A++)
	{
		for (B = 0; B < 5; B++)
		{
			for (C = 0; C < 5; C++)
			{

			}
		}
	}
	return 0;
}

int main()
{
	int killer = 0;
	for (killer = 'A'; killer <= 'D'; killer++)
	{
		if (((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D')) == 3)
		{
			printf("Killer = %c\n", killer);
		}
	}
	return 0;
}

//////////////////////////////////////  打印杨辉三角  //////////////////////////////////////////////////////
int main()
{
	int arr[10][10] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (j == 0)
			{
				arr[i][j] = 1;
			}
			if (i==j)
			{
				arr[i][j] = 1;
			}
			if ((i >= 2) && (j >= 1))
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		int x = 0;
		for (x = 0; x < 10 - 1 - i; x++)
			printf(" ");
		for (j = 0; j <= i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}

//////////////////////////////////////  将数组中的奇数调到前面，偶数放到后面  ///////////////////////////////////////////
void move(int*str,int sz)
{
	int*left = str;
	int*right = str + sz - 1;
	while (left<right)
	{
		从左往右找偶数
		while ((left < right)&&(*left % 2 == 1))
		{
			left++;
		}
		从右往左找基数
		while ((left < right)&&(*right % 2 == 0))
		{
			right--;
		}
		if (left < right)
		{
			int tmp = *left;
			*left = *right;
			*right = tmp;
		}
	}
}
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	move(arr,sz);
	print(arr, sz);

	return 0;
}

//////////////////////////////////////////  汽水问题  ///////////////////////////////////////////////////
int main()
{
	int money = 0; //初始的钱
	int total = 0; //已喝的瓶数
	int empty = 0; //剩下的空瓶
	scanf("%d", &money);
	if(money==0)
	{
		total = 0;
	}
	else
	{
		total = 2 * money - 1;
	}
	total = money;
	empty = money;
	while (empty>=2)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("total = %d\n", total);
	return 0; 
}
/////////////////////////////////////////  用*打印菱形  ////////////////////////////////////////////////////////////
int main()
{
	int line = 0;
	scanf("%d", &line);
	打印上半部分
	int i = 0;
	for (i = 0; i < line; i++)
	{
		打印空格
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		打印*
		for (j = 0; j < 2*i+1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	打印下半部分
	for (i = 0; i < line-1; i++)
	{
		打印空格
		int j = 0;
		for (j = 0; j < i+1; j++)
		{
			printf(" ");
		}
		打印*
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

////////////////////////////////////////  求0-100000中的自幂数（水仙花数）  ////////////////////////////////////////////////
int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		int n = 1;
		int tmp = i;
		int sum = 0;
		while (tmp /= 10)
		{
			n++;
		}
		tmp = i;
		while (tmp)
		{
			sum += (int)(pow(tmp % 10, n));
			tmp /= 10;
		}
		if (sum == i)
			printf("%d ", i);
	}
	return 0;
}

//////////////////////////////////////  求a+aa+aaa+..的前n项的和  //////////////////////////////////////////
int main()
{
	int a = 0;
	int n = 0;
	scanf("%d%d", &a, &n);
	int sum = 0;
	int i = 0;
	int ret = 0;
	for (i = 0; i < n; i++)
	{
		ret = ret * 10 + a;
		sum += ret;
	}
	printf("%d\n", sum);
	return 0;
}

//////////////////////////////////////  逆序字符串  ////////////////////////////////////////
void reverrse(char*str)
{
	assert(str);
	int len = strlen(str);
	char*lift = str;
	char*right = str + len - 1;
	while (lift<right)
	{
		char tmp = *right;
		*right = *lift;
		*lift = tmp;
		lift++;
		right--;
	}
}
int main()
{
	char arr[256] = { 0 };
	int i = 0;
	scanf("%s", &arr);
	gets(arr);
	reverrse(arr);
	printf("%s\n", arr);
	return 0;
}

int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char* *cp[] = { c + 3,c + 2,c + 1,c };
	char** *cpp = cp;

	printf("%s\n", **++cpp); // POINT - 先执行++cpp，再解引用，再解引用
	printf("%s\n", *--*++cpp + 3); // ER - 先执行++cpp，再解引用，再--，再解引用，再+3
	printf("%s\n", *cpp[-2] + 3); // ST - 先执行cpp[-2],cpp[-2] == *(cpp-2);再解引用，再+3
	printf("%s\n", cpp[-1][-1] + 1); // EW - cpp[-1][-1]+1 == *( *(cpp-1) -1)+1
	return 0;
}
int main()
{
	char *a[] = { "work","at","alibaba" }; //这是一个字符指针数组，数组存储的是三个字符串首字符的地址
	char**pa = a;
	pa++; // pa = pa + 1;
	printf("%s\n", *pa); // at
	return 0;
}

int main()
{
	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int *ptr1 = (int *)(&aa + 1); // &aa+1 - 跳过整个数组
	int *ptr2 = (int *)(*(aa + 1)); // aa+1 - 跳过第一行
	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1)); // 10，5
	return 0;
}

int main()
{
	int a[5][5];
	int(*p)[4];
	p = a;
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]); // FFFFFFFC,-4
  计算时，画出内存存储图
	return 0;
}
int main()
{
	int a[4] = { 1, 2, 3, 4 };
	int *ptr1 = (int *)(&a + 1); 
	int *ptr2 = (int *)((int)a + 1); // 首元素地址+1个字节
	printf("%x,%x", ptr1[-1], *ptr2); // 4,02000000
	return 0;
}

int main()
{
	int a[3][2] = { (0, 1), (2, 3), (4, 5) }; // （ , ）- 逗号表达式，即数组中存放的是1，3，5
	int *p;
	p = a[0];
	printf("%d", p[0]); // 1
	return 0;
}

int main()
{
	int a[] = { 1,2,3,4 }; //4 * 4 = 16
	printf("%d\n", sizeof(a)); //sizeof(数组名) - 计算数组总大小 - 单位是字节 - 16
	printf("%d\n", sizeof(a + 0)); // 4
	printf("%d\n", sizeof(*a)); // 4
	printf("%d\n", sizeof(a + 1)); // 4
	printf("%d\n", sizeof(a[1])); // 4
	printf("%d\n", sizeof(&a)); // 4
	printf("%d\n", sizeof(*&a)); // 16
	printf("%d\n", sizeof(&a + 1)); // 4/8
	printf("%d\n", sizeof(&a[0])); // 4
	printf("%d\n", sizeof(&a[0] + 1)); // 4

	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(arr)); //sizeof(arr)计算的是数组的大小，6*1=6
	printf("%d\n", sizeof(arr + 0)); //sizeof(arr+0)计算的是地址，4/8（32位系统为4，64位系统为8）
	printf("%d\n", sizeof(*arr)); // 1
	printf("%d\n", sizeof(arr[1]));// 1
	printf("%d\n", sizeof(&arr)); // 4/8
	printf("%d\n", sizeof(&arr + 1)); // 4/8  &arr+1 是跳过数组后的地址
	printf("%d\n", sizeof(&arr[0] + 1)); // 4/8 &arr[0]+1 是第二个元素的地址

	printf("%d\n", strlen(arr)); // 随机值 
	printf("%d\n", strlen(arr + 0)); //随机值
	printf("%d\n", strlen(*arr)); //err
	printf("%d\n", strlen(arr[1])); //err
	printf("%d\n", strlen(&arr)); //
	printf("%d\n", strlen(&arr + 1));
	printf("%d\n", strlen(&arr[0] + 1));
	char arr[] = "abcdef";
	printf("%d\n", sizeof(arr)); // 7
	printf("%d\n", sizeof(arr + 0)); // 4/8
	printf("%d\n", sizeof(*arr)); // 1
	printf("%d\n", sizeof(arr[1])); // 1
	printf("%d\n", sizeof(&arr)); // 4/8
	printf("%d\n", sizeof(&arr + 1)); // 4/8
	printf("%d\n", sizeof(&arr[0] + 1)); // 4/8

	printf("%d\n", strlen(arr)); // 6
	printf("%d\n", strlen(arr + 0)); // 6
	printf("%d\n", strlen(*arr)); // err
	printf("%d\n", strlen(arr[1])); // err
	printf("%d\n", strlen(&arr)); // 6
	printf("%d\n", strlen(&arr + 1)); // 随机值
	printf("%d\n", strlen(&arr[0] + 1)); // 5

	char *p = "abcdef"; //这一句代码是：把常量字符串"abcdef"中的'a'存放到p中 
	printf("%d\n", sizeof(p)); // 4/8
	printf("%d\n", sizeof(p + 1)); // 4/8  
	printf("%d\n", sizeof(*p)); // 1
	printf("%d\n", sizeof(p[0])); // 1
	printf("%d\n", sizeof(&p)); // 4/8
	printf("%d\n", sizeof(&p + 1)); // 4/8
	printf("%d\n", sizeof(&p[0] + 1)); // 4/8

	printf("%d\n", strlen(p)); // 6
	printf("%d\n", strlen(p + 1)); // 5
	printf("%d\n", strlen(*p)); // error
	printf("%d\n", strlen(p[0])); // error
	printf("%d\n", strlen(&p)); // 随机值
	printf("%d\n", strlen(&p + 1)); // 随机值
	printf("%d\n", strlen(&p[0] + 1)); //5

	二维数组
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a)); // 48
	printf("%d\n", sizeof(a[0][0])); // 4
	printf("%d\n", sizeof(a[0])); // 16
	printf("%d\n", sizeof(a[0] + 1)); // 4/8
	printf("%d\n", sizeof(*(a[0] + 1))); // 4
	printf("%d\n", sizeof(a + 1)); // 4/8
	printf("%d\n", sizeof(*(a + 1))); // 16
	printf("%d\n", sizeof(&a[0] + 1)); // 4
	printf("%d\n", sizeof(*(&a[0] + 1))); // 16
	printf("%d\n", sizeof(*a)); // 16	printf("%d\n", sizeof(a[3])); // 16
	return 0;
}

int main()
{
    int a[5] = { 1, 2, 3, 4, 5 };
    int *ptr = (int *)(&a + 1); // &数组名 + 1      - 跳过整个数组
    printf( "%d,%d", *(a + 1), *(ptr - 1)); // 2，5
    return 0;
}由于还没学习结构体，这里告知结构体的大小是20个字节
struct Test
{
	int Num;
	char *pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;
假设p 的值为0x10000000。 如下表表达式的值分别为多少？
int main()
{
	p = (struct Test*)0x10000000;
	printf("%p\n", p + 0x1); // 10000014
	printf("%p\n", (unsigned long)p + 0x1); // 10000001
	printf("%p\n", (unsigned int*)p + 0x1); // 10000004
	return 0;
}