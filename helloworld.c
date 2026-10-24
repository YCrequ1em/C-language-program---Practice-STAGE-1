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
//#include<stdio.h>
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (a % 10 == 0)
//	{
//		printf("%d", a);     //输入一个整数a，如果a为10的倍数，则输出a；如果a不是10的倍数，什么也不输出。
//	}
//	else
//	{
//		printf("");
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int num,min=10;
//	for (int i = 0;i < 5;i++)
//	{
//		scanf("%d", &num);           //从键盘输入5个整数，输出其中的最小数。
//		if (num < min)
//		{
//			min = num;
//		}
//	}
//	printf("%d", min);
//}
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d %d",&a,&b);
//	if (a >= 15 && a <= 20&&b>=50&&b<=70)
//	{
//		printf("T");                        //正常人睡眠时的呼吸频率是每分钟15-20次，脉搏是每分钟50-70次。
//	}                                  //下面给定一个人的呼吸频率与脉搏，请你判断他是真睡还是装睡（即至少一项指标不在正常睡眠范围内）
//	else
//	{
//		printf("F");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	if (a >= b)
//	{
//		printf("%d>=%d", a, b);        // 从键盘输入两个整数，按从大到小的顺序输出它们的值。
//	}
//	else
//	{
//		printf("%d>=%d", b, a);
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int num,ge,shi,bai;
//	scanf("%d", &num);
//	bai = num / 100;            //一个三位整数，如果满足条件：个位数的立方+十位数立方+百位数立方==这个数，那么称之为“水仙花数”
//	                            //编程判断一个三位整数是不是水仙花数。
//	shi = num % 100 / 10;
//	ge = num % 100 % 10;
//	if (ge * ge * ge + shi * shi * shi + bai * bai * bai == num)
//	{
//		printf("YES");
//	}
//	else
//	{
//		printf("NO");
//	}
//}
//#include<stdio.h>
//int main()
//{
//	double x,y;
//	scanf("%lf", &x);
//	if (x < 0)
//	{
//		y = x * x;
//	}                     //根据如下分段函数定义求y的值。
//	else if(x>=0&&x<10)
//	{
//		y = 2*x - 1;
//	}
//	else if (x >= 10)
//	{
//		y = 3 * x - 11;
//	}
//	printf("%.2lf", y);
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if (n % 3 == 0 && n % 5 == 0)
//	{
//		printf("Yes");              //判断一个数n能否同时被3和5整除。
//	}
//	else
//	{
//		printf("No");
//	}
//}
//#include<stdio.h>
//int main()
//{
//	char letter;
//	scanf("%c", &letter);
//	if (letter > 64 && letter < 91)
//	{
//		printf("%d", letter);
//	}
//	else if(letter>96&&letter<123)
//	{
//		letter -= 32;                       //键盘输入一个英文字母，如果是大写字母，输出ASCII码，如果是小写字母输出对应的大写字母。（其它情况没有输出）
//		printf("%c", letter);
//	}
//	else
//	{
//		;
//	}
//}
//#include<stdio.h>
//int main()
//{
//	double x,g;
//	scanf("%lf", &x);
//	if (x == 0)
//	{
//		printf("g(%.0lf) = 0",x);     //计算二分段函数
//	}
//	else
//	{
//		g = 1 / (2 * x);
//		printf("g(%.3lf) = %.3lf",x,g);
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int day;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case(1):
//		printf("Monday");
//		break;
//	case(2):
//		printf("Tuesday");
//		break;                   //从键盘上输入数字星期，然后输出它的英文。
//	case(3):
//		printf("Wednesday");
//		break;
//	case(4):
//		printf("Thursday");
//	case(5):
//		printf("Friday");
//	case(6):
//		printf("Saturday");
//	case(7):
//		printf("Sunday");
//	default:
//		printf("error");
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	if (a > b)
//	{
//		printf("max=%d", a);    //输入两个整数，请编程求其中的较大者。
//	}
//	else if (a < b)
//	{
//		printf("max=%d", b);
//	}
//	else
//	{
//		printf("max=%d",a);
//	}
//}
