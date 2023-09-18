#include <stdio.h>



int main(){


    int T[100];
    int n;

    int i , min , max;


    printf("Saisir le nombre des elements du tableaux : ");
    scanf("%d",&n);

    for (i = 1 ; i <= n ; i++){
        printf("T[%d] = ",i);
        scanf("%d",&T[i]);
    }


    min = T[1];
    for (i = 1 ; i <= n; i++){
        if (min > T[i]){
            min = T[i];
        }
    }

    max = T[1];
    for (i = 1 ; i <= n; i++){
        if (max < T[i]){
            max = T[i];
        }
    }

    printf("Le Min de ce Tableaux est : %d\n",min);
    printf("Le Max de ce Tableaux est : %d",max);
    
    
    


    return 0;
}
