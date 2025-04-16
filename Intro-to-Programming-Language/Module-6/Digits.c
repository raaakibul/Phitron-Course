#include<stdio.h>
int main(){
    int test_case;
    scanf("%d",&test_case);

    for(int i=1;i<=test_case;i++){
        int input;
        scanf("%d",&input);

    do{
        printf("%d ", input % 10);
        input/=10;
    
    }while(input!=0);
    printf("\n");

}

    return 0;
}