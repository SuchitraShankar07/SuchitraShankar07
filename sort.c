#include <stdio.h>

void sorter(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(*(a+j)>*(a+j+1))
            {
                // *(a+j)=(*(a+j))^(*(a+j+1));
                // *(a+j+1)=(*(a+j))^(*(a+j+1));
                // *(a+j)=(*(a+j))^(*(a+j+1));
                int t=*(a+j);
                *(a+j)=*(a+j+1);
                *(a+j+1)=t;
            }
        }
    }
}
int main(void)
{
	int a[10]={2,9,3,7,6,1,4,0,5,8};
    sorter(a,10);
    for(int i=0;i<10;i++)
    {
        printf("%d",*(a+i));
    }
    return 0;
}