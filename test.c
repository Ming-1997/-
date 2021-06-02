#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
//
//
////描述一个学生
////名字
////性别
////年龄
////电话
////struct Stu //struct -结构体关键字    Stu -结构体标签    struct Stu -结构体类型
////{
////	char name[20];
////	char sex[5];
////	int age;
////	char tel[12];
////}s1,s2,s3; //s1,s2,s3 - 是三个全局的结构体变量
//
////typedef struct Stu //typedef -将struct Stu重命名为Stu
////{
////	char name[20];
////	char sex[5];
////	int age;
////	char tel[12];
////}Stu; //Stu -结构体类型
////int main()
////{
////	struct Stu s1 = { "张三","男",20,"123456789" }; //s1 - 是创建的局部的结构体变量
////	Stu s2 = { "李四","女",18,"987654321" }; //和s1一样
////	return 0;
////}
//
////typedef struct Stu //typedef -将struct Stu重命名为Stu
////{
////	char name[20];
////	char sex[5];
////	int age;
////	char tel[12];
////}Stu; //Stu -结构体类型
////void Print1(Stu tmp)
////{
////	printf("name: %s\n", tmp.name);
////	printf("sex:  %s\n", tmp.sex);
////	printf("age:  %d\n", tmp.age);
////	printf("tel:  %s\n", tmp.tel);
////}
////void Print2(Stu* tmp)
////{
////	printf("name: %s\n", tmp->name);
////	printf("sex:  %s\n", tmp->sex);
////	printf("age:  %d\n", tmp->age);
////	printf("tel:  %s\n", tmp->tel);
////}
////int main()
////{
////	struct Stu s1 = { "张三","男",20,"123456789" }; //s1 - 是创建的局部的结构体变量
////	Stu s2 = { "李四","女",18,"987654321" }; //和s1一样
////	//打印结构体数据
////	//两种打印方式：Print1 和 Print2
////	Print1(s1);
////	Print2(&s2); //Print2 更好，节省空间
////	return 0;
////}
////////////////////////////////////////////////////////////  调试  /////////////////////////////////////////////////////////
////int main()
////{
////	for (int i = 0; i < 100; i++)
////	{
////		printf("%d ", i);
////	}
////	system("pause"); //系统命令 - 用于暂停
////	return 0;
////}
//
//
////F9 - 设置断点：代码运行到断点处暂停
////int main()
////{
////	int i = 0;
////	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
////	for (i = 0; i <= 12; i++)
////	{
////		printf("hehe\n");
////		arr[i] = 0;
////	}
////	return 0;
////}
////int main()
////{
////	{
////		int tmp = 0;
////		printf("tmp = %d\n", tmp);
////	}
////	int arr[10] = { 0 };
////	int i = 0;
////	for (i = 0; i < 10; i++)
////	{
////		arr[i] = i;
////	}
////	return 0;
////}
//
////void test3()
////{
////	printf("hehe\n");
////}
////void test2()
////{
////	test3();
////}
////void test1()
////{
////	test2();
////}
////int main()
////{
////	test1();
////	return 0;
////}
//
////int main()
////{
////	int i = 0;
////	int sum = 0;//保存最终结果
////	int n = 0;
////	int ret = 1;//保存n的阶乘
////	scanf("%d", &n);
////	for (i = 1; i <= n; i++)
////	{
////		int j = 0;
////		ret = 1;
////		for (j = 1; j <= i; j++)
////		{
////			ret *= j;
////		}
////		sum += ret;
////	}
////	printf("%d\n", sum);
////	return 0;
////}////void my_strcpy(char* dest, char* src){	while (*src!='\0')
	{
		*dest = *src;		src++;		dest++;
	}	*dest = *src;}int main(){
	//strcpy	//拷贝字符串	char arr1[] = "1234567890";	char arr2[] = "bit";	my_strcpy(arr1, arr2);	printf("%s\n", arr1);	return 0;}