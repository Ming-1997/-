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
//	char* p2 = (char*)&a; //(char*) - ǿ������ת��
//	printf("%x %x\n", *p1, *p2); //��ӡ��11223344 44
//	return 0;
//}
/////////////////////////////////////////////////////////////////  �жϵ�ǰ�������ֽ���  /////////////////////////////////////////////
//int check_sys()
//{
//	int i = 1;
//	//����1������С��
//	//����0��������
//	return (*(char*)&i); //(char*) - ǿ������ת������i�ĵ�ַת����char��
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}

//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a = %d\nb = %d\nc = %d\n", a, b, c); //��ӡ��-1 -1 255
//	return 0;
//}

//int main()
//{
//	char a = -128;
//	//1000 0000 0000 0000 0000 0000 1000 0000 - Դ��
//	//1111 1111 1111 1111 1111 1111 0111 1111 - ����
//	//1111 1111 1111 1111 1111 1111 1000 0000 - ����
//	//1000 0000 - char a
//	printf("%u\n", a); // %u - ��ӡ�޷���ʮ��������
//	//1111 1111 1111 1111 1111 1111 1000 0000
//	return 0;
//}

//int main()
//{
//	int i = -20;
//	//1000 0000 0000 0000 0000 0000 0001 0100 - Դ��
//	//1111 1111 1111 1111 1111 1111 1110 1011 - ����
//	//1111 1111 1111 1111 1111 1111 1110 1100 - ����
//	unsigned j = 10;
//	//0000 0000 0000 0000 0000 0000 0000 1010 - Դ��
//	printf("%d\n", i + j);
//	//1111 1111 1111 1111 1111 1111 1111 0110 - ����
//	//1111 1111 1111 1111 1111 1111 1111 0101 - ����
//	//1000 0000 0000 0000 0000 0000 0000 1010 - Դ��
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
//	//�������ѭ��
//	//��iΪ0ʱ��i--��i����4294967295(2��32�η�-1)
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
//	printf("%d\n", strlen(a));//��ӡ��255
//	return 0;
//}

//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hehe\n");
//	}
//	//��ѭ��
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
//	test(arr); //��ӡ��1
//	return 0;
//}

//int main()
//{
//	const char* p = "abcdef"; //"abcdef" ��һ�������ַ���,���ܱ��޸�
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
//	int* parr[] = { arr1,arr2,arr3 }; //ָ������
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
//	////arr - ��Ԫ�ص�ַ 
//	////&arr[0] - ��Ԫ�ص�ַ
//	////&arr - �����ַ
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr; //&arr - ����ĵ�ַ
//	//�����p��������ָ��
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
//	print1(arr, 3, 5); //arr - ������ - ��Ԫ�ص�ַ
//	print2(arr, 3, 5);
//	return 0;
//}

int main()
{
	int arr[5];         //arr - ��һ�����飬�����ÿ��Ԫ����int��
	int* parr1[10];     //parr1 - ��һ�����飬�����ÿ��Ԫ����int* ��ָ�����飩
	int(*parr2)[10];    //parr2 - ��һ��ָ�룬ָ��ָ��һ�����飬�����ÿ��Ԫ����int�� ������ָ�룩
	int(*parr3[10])[5]; //parr3 - ��һ�����飬������10��Ԫ�أ�ÿ��Ԫ����һ������ָ�룬ÿ��ָ��ָ���������5��Ԫ�أ�ÿ��Ԫ����int��
	return 0;
}