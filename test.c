#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
//
//
////����һ��ѧ��
////����
////�Ա�
////����
////�绰
////struct Stu //struct -�ṹ��ؼ���    Stu -�ṹ���ǩ    struct Stu -�ṹ������
////{
////	char name[20];
////	char sex[5];
////	int age;
////	char tel[12];
////}s1,s2,s3; //s1,s2,s3 - ������ȫ�ֵĽṹ�����
//
////typedef struct Stu //typedef -��struct Stu������ΪStu
////{
////	char name[20];
////	char sex[5];
////	int age;
////	char tel[12];
////}Stu; //Stu -�ṹ������
////int main()
////{
////	struct Stu s1 = { "����","��",20,"123456789" }; //s1 - �Ǵ����ľֲ��Ľṹ�����
////	Stu s2 = { "����","Ů",18,"987654321" }; //��s1һ��
////	return 0;
////}
//
////typedef struct Stu //typedef -��struct Stu������ΪStu
////{
////	char name[20];
////	char sex[5];
////	int age;
////	char tel[12];
////}Stu; //Stu -�ṹ������
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
////	struct Stu s1 = { "����","��",20,"123456789" }; //s1 - �Ǵ����ľֲ��Ľṹ�����
////	Stu s2 = { "����","Ů",18,"987654321" }; //��s1һ��
////	//��ӡ�ṹ������
////	//���ִ�ӡ��ʽ��Print1 �� Print2
////	Print1(s1);
////	Print2(&s2); //Print2 ���ã���ʡ�ռ�
////	return 0;
////}
////////////////////////////////////////////////////////////  ����  /////////////////////////////////////////////////////////
////int main()
////{
////	for (int i = 0; i < 100; i++)
////	{
////		printf("%d ", i);
////	}
////	system("pause"); //ϵͳ���� - ������ͣ
////	return 0;
////}
//
//
////F9 - ���öϵ㣺�������е��ϵ㴦��ͣ
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
////	int sum = 0;//�������ս��
////	int n = 0;
////	int ret = 1;//����n�Ľ׳�
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
	//strcpy	//�����ַ���	char arr1[] = "1234567890";	char arr2[] = "bit";	my_strcpy(arr1, arr2);	printf("%s\n", arr1);	return 0;}