#include<stdio.h>

struct EngiinButaxai {
    int d, n;   // d - xurtver
                // n - xuviar
};
typedef struct EngiinButaxai EngiinButaxai;

/*
    Nemex uildel
*/
EngiinButaxai add(EngiinButaxai a, EngiinButaxai b){
    EngiinButaxai x;
    x.d = a.d*b.n + b.d*a.n;
    x.n = a.n*b.n;
    return x;
}
/*
    Xasax uildel
*/
EngiinButaxai sub(EngiinButaxai a, EngiinButaxai b){
    EngiinButaxai x;
    x.d = a.d*b.n - b.d*a.n;
    x.n = a.n*b.n;
    return x;
}
/*
    Urjix uildel
*/
EngiinButaxai mult(EngiinButaxai a, EngiinButaxai b){
    EngiinButaxai x;
    x.d = a.d * b.d;
    x.n = a.n * b.n;
    return x;
}
/*
    Xuvaax uildel
*/
EngiinButaxai div(EngiinButaxai a, EngiinButaxai b){
    EngiinButaxai x;
    x.d = a.d * b.n;
    x.n = a.n * b.d;
    return x;
}
/*
    Hewlex uildel
*/
void print(EngiinButaxai a){
    printf("%d/%d", a.d, a.n);
}

int main()
{
    // functsuudaa shalga
    EngiinButaxai a, b;

    printf("Ehnii engiin butarhaig oruulna uu(a/b): ");
    scanf("%d/%d", &a.d, &a.n);

    printf("Hoyr dahi engiin butarhaig oruulna uu(a/b): ");
    scanf("%d/%d", &b.d, &b.n);

    printf("\nNemeh: ");
    print(add(a, b));

    printf("\nHasah: ");
    print(sub(a, b));

    printf("\nUrjih: ");
    print(mult(a, b));

    printf("\nHuvaah: ");
    print(div(a, b));
    printf("\n");

    return 0;
}