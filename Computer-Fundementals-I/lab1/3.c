#include <stdio.h>
typedef struct {
    int a[2];
    double d;
} struct_t;

double fun(int i) {
    volatile struct_t s;
    s.d = 3.14;
    if(i >= 0 && i < 2) {
        s.a[i] = 1073741824;
    }
    else {
        printf("Husnegtiin index hetersen baina\n");
    }
    return s.d;
}
int main() {
    printf("%f\n", fun(-1));
    return 0;
}