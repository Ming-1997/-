#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//int main()
//{
//	int a = 10;
//	float b = 10.0;
//	char c = 'a';
//	char d = '0';
//	printf("%c\n", c);
//	printf("%d\n", d);
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* p1 = &a;
//	char* p2 = (char*)&a; //(char*) - 强制类型转换
//	printf("%x %x\n", *p1, *p2); //打印：11223344 44
//	return 0;
//}
/////////////////////////////////////////////////////////////////  判断当前机器的字节序  /////////////////////////////////////////////
//int check_sys()
//{
//	int i = 1;
//	//返回1，代表小端
//	//返回0，代表大端
//	return (*(char*)&i); //(char*) - 强制类型转换，将i的地址转换成char型
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a = %d\nb = %d\nc = %d\n", a, b, c); //打印：-1 -1 255
//	return 0;
//}

//int main()
//{
//	char a = -128;
//	//1000 0000 0000 0000 0000 0000 1000 0000 - 源码
//	//1111 1111 1111 1111 1111 1111 0111 1111 - 反码
//	//1111 1111 1111 1111 1111 1111 1000 0000 - 补码
//	//1000 0000 - char a
//	printf("%u\n", a); // %u - 打印无符号十进制整型
//	//1111 1111 1111 1111 1111 1111 1000 0000
//	return 0;
//}

//int main()
//{
//	int i = -20;
//	//1000 0000 0000 0000 0000 0000 0001 0100 - 源码
//	//1111 1111 1111 1111 1111 1111 1110 1011 - 反码
//	//1111 1111 1111 1111 1111 1111 1110 1100 - 补码
//	unsigned j = 10;
//	//0000 0000 0000 0000 0000 0000 0000 1010 - 源码
//	printf("%d\n", i + j);
//	//1111 1111 1111 1111 1111 1111 1111 0110 - 补码
//	//1111 1111 1111 1111 1111 1111 1111 0101 - 反码
//	//1000 0000 0000 0000 0000 0000 0000 1010 - 源码
//	//-10
//	return 0;
//}

//int main()
//{
//	unsigned i = 0;
//	for (i = 9; i >= 0; i--) 
//	{
//		printf("%u\n", i);
//	}
//	//程序会死循环
//	//当i为0时，i--，i会变成4294967295(2的32次方-1)
//	return 0;
//}

//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//		printf("%c\n", a[i]);
//	}
//	printf("%d\n", strlen(a));//打印：255
//	return 0;
//}

//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hehe\n");
//	}
//	//死循环
//	return 0;
//}

//int main()
//{
//	double a = 1E10;
//	printf("%lf\n", a);
//	return 0;
//}
//
//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n = %d\n", n); // 9
//	printf("pFloat = %f\n", *pFloat); // 0.000000 
//
//	*pFloat = 9.0;
//	//1001
//	//(-1)^0 * 1.001*2^3 
//	//0 10000010 00100000000000000000000 -> 1091567616
//	printf("n = %d\n", n); // 1091567616
//	printf("pFloat = %f\n", *pFloat); // 9.0
//	return 0;
//}
//
//int main()
//{
//	float f = 5.5;
//	//5.5  ->  101.1
//	//(-1)^0 * 1.011*2^2
//	//S=0
//	//M=1.011
//	//E=2
//	//0100 0000 1011 0000 0000 0000 0000 0000  
//	//0x40 b0 00 00
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	do
//	{
//		printf("%d,", i);
//	} while (i++);
//	printf("%d\n", i);
//	return 0;
//}

//int main()
//{
//	char arr[5] = { 0 };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%c", &arr[i]);
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}

//void test(int arr[])
//{
//	printf("%d", sizeof(arr) / sizeof(arr[0]));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr); //打印：1
//	return 0;
//}

//int main()
//{
//	const char* p = "abcdef"; //"abcdef" 是一个常量字符串,不能被修改
//	printf("%c\n", *p);
//	printf("%s\n", p);
//	// *p = 'W';
//	printf("%s\n", p);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	//if (arr1==arr2)
//	//{
//	//	printf("hehe\n");
//	//}
//	//else
//	//{
//	//	printf("haha\n");
//	//}
//	if (p1 == p2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	printf("%p\n%p\n", p1, p2);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	char ah[5] = { 0 };
//	int* pf = { 0 };
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* parr[] = { arr1,arr2,arr3 }; //指针数组
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i]+j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	//int* p = NULL;
//	//char* pc = NULL; 
//	//int arr[10] = { 0 };
//	////arr - 首元素地址 
//	////&arr[0] - 首元素地址
//	////&arr - 数组地址
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr; //&arr - 数组的地址
//	//上面的p就是数组指针
//	return 0;
//}

//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//	return 0;
//}
//
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			//printf("%d ", (*(p + i))[j]);
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5); //arr - 数组名 - 首元素地址
//	print2(arr, 3, 5);
//	return 0;
//}

int main()
{
	int arr[5];         //arr - 是一个数组，数组的每个元素是int型
	int* parr1[10];     //parr1 - 是一个数组，数组的每个元素是int* （指针数组）
	int(*parr2)[10];    //parr2 - 是一个指针，指针指向一个数组，数组的每个元素是int型 （数组指针）
	int(*parr3[10])[5]; //parr3 - 是一个数组，数组有10个元素，每个元素是一个数组指针，每个指针指向的数组有5个元素，每个元素是int型
	return 0;
}