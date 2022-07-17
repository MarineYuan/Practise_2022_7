#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

//int main()
//{
//	int a = 5 / 2;//商2余1
//	return 0;
//}
//
// 
// >> -- 右移操作符
//int main()
//{
//	// 1.算术右移：右边丢弃，左边补原符号位（正0负1），负数仍负
//	// 2.逻辑右移：右边丢弃，左边补0
//	//移动的是二进制为
//	//00000000000000000000000000010000    32bit，4byte
//	//00000000000000000000000000010000
//	int c = b >> 1;
//	printf("%d \n", c);//右移一位有/2的效果
//	//存储到内存中的是补码
//	return 0;
//}
//移位符不要移动负数位
// << -- 左移操作符
//int main()
//{
//	//左边遗弃，右边补0
//	int a = 5;
//	int b = a << 1;
//	//00000000000000000000000000000101
//	printf("%d \n", b);//左移一位有*2的效果
//	return 0;
//}


//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a & b;//& - 按（2进制）位与
//	int d = a | b;//| - 按（2进制）位或
//	int d = a ^ b;//| - 按（2进制）位异或
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//&一零则为零，全1则为1         001=1
//	printf("&：%d\n", c);
//	printf("|：%d\n", d);
//	printf("^：%d\n", d);//相同为0，相异为1
//	return 0;
//}

////不使用临时变量，交换两个变量
//int main()
//{
//	int a = 3;
//	int b = 5;
//	////加减法,可能会溢出
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	//异或的方法
//	a = a ^ b;//"密码"
//	b = a ^ b;
//	a = a ^ b;
//
//	return 0;
//}

//统计num的补码中有几个1
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", & num);
//	//统计num的补码中有几个1
// //法一、
//	//while (num)
//	//{
//	//	if (num % 2 == 1r)
//	//		count++;//找到1计数器+1
//	//	num = num / 2;//不管找没找到都要除掉一位
//	//}
//	//printf("%d\n", count);//此算法当num = -1时存在问题
//  //法二、
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++; 
//	}
//	printf("%d\n", count);
//}
//// 法三、
//int count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n &  (n - 1);
//		count++;
//	}
//	return count;
//}

////求二进制中不同位的个数
////分析：使用^ 相同为0，相异为1
//int get_diff_bit(int m,int n)
//{
//	int tmp = m ^ n;
//	int count = 0;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d",&m,&n);
//	int count = get_diff_bit(m, n);
//	printf("count = %d\n", count);
//	return 0;
//}



//int main()
//{
//	short s = 0;//short类型2个字节
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));
//	printf("%d\n", s);
//	//sizeof内部表达式不参加运算，实际上s并不改变
//	return 0;
//}

////~ - 按（2进制）未取反
//int main()
//{
//	int a = 0;
//	int b = 11;
//	b = b | (1 << 2);//二进制为1011，想要变成1111
//	//00000000000000000000000000001011 原
//  // 由00000000000000000000000000000001左移两位得到，下
//  //↓00000000000000000000000000000100与上面或一个
//	//00000000000000000000000000001111 欲
//	printf("%d\n", b);
//	b = b & (~(1 << 2));//再变回去
//	printf("%d\n", b);
//
//	printf("%d\n", ~a);
//	//在内存中存储为补码
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111 - 补码
//	//11111111111111111111111111111110 - 反码
//	//10000000000000000000000000000001 - 原码 = -1
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	//&& 逻辑与只要左边为假，立即停止运算
//	printf("a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
//	//1，2，3，4
//	i = a++ || ++b || d++;
//	//|| 逻辑与只要左边为真，立即停止运算
//	//当a = 1时
//	printf("a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
//	//2，2，3，4
//	return 0;
//}

////逗号表达式，就是用逗号隔开的多个表达式。
////从左向右执行，整个表达式的结果时最后一个表达式的结果
////都会执行，只会显示最后一个
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("%d\n", c);
//	return 0;
//}


////结构体
//struct Stu  //struct Stu是类型名称，如int a
//{
//	//成员变量
//	char name[20];
//	int  age;
//	char id[20];
//};
//int main()
//{
//	int a = 10;
//	//使用struct Stu这个类型创建了一个学生对象s1并初始化
//	struct Stu s1 = { "张三", 20, "202611007" };
//	printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	//结构体变量.成员名
//	struct Stu* ps = &s1;
//	printf("%s\n", (*ps).name);
//	printf("%s\n", ps->name);  //(*ps).name == ps->name
//	//结构体指针->成员名
//	return 0;
//}

////整形提升：char、short类型在计算时会隐式类型转换
////有有符号位的第一位填充，变成int4byte
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb600000;
//	char d = 1;
//	//1.
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb600000)
//		printf("c");
//	//2.
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4
//	printf("%u\n", sizeof(!c));//1
//	return 0;
//}
