#include<stdio.h>
#include<string.h>

int main()
{
int a[100],i,j,temp,n;

printf("How many element u want to enter");
scanf("%d",&n);
printf("enter The %d elements:",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);


for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}

printf("sorted element is given below\n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);

}
