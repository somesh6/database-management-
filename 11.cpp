include <stdio.h>

int main() {
    int a=10,b= 20,*p,*q;
    p=&a;
    q=&b;
    printf("addition is %d\n",*p+*q);
    printf("sub is %d\n",*p-*q);
    printf("multi is %d\n",p*q);
    printf("mod is %d\n",*p%*q);




    return 0;
}
