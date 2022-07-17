#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

////要描述一个学生-一些数据
////struct 结构体关键字    Stu-结构体标签
////struct Stu-结构体类型
//struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//s1,s2,s3是三个全局的结构体变量
//
//typedef struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;  //typedef重新定义,Stu是类型
//int main()
//{
//	struct Stu s; //是局部变量
//	Stu s2 = {"张三",20,"111111","男"};
//	return 0;
//}

//结构体内类型多样，可以是字符、数组、整形……甚至可以是其他结构体
//struct S 
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = { "hehe",{100,'y',"hello world",22.21},arr };
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//	return 0;
//}

//结构体指针
typedef struct Stu
{
	//成员变量
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu; 
void Print1(Stu tmp)
{
	printf("name: %s\n", tmp.name);
	printf("age: %d\n", tmp.age);
	printf("tele: %s\n", tmp.tele);
	printf("sex: %s\n", tmp.sex);
}
void Print2(Stu* ps)
{
	printf("name: %s\n", ps->name);
	printf("age: %d\n", ps->age);
	printf("tele: %s\n", ps->tele);
	printf("sex: %s\n", ps->sex);
}
int main()
{
	Stu s2 = {"张三",20,"111111","男"};
	Print1(s2);
	Print2(&s2);//打印的话，Print2更好（传参更快、性能更高
	return 0;
}