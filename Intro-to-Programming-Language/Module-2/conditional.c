#include<stdio.h>
int main(){
    int a = 10;
    int b = 20;
    if(a == b){ // Equal to
        printf("Equal\n");
    }
    else if(a != b){ // Not equal to
        printf("Not Equal\n");
    }
    else if(a > b){  // Greater than
        printf("Greater\n");
    }
    else if(a < b){  // Less than
        printf("Less\n");
    }
    else if(a >= b){ // Greater than or equal to
        printf("Greater or Equal\n");
    }
    else if(a <= b){ // Less than or equal to
        printf("Less or Equal\n");
    }

}