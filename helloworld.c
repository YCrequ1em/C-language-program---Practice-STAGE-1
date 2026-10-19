/*#include<stdio.h>
int main()
{
	printf("Hello,World");         你好，世界
	return 0;
}*/

//#include<stdio.h>
//int main()
//{
//	short a = 1234;
//	printf("%d\n", a);
//	long b = 19827344L;               打印整型的字节大小
//	printf("%ld\n", b);
//	printf("%zu\n", sizeof(a));
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	unsigned short e = -1;
//	printf("%u\n", e);
//	return 0;
//#include<stdio.h>
//int main() 
//{
//	float f = 3.178F;
//	printf("%.2f\n", f);                 浮点型练习
//	double num = 1.412;
//	printf("%.10lf", num);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char a = 'K';
//	printf("%c\n", a);
//	printf("%zu\n", sizeof(a));          字符串练习
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <windows.h>
//
//int main()
//{
//    // 这几行是让控制台支持 UTF-8 的魔法
//    SetConsoleOutputCP(65001);
//    SetConsoleCP(65001);
//
//    int a;
//    printf("请输入一个整数喵");
//    scanf("%d", &a);
//    printf("这个数是\n", a);
//
//    system("pause");  // 让窗口停留，方便看结果
//    return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a;
//	int b;
//	printf("输入文字吧喵");
//	scanf("%d %d", &a,&b);
//	printf("等于%d\n", a + b);
//	return 0;
//}
//

//#include<stdio.h>
//int main()
//{
//	int a = 2;
//	int b = 4;
//	printf("%d\n", a==b);
//	printf("%d\n", a != b);
//	printf("%d\n", a >= b);
//	printf("%d\n", a <= b);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a;
//	printf("请输入一个两位数:");
//	scanf_s("%d", &a);
//	printf("%d\n",a);
//	int ge = a % 10;
//	int shi = a / 10;
//	printf("%d\n", ge != 7 && shi != 7&& a%7!=0);
//	return 0;
//
//}

//#include<stdio.h>
//int main()
//{
//	int a = 30;
//	int b = 20;
//	int c = a > b ? a : b;
//	printf("%d\n", c);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int week = 1;
//	switch (week)
//	{
//	case 1:
//		printf("雷姆");
//		break;
//	case 2:
//		printf("管理");
//		break;
//	default:
//		printf("No");
//		break;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	for (int i = 1;i <= 5;i++)
//	printf("我玩原神");
//	return 0;
//
//}
//int sum(int a,int b)
//{
//	int sum = a + b;
//	return sum;
//}

//#include<stdio.h>
//int main()
//{
//	int C = sum(2,4);
//	if (C > 5)
//		printf("你好厉害喵");
//	else if (C <= 5)
//		printf("可以的兄弟");
//	else
//		printf("啊？");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d", &a);
//	scanf("%d", &b);
//	printf("%d", a+b);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a;
//	int b;
//	double c;
//	double d;
//	scanf("%c %d %.1lf %.2lf", a, b, c, d);
//	printf("%c %d %.1lf %.2lf");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n, score, max = 0;
//	scanf("%d", n);
//	for (int i = 0, i <= n, i++)
//	{
//		scanf("%d", score);              输出最大值
//		if (score > max) {
//			score = max
//				printf("%d", max);
//			return 0;
//		}
//}

//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	int sum = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < 60) sum++;
//	if (b < 60) sum++;
//	if (c < 60) sum++;
//	{
//		if (sum == 1)
//		{                                   判断学生成绩是否及格
//			printf("1");
//		}
//		else
//		{
//			printf("0");
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n,a[10];          定义数组
//	scanf("%d", &n);         输入几位数
//	for (int i = 0;i < n;i++)       
//	{
//		scanf("%d", &a[i]);          依次录入数组a
//	}
//	for (int i = n - 1;i >= 0;i--)
//	{
//		printf("%d", a[i]);           逆向输出
//		if (i < n )
//		{
//			printf(" ");             输出时隔空
//		}
//	}
//	return 0;
//}


/*#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int decide=0;
	if (n == 1)
	{
		printf("no");
	}
	else
	{
		for (int i = 2;i < n;i++)
		{                                        判断素数
			if (n % i == 0)
			{
				decide = 1;
				break;
			}
		}
	}
	if (decide == 1)
	{
		printf("no");
	}
	else
	{
		printf("yes");
	}
	return 0;
}
*/


//int add(int x, int y)
//{
//	int z;
//	z = x * y;
//	return(z);
//}
//#include<stdio.h>
//int main()
//{
//	int a, b, sum;                            定义函数做加法
//	scanf("%d %d", &a, &b);
//	sum = add(a, b);
//	printf("%d", sum);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	double p;
//	scanf("%lf", &p);
//	if (p <= 150)
//	{
//		printf("%.1lf",  p * 0.4463);
//	}
//	else if (p > 150 && p < 401)                                     //   电费计算
//	{
//		printf("%.1lf", 150 * 0.4463 + (p - 150) * 0.4663);
//	}
//	else if (p >= 401)
//	{
//		printf("%.1lf", 150 * 0.4463 + 250 * 0.4663 + (p - 400) * 0.5663);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int sum = 1,num;
//	scanf("%d", &num);
//	for (int i = 1;i <=num;i++)
//	{                                         //       阶乘
//		sum *= i;
//	}
//	printf("%d", sum);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	double x,y;
//	scanf("%lf", &x);
//	if (x <= 15)
//	{
//		y = 4 * x / 3;
//	}
//	else
//	{
//		y = 2.5 * x - 17.5;
//	}
//	printf("%.2lf", y);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	double money, extra;
//	scanf("%lf", &money);
//	scanf("%lf", &extra);
//	double more = money * extra / 100;
//	more =(int)(more * 100+0.5) / 100.0;
//	double sum = money + more;
//	printf("本金: %10.2lf元\n", money);
//	printf("利息: %10.2lf元\n", more);
//	printf("合计: %10.2lf元\n", sum);
//	return 0;
//}
#include<stdio.h>
int main()
{
	int a, b, c;
	a = 10, b = 20;
	c = (a % 2 == 0) ? a : b;
	printf("%d", c);
	return 0;
}
