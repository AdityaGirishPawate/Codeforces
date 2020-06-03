#include <stdio.h>
#include <string.h>


int main()
{
    int i,j,n;
    char str[10000];
    int a[300];
	for(j=0;j<300;j++)
		a[j]=0;
    scanf("%s",	str);
    n=strlen(str);
    int counter;
    for(i=0;i<n;i++)
    {
        a[(int)str[i]]++;
    }
    for(j=0;j<300;j++)
        counter+=a[j]*a[j];
    printf("%d",counter);
}
