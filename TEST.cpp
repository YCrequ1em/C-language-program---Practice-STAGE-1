/*#include<stdio.h>           判断最大值 
int main()
{
	int n, score, max = 0;     //命名三个变量 
	scanf("%d",&n);            //记录输入的整数数量 
	for (int i = 0; i < n; i++)    //循环一次记录一次数字，这里记录n次 
	{
		scanf("%d", &score);     //把每个数字保存在score中 
		if (score > max) {         //实时更新最大数 
			max=score;}         
			}
			printf("%d\n", max);   //输出最大数 
			return 0;
			*/
/*#include<stdio.h>        //平均数 
int main()
{
     int n,age,sum=0;             //命名三个变量 
	scanf("%d",&n);            //记录输入的整数数量
	for(int i = 0;i<n;i++)      //循环一次记录一次数字，这里记录n次 /*
	{
		scanf("%d",&age);
		sum+=age;
	}
	double avg=sum;
	avg=1.0*sum/n;
	printf("%.2lf",avg);
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("odd\n");}
		else
			{
			printf("even\n");
	}
	return 0;	
	}
	*/
	/*#include<stdio.h>
	int main()
	{
		int a;
		int b;
		int c;
		scanf("%d",&a);
		scanf("%d",&b);
		scanf("%d",&c);
		int arr[3]={a,b,c};
		printf("%d",arr[1]);
		return 0;*/
	/*#include<stdio.h>
	int main()
	{
		int a,b,sum=0;
		scanf("%d",&a);
		scanf("%d",&b);
		for(int i=a;i<=b;i++)
		{
			if(i%2!=0)
			sum+=i;
		}
		printf("%d",sum);
		return 0;
	}
	*/
	/*#include<stdio.h>
	#include<math.h>
	int main()
	{
		double a,b;
		int n;
		long long x;
		scanf("%lf %lf %d",&a,&b,&n);
		x=(long long)pow(10,n);
		printf("%.0lf",a/b*x);
		return 0;
	}*/
	/*#include<stdio.h>
	int main()
	{
		long long a,b;
		scanf("%lld %lld",&a,&b);
		if(a-b>=0)
		{
			printf("%lld",a-b);
		}
		else 
		{
			printf("%lld",a-b);
		}
		return 0;
	}*/
	#include <stdio.h>

int main()
{
    long long L, R;
    scanf("%lld %lld", &L, &R);
    
    long long total = R - L + 1;
    long long bad = 0;
    for (long long x = L; x <= R; x++) {
        if (x % 4 == 2) bad++;
    }
    
    printf("%lld\n", total - bad);
    return 0;
}
		
	 

	
		
