#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int test_cases;
    scanf("%d",&test_cases);
    
    for (int i=0;i<test_cases;i++){
        int m1,m2,d, fewer_days, total_days;
        scanf("%d %d %d",&m1,&m2,&d);
        
        fewer_days = (m1*d) / (m1+m2);
        total_days = d - fewer_days;
        printf("%d\n",total_days);

    }
    
    return 0;
}
