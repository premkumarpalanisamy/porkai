#include <stdio.h>

int main(void) {
int  a[50],n,i,j,temp=0;
printf("enter tha array");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{
	for(j=i;j<n;j++)
{

if(a[i]>a[j])
{
	temp=a[i];
	a[j]=a[i];
	a[j]=temp;
}
}
printf("%d",a[i]);

}

	return 0;
}
