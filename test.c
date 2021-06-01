#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//创建一个结构体类型-struct Stu
//struct Stu
//{
//	//成员变量
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	//使用struct Stu这个类型创建了一个学生对象s1，并初始化
//	struct Stu s1 = { "张三",20,"20210601" };
//
//	printf("%s\n", s1.name); //操作符“.”的用法：结构变量.成员名
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);
//	
//	struct Stu* ps = &s1;
//	printf("%s\n", ps->name); //操作符“->”的用法：结构体指针->成员名
//	printf("%d\n", ps->age);
//	printf("%s\n", ps->id);
//	
//	return 0;
//}
//整型提升
//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));
//	printf("%u\n", sizeof(!c));
//	return 0;
//}//int main()//{
//	int a = 10;//	int b = 20;//	int c = b + a * 3;//}//代码2//int main()//{//	int a = 0;//	int c = 1;//	a = c + c;//	printf("%d\n", a);//}//代码3-非法表达式
//int main()
//{
//	int i = 10;
//	i = i-- - --i * (i = -3) * i++ + ++i;
//	printf("i = %d\n", i);
//	return 0;
//}////代码4//int fun()
//{
//	static int count = 1;
//	return ++count;
//}
//int main()
//{
//	int answer;
//	answer = fun() - fun() * fun();
//	printf("%d\n", answer);//输出多少？
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	int a = 0;
//	a = (++i) + (++i) + (++i);
//	printf("%d\n", i);
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int *p = &a;//指针变量
//	return 0;
//}

//int main()
//{
//	//printf("%d\n", sizeof(char*)); //4
//	//printf("%d\n", sizeof(short*)); //4
//	//printf("%d\n", sizeof(int *)); //4
//	//printf("%d\n", sizeof(double*)); //4
//	int a = 0x11223344;
//	int* pa = &a;
//	//char *pc = &a;
//	//printf("%p\n", pa);
//	//printf("%p\n", pc);
//	return 0;
//}

//int main()
//{
//	int a = 0x12345678;
//	int *pa = &a;
//	char *pc = &a;
//	//指针的类型决定了：指针走一步走多远（步长）
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);//加4个字节（一个整型）
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);//加1个字节（一个字符）
//
//	return 0;
//}

//int main()
//{
//	int arr1[10] = { 0 };
//
//	int *p = arr1;
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//
//	return 0;
//}

//int *test()
//{
//	int a = 10; 
//	return &a;
//}
//int main()
//{
//	int *p = test(); //指针指向的空间释放，变成野指针
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int *pa = &a; //初始化
//	int *p = NULL; //NULL -用来初始化指针的，给指针赋值
//	return 0;
//}

//int my_strlen(char *str)
//{
//	char *end = str;
//	while (*end!='\0')
//	{
//		end++; //找到数组最后一个元素的地址
//	}
//	return end - str; //元素个数=最后一个元素的地址-首元素的地址
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%p ========= %p\n", p + i, &arr[i]); //打印的地址是一样的
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa; //二级指针
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	//int* pa = &a;
//	//int* pb = &b;
//	//int* pc = &c;
//	int* arr[3] = { &a,&b,&c }; //数组指针
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d =======> ", *(arr[i]));
//		printf("%p \n", arr[i]);
//	}
//	return 0;
//}
/////////////////////////////////////////////  定义函数 数组传参  ////////////////////////////////////////////////
//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Init(arr,sz); //把数组初始化为0；
//	print(arr, sz); 
//	Reverse(arr,sz); //把数组的元素逆序排序
//	print(arr, sz);
//	return 0;
//}

//void Swap(int arr1[], int arr2[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	Swap(arr1,arr2,sz);
//	printf("arr1 = ");
//	print(arr1, sz);
//	printf("arr2 = ");
//	print(arr2, sz);
//	return 0;
//}
////////////////////////////////////////////////  计算a在计算机中的补码的1的个数  /////////////////////////////////////////////
//int count_bit_one(int n)
//{
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//			count++;
//	}
//	return count;
//}
//int count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	//求a的二进制补码表示中有几个1
//	int count = count_bit_one(a);
//	printf("count = %d\n", count);
//	return 0;
//}
//////////////////////////////////////////////  乘法表  ////////////////////////////////////////////////////////////
//void print_table(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%2d*%d=%-3d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}
//////////////////////////////////////////////  递归的方式求n的k次方  /////////////////////////////////////////////////
double Pow(int n, int k)
{
	if (k < 0)
		return (1.0 / (Pow(n, -k)));
	else if (k == 0)
		return 1;
	else
		return n * Pow(n, k - 1);
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	double ret = Pow(n, k);
	printf("%d的%d次方 = %lf\n", n, k, ret);
	return 0;
}
