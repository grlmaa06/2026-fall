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

    int max_odd = 0;
    int max_even = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] % 2 == 1 && a[i][j] > max_odd){
                max_odd = a[i][j];
            }
            if(a[i][j] % 2 == 0 && a[i][j] > max_even){
                max_even = a[i][j];
            }
        }
    }
    printf("Max odd = %d, Max even = %d\n", max_odd, max_even);
    return 0;
}