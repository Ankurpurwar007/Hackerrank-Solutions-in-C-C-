#include <stdio.h>
#include<cstdlib>

void update(int *a,int *b) {
    int c=*b,d=*a;
    *a=*a+ *b;
    *b=abs(c-d);
    // Complete this function    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}