#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
//库函数——c语言本身提供的函数
//std input output

//main前面返回一个整形值
//int main()//主函数-程序的入口，有且仅有一个
//{
//	printf("hehe\n");//print-function输出函数，
//	printf("wow\n");
//	//ctrl+f5开始运行
//	//ctrl+fn+f10开始debug
//	//切块行注释ctrl+shift+/
//  // ctrl+k+u取消注释，ctrl+k+c进行注释
// return 0;
//}


//int main() {
//	char ch = 'A';
//	int age = 20;
//	printf("%c\n", ch);//打印字符格式得到数据
//	printf("%d\n", age);//打印整形十进制得到数据,此时会输出20
//	printf("%d\n", ch);//打印整形十进制得到数据,此时会输出65,ASCII码中的65
//	//%f单精度  %lf双精度
//	//float weight = 45.5f;//双精度double到单精度float会报错，后加f即可
//
//	//全局变量是定义在代码块（{}）之外的变量，不一定是main函数且有可能嵌套
//	//局部变量是定义在代码块（{}）之内的变量
//	//全局变量与局部变量相同时，局部变量优先
// return 0;
//}


//int main() {
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);//%取地址符号，分别将输入的两个数存入地址num1和num2
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	//c语言语法规定，变量要定义在当前代码块的最前面！！！！否则报错
// return 0;
//}


//int main() {
//	//#define _CRT_SECURE_NO_WARNINGS  放在第一行，可规避c语言和vc编译器的冲突
//	//#define定义的标识符常量
//	//如#define MAX 10
//	//枚举函数--enum，可枚举物如性别、星期、三原色等
//	enum Sex
//	{
//		MALE,
//		FEMALE,
//		SECRET
//	};
//	//	以常量方式被输出，且被输出值为0,1,2
// return 0;
//}


//int main() {
//	char arr1[] = "abc";//数组
//	//"abc"——'a''b''c''\0'--'\0'是字符串的结束标志,在计算字符串长度时，'\0'不被算入长度内
//	char arr2[] = { 'a','b','c' };
//	//char arr2[] = { 'a','b','c','\0' };
//	//而arr2[]中没有\0，只能手动添加0或\0，否则后出现随机值
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//int main() {
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	//共13个字符，每个\t转义字符代表一个字符，\32也代表一个字符
//	//\32--32是两个八进制数字
//	//32作为8进制代表的那个十进制数字，作为ASCII码值，对应的字符
//	//如132代表Z
//	// \x61是一个字符，61是十六进制数字
//	
//	return 0;
//}

// 只要是整数，内存中存储的都是二进制的补码
//正数的原码、反码、补码相同
//负数的原码是直接按照正负写出的二进制序列
//负数的反码是原码的符号位不变，其他位按位取反得到的
//负数的补码是反码+1


//初识指针
//int main() {
//	int a = 0;//申请了4个字节的空间
//	printf("%p\n", &a);
//	int* p = &a;//p是一个变量--指针变量
//	*p = 20;//* - 解引用操作符/间接访问操作符
//	printf("a = %d\n", a);
//	return 0;
//}


//结构体
//struct Book
//{
//	char name[20];//C语言程序设计
//	short price;//55
//};
//int main() {
//	//利用结构体类型- 创建一个该类型的结构体变量
//	struct Book b1 = { "C语言程序设计",55 };
//	struct Book* pb = &b1;//利用pb打印出我的书名和价格
//	printf("书名：%s\n", b1.name);
//	printf("价格：%d\n", b1.price);
//	//.   结构体变量.成员
//	//->  结构体指针->成员
//	printf("书名：%s\n", (*pb).name);
//	printf("价格：%d\n", (*pb).price);
//	printf("书名：%s\n", pb->name);//比上面两个更加清晰明了
//	printf("价格：%d\n", pb->price);
//	return 0;
//}
