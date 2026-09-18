#include<stdio.h>
int main(){
    int n, a[16], i=0;
    printf("Enter a base 10 number: ");
    scanf("%d", &n);
    while(n>0){
        a[i] = n%2;
        n /= 2;
        i++;
    }
    printf("Converted to base 2: ");
    while(i>0){
        i = i-1;
        printf("%d", a[i]);
    }
    printf("\n");
    return 0;
}