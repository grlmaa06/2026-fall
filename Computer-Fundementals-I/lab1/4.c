#include<stdio.h>
int main(){
    printf("Husnegtin hemjeeg oruulna uu [n m]: ");
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n][m];
    for(int i = 0; i < n; i++){
        printf("%d-r muriin utguudig oruul: ", i + 1);
        for(int j = 0; j < m; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("Mur buriin utguudiin niilber:\n");
    for(int i = 0; i < n; i++){
        int sum = 0;
        printf("Mur %d: ", i + 1);
        for(int j = 0; j < m; j++){
            sum += a[i][j];
        }
        printf("%d\n", sum);
    }

    printf("Bagana buriin utguudiin niilber:\n");
    for(int j = 0; j < m; j++){
        int sum = 0;
        printf("Bagana %d: ", j + 1);
        for(int i = 0; i < n; i++){
            sum += a[i][j];
        }
        printf("%d\n", sum);
    }
}