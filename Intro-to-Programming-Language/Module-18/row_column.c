#include<stdio.h>

int main(){
    
    int row,col;
    scanf("%d %d",&row,&col);

    int array[row][col];
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            scanf("%d",&array[i][j]);
        }
    }
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            printf("array[%d] ",array[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int Row,Col;
    scanf("%d %d",&Row,&Col);

    for (int i=0;i<row;i++){
        printf("%d ",array[i][Row]);
    }   

    printf("\n\n");  

    for (int i=0;i<Col;i++){
        printf("array[%d] ",array[Col][i]);
    }

    return 0;
}