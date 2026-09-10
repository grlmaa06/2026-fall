#include <stdio.h>
int main() {
    int n, m[50], i=0;
    printf("Buhel too oruul:");
    scanf("%d", &n);

    while(n>0) {
        m[i] = n%2;
        n /= 2;
        i++;
    }
    printf("Hoyrtiin toollin systemiin bichiglel: ");
    while(i>0) {
        i--;
        printf("%d", m[i]);
    }
    printf("\n");
    
    return 0;
}