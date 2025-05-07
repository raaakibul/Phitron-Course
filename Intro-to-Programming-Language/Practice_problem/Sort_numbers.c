#include<stdio.h>

void sort_numbers(int* a,int* b,int* c)
{
    int array[]={*a,*b,*c};
    for (int i=0;i<2;i++){
        for (int j=i+1;j<3;j++){
            if (array[i]>array[j])
            {
                int tmp=array[i];
                array[i]=array[j];
                array[j]=tmp;
            }
        }
    }

    *a=array[0];
    *b=array[1];
    *c=array[2];
    printf("%d\n%d\n%d\n",*a,*b,*c); 
}

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int x=a,y=b,z=c;
    sort_numbers(&a,&b,&c);
    printf("\n%d\n%d\n%d\n",x,y,z);

    return 0;
}