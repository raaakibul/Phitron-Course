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
    
    int flag=0;

    if (row != col){
        flag=1;
    }

    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            if (i+j==row-1){
                continue;
            }
            if (i==j){
                continue;
            }
            if (array[i][j]!=0){
                flag=1;
            }
        }
    }

    if (flag==0){
        printf("Daigonal");
    }
    else{
        printf("Not Daigonal");
    }

    return 0;
}
