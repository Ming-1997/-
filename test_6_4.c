#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>


//int main()
//{
//	//字符指针
//	char ch = 'Q';
//	char* p = &ch;
//	char* p2 = "abcdef";
//	printf("%c\n", *p);
//	printf("%p\n", p);
//	printf("%p\n", p2);
//	printf("%c\n", *p2);
//
//	//指针数组 - 存放指针的数组
//	int* arr[10] = { 0 };
//	char* ch[5] = { 0 };
//	//数组指针 - 指向数组的指针
//	int(*parr1)[10] = &arr;
//	
//	int(*parr2[10])[5];//parr2 - 是一个数组，有10个元素，每个元素是指针，指针指向的是有5个元素数组，数组每个元素是int
//
//	return 0;
//}

//void test1(int arr[3][5])
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test1(arr);
//	return 0;
//}
/////////////////////////////////////////////  函数指针  ///////////////////////////////////////////////////////////
//函数指针：指向函数的指针
//int Add(int x, int y)
//{
//	int sum = 0;
//	sum = x + y;
//	return sum;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	// &函数名 和 函数名 都是函数的地址
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//
//	int(*pa)(int, int) = Add; // pa - 函数指针
//
//	printf("%d\n", (*pa)(2, 3));
//
//	return 0;
//}

//void print(char*str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void(*p)(char*) = print;
//	(*p)("hello");
//	return 0;
//}

//int main()
//{
//	(*(void(*)())0)();//把0强制类型转换成：void(*)()函数指针类型 - 0就是一个函数的地址
//	                  //调用0处地址中的函数
//	return 0;
//}

//int main()
//{
//	void(*signal(int, void(*)(int)))(int);
//	//signal - 是一个函数声明
//	//signal函数的参数有2个：第一个是int；第二个是函数指针，该函数指针指向的函数的参数是int，返回类型是void
//	//signal函数的返回类型也是一个指针，该指针指向的函数的参数是int，返回类型是void。
//
//	return 0;
//}
///////////////////////////////////////////  函数指针数组  ///////////////////////////////////////////////////////////////

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	//指针数组
//	int* arr[5] = { 0 };
//	//需要一个数组，这个数组可以存放4个函数的地址 - 函数指针数组
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));
//	}
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src)
//{
//
//}
//int main()
//{
//	//写一个函数指针pf，指向my_strcpy函数
//	char*(*pf)(char*, const char*) = my_strcpy;
//	//定义一个数组指针pfArr，存放4个my_strcpy函数
//	char*(*pfArr[4])(char*, const char*) = { my_strcpy,my_strcpy,my_strcpy,my_strcpy };
//
//	return 0;
//}

/////////////////////////////////////////////////  计算器  //////////////////////////////////////////////////
//void menu()
//{
//	printf("*********************************************\n");
//	printf("***********  1.Add         2.Sub  ***********\n");
//	printf("***********  3.Mul         4.Div  ***********\n");
//	printf("***********         0.exit        ***********\n");
//	printf("*********************************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	//pfArr是一个函数指针数组 - 转移表
//	int(*pfArr[5])(int,int) = { 0,Add,Sub,Mul,Div };
//	do
//	{
//		menu();
//		printf("请选择要执行的操作>：");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数，空格隔开>：");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if(input==0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	} while (input);
//
//	return 0;
//}

//void Calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数，空格隔开>：");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int main()
//{
//	int input = 0;
//	/*
//	int x = 0;
//	int y = 0;
//	*/
//	do
//	{
//		menu();
//		printf("请选择要执行的操作>：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			/*
//			printf("\n请输入两个操作数，空格隔开>：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			*/
//			Calc(Add);
//			break;
//		case 2:
//			/*
//			printf("\n请输入两个操作数，空格隔开>：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			*/
//			Calc(Sub);
//			break;
//		case 3:
//			/*
//			printf("\n请输入两个操作数，空格隔开>：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			*/
//			Calc(Mul);
//			break;
//		case 4:
//			/*
//			printf("\n请输入两个操作数，空格隔开>：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			*/
//			Calc(Div);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[5] = { 0 };
//	int(*p)[5] = &arr; //取出数组的地址
//
//	int(*pfArr[4])(int, int); //pfArr是一个数组 - 函数指针数组
//	int(*(*ppfArr)[4])(int, int) = &pfArr; //ppfArr - 指向函数指针数组的指针
//
//	return 0;
//}

//qsort - 可以排序任意的数据

//void Bubble_Sort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for ( i = 0; i < sz-1; i++)
//	{
//		for ( j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	int arr[] = { 1,3,5,7,9,8,6,2,4,0 };
//	//int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	struct Stu s[3] = { {"张三",20},{"李四",22},{"王五",25} };
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	Bubble_Sort(arr, sz);
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

