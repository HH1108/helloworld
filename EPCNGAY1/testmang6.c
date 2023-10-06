#include<stdio.h>
int main()
{
	int i;
	int n;
	int count=0;
	printf("Nhap so luong sinh vien:");
	scanf("%d", &n);
	float mark[n];
	
	for(i=0;i<n;i++)
	{
		printf("Diem sinh vien %d\t", i+1);
		scanf("%f", &mark[i]);
		if (mark[i]<5)
		count++;
	}
	printf("So sinh vien truot %d", count);
	
}
