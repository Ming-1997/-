#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>


//int main()
//{
//	//�ַ�ָ��
//	char ch = 'Q';
//	char* p = &ch;
//	char* p2 = "abcdef";
//	printf("%c\n", *p);
//	printf("%p\n", p);
//	printf("%p\n", p2);
//	printf("%c\n", *p2);
//
//	//ָ������ - ���ָ�������
//	int* arr[10] = { 0 };
//	char* ch[5] = { 0 };
//	//����ָ�� - ָ�������ָ��
//	int(*parr1)[10] = &arr;
//	
//	int(*parr2[10])[5];//parr2 - ��һ�����飬��10��Ԫ�أ�ÿ��Ԫ����ָ�룬ָ��ָ�������5��Ԫ�����飬����ÿ��Ԫ����int
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
/////////////////////////////////////////////  ����ָ��  ///////////////////////////////////////////////////////////
//����ָ�룺ָ������ָ��
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
//	// &������ �� ������ ���Ǻ����ĵ�ַ
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//
//	int(*pa)(int, int) = Add; // pa - ����ָ��
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
//	(*(void(*)())0)();//��0ǿ������ת���ɣ�void(*)()����ָ������ - 0����һ�������ĵ�ַ
//	                  //����0����ַ�еĺ���
//	return 0;
//}

//int main()
//{
//	void(*signal(int, void(*)(int)))(int);
//	//signal - ��һ����������
//	//signal�����Ĳ�����2������һ����int���ڶ����Ǻ���ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int������������void
//	//signal�����ķ�������Ҳ��һ��ָ�룬��ָ��ָ��ĺ����Ĳ�����int������������void��
//
//	return 0;
//}
///////////////////////////////////////////  ����ָ������  ///////////////////////////////////////////////////////////////

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
//	//ָ������
//	int* arr[5] = { 0 };
//	//��Ҫһ�����飬���������Դ��4�������ĵ�ַ - ����ָ������
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
//	//дһ������ָ��pf��ָ��my_strcpy����
//	char*(*pf)(char*, const char*) = my_strcpy;
//	//����һ������ָ��pfArr�����4��my_strcpy����
//	char*(*pfArr[4])(char*, const char*) = { my_strcpy,my_strcpy,my_strcpy,my_strcpy };
//
//	return 0;
//}

/////////////////////////////////////////////////  ������  //////////////////////////////////////////////////
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
//	//pfArr��һ������ָ������ - ת�Ʊ�
//	int(*pfArr[5])(int,int) = { 0,Add,Sub,Mul,Div };
//	do
//	{
//		menu();
//		printf("��ѡ��Ҫִ�еĲ���>��");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("�������������������ո����>��");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if(input==0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//	} while (input);
//
//	return 0;
//}

//void Calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("�������������������ո����>��");
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
//		printf("��ѡ��Ҫִ�еĲ���>��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			/*
//			printf("\n�������������������ո����>��");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			*/
//			Calc(Add);
//			break;
//		case 2:
//			/*
//			printf("\n�������������������ո����>��");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			*/
//			Calc(Sub);
//			break;
//		case 3:
//			/*
//			printf("\n�������������������ո����>��");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			*/
//			Calc(Mul);
//			break;
//		case 4:
//			/*
//			printf("\n�������������������ո����>��");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			*/
//			Calc(Div);
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
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
//	int(*p)[5] = &arr; //ȡ������ĵ�ַ
//
//	int(*pfArr[4])(int, int); //pfArr��һ������ - ����ָ������
//	int(*(*ppfArr)[4])(int, int) = &pfArr; //ppfArr - ָ����ָ�������ָ��
//
//	return 0;
//}

//qsort - �����������������

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
//	struct Stu s[3] = { {"����",20},{"����",22},{"����",25} };
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
//void* ���͵�ָ�� ���Խ����������͵�ָ��
//void* ���͵�ָ�벻�ܽ��н����ò���
//void* ���͵�ָ�벻�ܽ��мӼ������Ĳ���

//��������������
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
////�Ը�������������
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
////�Խṹ������
//struct Stu
//{
//	char name[20];
//	int age;
//};
////����������
//int cmp_stu_by_age(const void*e1, const void*e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//void test3()
//{
//	struct Stu s[3] = { {"����",20},{"����",28},{"����",25} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	int i = 0;
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s	%d\n", s[i].name, s[i].age);
//	}
//	printf("\n");
//}
////����������
//int cmp_stu_by_name(const void*e1, const void*e2)
//{
//	//�Ƚ����֣����Ƚ��ַ���
//	//����֮�ӱȽϣ���strcmp����
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//void test4()
//{
//	struct Stu s[3] = { {"����",30},{"����",28},{"����",25} };
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
	//printf("%d\n", sizeof(a)); //sizeof(������) - ���������ܴ�С - ��λ���ֽ� - 16
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