#include<stdlib.h>	
#include<string.h>
//void* 类型的指针 可以接受任意类型的指针
//void* 类型的指针不能进行解引用操作
//void* 类型的指针不能进行加减整数的操作

//对整型数组排序
//int cmp_int(const void*e1, const void*e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void test1()
//{
//	int arr[] = { 1,3,5,7,9,8,6,4,2,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
////对浮点型数组排序
//int cmp_float(const void*e1, const void*e2)
//{
//	return (int)(*(float*)e1 - *(float*)e2);
//}
//void test2()
//{
//	double arr[] = { 1.1,3.3,5.5,7.7,9.9,8.8,6.6,4.4,2.2,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	qsort(arr, sz, sizeof(arr[0]), cmp_float);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%f ", arr[i]);
//	}
//	printf("\n");
//}
////对结构体排序
//struct Stu
//{
//	char name[20];
//	int age;
//};
////按年龄排序
//int cmp_stu_by_age(const void*e1, const void*e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//void test3()
//{
//	struct Stu s[3] = { {"张三",20},{"李四",28},{"王五",25} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	int i = 0;
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s	%d\n", s[i].name, s[i].age);
//	}
//	printf("\n");
//}
////按名字排序
//int cmp_stu_by_name(const void*e1, const void*e2)
//{
//	//比较名字，即比较字符串
//	//不能之接比较，用strcmp函数
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//void test4()
//{
//	struct Stu s[3] = { {"张三",30},{"李四",28},{"王五",25} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	int i = 0;
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s	%d\n", s[i].name, s[i].age);
//	}
//	printf("\n");
//}
//int main()
//{
//	test1();
//	test2();
//	test3();
//	test4();
//	return 0;
//}

int main()
{
	//int a[] = { 1,2,3,4 }; //4 * 4 = 16
	//printf("%d\n", sizeof(a)); //sizeof(数组名) - 计算数组总大小 - 单位是字节 - 16
	//printf("%d\n", sizeof(a + 0)); // 4
	//printf("%d\n", sizeof(*a)); // 4
	//printf("%d\n", sizeof(a + 1)); // 4
	//printf("%d\n", sizeof(a[1])); // 4
	//printf("%d\n", sizeof(&a)); // 4
	//printf("%d\n", sizeof(*&a)); // 16
	//printf("%d\n", sizeof(&a + 1)); // 4
	//printf("%d\n", sizeof(&a[0])); // 4
	//printf("%d\n", sizeof(&a[0] + 1)); // 4

	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr + 0));
	printf("%d\n", sizeof(*arr));
	printf("%d\n", sizeof(arr[1]));
	printf("%d\n", sizeof(&arr));
	printf("%d\n", sizeof(&arr + 1));
	printf("%d\n", sizeof(&arr[0] + 1));
	printf("%d\n", strlen(arr));
	printf("%d\n", strlen(arr + 0));
	printf("%d\n", strlen(*arr));
	printf("%d\n", strlen(arr[1]));
	printf("%d\n", strlen(&arr));
	printf("%d\n", strlen(&arr + 1));
	printf("%d\n", strlen(&arr[0] + 1));
	/*char arr[] = "abcdef";
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr + 0));
	printf("%d\n", sizeof(*arr));
	printf("%d\n", sizeof(arr[1]));
	printf("%d\n", sizeof(&arr));
	printf("%d\n", sizeof(&arr + 1));
	printf("%d\n", sizeof(&arr[0] + 1));
	printf("%d\n", strlen(arr));
	printf("%d\n", strlen(arr + 0));
	printf("%d\n", strlen(*arr));
	printf("%d\n", strlen(arr[1]));
	printf("%d\n", strlen(&arr));
	printf("%d\n", strlen(&arr + 1));
	printf("%d\n", strlen(&arr[0] + 1));
	char *p = "abcdef";
	printf("%d\n", sizeof(p));
	printf("%d\n", sizeof(p + 1));
	printf("%d\n", sizeof(*p));
	printf("%d\n", sizeof(p[0]));
	printf("%d\n", sizeof(&p));
	printf("%d\n", sizeof(&p + 1));
	printf("%d\n", sizeof(&p[0] + 1));
	printf("%d\n", strlen(p));
	printf("%d\n", strlen(p + 1));
	printf("%d\n", strlen(*p));
	printf("%d\n", strlen(p[0]));
	printf("%d\n", strlen(&p));
	printf("%d\n", strlen(&p + 1));
	printf("%d\n", strlen(&p[0] + 1));*/

	return 0;
}