#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

#include <string.h>

////else只和最近的一个未匹配if匹配
////if条件中，判断相等时常量放左边更优
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	return 0;
//}

////小小练习
//int main()
//{
//	int a = 45;
//	if (1 == a % 2)
//		printf("%d是奇数\n", a);
//	for(int i = 0 ;i<=100 ;i++)
//	{ 
//		if(i % 2 == 1)
//			printf("%d是奇数\n", i);
//	}
//	return 0;
//}



////switch语句与break
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	//switch(整形表达式)
//	{
//	case 1:
//	//case 整形且常量的表达式：
//		printf("星期1\n");
//		break;
//	case 2:
//		printf("星期2\n");
//		break;
//	case 3:
//		printf("星期3\n");
//		break;
//	}
//
//	//break不是必须
//	//break是一层一层跳出
//	switch (day)
//	{
// //switch没有break就会一直滑下来
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;//最后一个case还是加上break为好
//	default://输入数均不是case后的预设值,最好放后面
//		printf("输入错误\n");
//		break; 
//	}
//	return 0;
//} 



//int main()
//{
//	int i = 1;
//	//continue会使此次循环结束，直接开始下一次循环
//	// break终止循环
//	//此循环因为i++在continue后面，会陷入死循环
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d", i);
//		i++;
//	}
//	return 0;
// }

////while在并不明确指导循环次数中使用较优
//int main()
//{
//	int ch = 0;
//	//ctrl + z 结束循环
//	//EOF--end of file文件结束标志
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//	//应用例：
//	//只输出从0-9的字符
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch >'9')
//			continue;
//		putchar(ch);
//	}
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//该代码执行一次，k=0赋值为0，为假，无法进入for循环
//	 	k++;
//	//for循环的初始化、调整、判断都可以省略
//	//但是判断条件如果被省略，则为恒正，一致循环
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//
//}


//goto语句演示
//goto语句主要用于break语句使用起来很麻烦的深层嵌套
//这个程序可以在DEBUG文件夹中找到exe程序，添加到主机“服务”中，在电脑每次开机时都会显示
//:D整蛊专用
//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60
//	//system()- 执行系统命令的
//	system("shutdown -s -t 120");
//again;
//	printf("请注意，你的电脑将在2分钟内关机，如果输入：我是猪，则取消关机\n请输入>:");
//	scanf("%s", &input);
//	if (strcmp(input, "我是猪") == 0)//比较两个字符串-strcmp（）
//		system("shutdown -a");
//	else
//	{
//		goto again;
//	}
//		
//	return 0;
//}
