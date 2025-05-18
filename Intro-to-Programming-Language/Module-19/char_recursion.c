#include<stdio.h>

void recursion(char ch[],int i){
    if (ch[i]=='\0') 
    return;
    printf("%c ",ch[i]);
    recursion(ch,i+1);
}

int main(){
    int test_case;
    scanf("%d",&test_case);
    for (int i=0;i<test_case;i++)
    {
    char ch[12];
    scanf("%s",ch);
    recursion(ch,0);
    printf("\n");
    }

    return 0;
}