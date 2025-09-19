#include<stdio.h>
int main(){

    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        for(int j=65; j<=65+i-1; j++){
            printf("%c ", j);
        }
        for(int k=65+i-2; k>=65; k--){
            printf("%c ", k);
        }
        printf("\n");
    }


    return 0;
}