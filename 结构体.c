#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

////Ҫ����һ��ѧ��-һЩ����
////struct �ṹ��ؼ���    Stu-�ṹ���ǩ
////struct Stu-�ṹ������
//struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//s1,s2,s3������ȫ�ֵĽṹ�����
//
//typedef struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;  //typedef���¶���,Stu������
//int main()
//{
//	struct Stu s; //�Ǿֲ�����
//	Stu s2 = {"����",20,"111111","��"};
//	return 0;
//}

//�ṹ�������Ͷ������������ַ������顢���Ρ������������������ṹ��
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

//�ṹ��ָ��
typedef struct Stu
{
	//��Ա����
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
	Stu s2 = {"����",20,"111111","��"};
	Print1(s2);
	Print2(&s2);//��ӡ�Ļ���Print2���ã����θ��졢���ܸ���
	return 0;
}