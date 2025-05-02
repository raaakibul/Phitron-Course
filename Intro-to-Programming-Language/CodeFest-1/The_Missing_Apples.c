#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int initial, given, bought;
    scanf("%d %d %d", &initial, &given, &bought);
    int result = initial - given + bought;
    printf("%d\n",result);
    return 0;
}
