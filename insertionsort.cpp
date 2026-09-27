# include <stdio.h>
# include<conio.h>
int main()
{
	int a[20],i,n,j,key;
	printf("Enter the value of n");
	scanf("%d",&n);
	printf("\n Enter the elements");
	for(i =1;i<=n;i++)
	scanf("%d",&a[i]);
	for(j =2;j<=n;j++)
	{
		key = a[j];
		i = j-1;
		while(i>0 && a[i]>key)
		{
			a[i+1] =a[i];
			i =i-1;
		}
		a[i+1] = key;
	}
	printf("\n Array after Sorting ");
	for(i=1;i<=n;i++)
	printf("%d",a[i]);
	getch();
}

