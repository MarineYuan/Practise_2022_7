#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

#include <string.h>

////elseֻ�������һ��δƥ��ifƥ��
////if�����У��ж����ʱ��������߸���
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

////СС��ϰ
//int main()
//{
//	int a = 45;
//	if (1 == a % 2)
//		printf("%d������\n", a);
//	for(int i = 0 ;i<=100 ;i++)
//	{ 
//		if(i % 2 == 1)
//			printf("%d������\n", i);
//	}
//	return 0;
//}



////switch�����break
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	//switch(���α��ʽ)
//	{
//	case 1:
//	//case �����ҳ����ı��ʽ��
//		printf("����1\n");
//		break;
//	case 2:
//		printf("����2\n");
//		break;
//	case 3:
//		printf("����3\n");
//		break;
//	}
//
//	//break���Ǳ���
//	//break��һ��һ������
//	switch (day)
//	{
// //switchû��break�ͻ�һֱ������
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;//���һ��case���Ǽ���breakΪ��
//	default://������������case���Ԥ��ֵ,��÷ź���
//		printf("�������\n");
//		break; 
//	}
//	return 0;
//} 



//int main()
//{
//	int i = 1;
//	//continue��ʹ�˴�ѭ��������ֱ�ӿ�ʼ��һ��ѭ��
//	// break��ֹѭ��
//	//��ѭ����Ϊi++��continue���棬��������ѭ��
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d", i);
//		i++;
//	}
//	return 0;
// }

////while�ڲ�����ȷָ��ѭ��������ʹ�ý���
//int main()
//{
//	int ch = 0;
//	//ctrl + z ����ѭ��
//	//EOF--end of file�ļ�������־
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//	//Ӧ������
//	//ֻ�����0-9���ַ�
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
//	for (i = 0, k = 0; k = 0; i++, k++)//�ô���ִ��һ�Σ�k=0��ֵΪ0��Ϊ�٣��޷�����forѭ��
//	 	k++;
//	//forѭ���ĳ�ʼ�����������ж϶�����ʡ��
//	//�����ж����������ʡ�ԣ���Ϊ������һ��ѭ��
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//
//}


//goto�����ʾ
//goto�����Ҫ����break���ʹ���������鷳�����Ƕ��
//������������DEBUG�ļ������ҵ�exe������ӵ������������У��ڵ���ÿ�ο���ʱ������ʾ
//:D����ר��
//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60
//	//system()- ִ��ϵͳ�����
//	system("shutdown -s -t 120");
//again;
//	printf("��ע�⣬��ĵ��Խ���2�����ڹػ���������룺��������ȡ���ػ�\n������>:");
//	scanf("%s", &input);
//	if (strcmp(input, "������") == 0)//�Ƚ������ַ���-strcmp����
//		system("shutdown -a");
//	else
//	{
//		goto again;
//	}
//		
//	return 0;
//}
