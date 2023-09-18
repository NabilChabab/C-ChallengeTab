#include <stdio.h>



int main(){


    
    int T[100];
    int n;

    int i , comp;


    printf("Saisir le nombre des elements du tableaux : ");
    scanf("%d",&n);

    for (i = 0 ; i < n ; i++){
        printf("T[%d] = ",i);
        scanf("%d",&T[i]);
    }

    for (i = 0; i < n ; i++){
        for (int j = i+1 ; j < n ; j++){
            if (T[i] < T[j]){
                comp = T[i];
                T[i] = T[j];
                T[j] = comp;
                
            }
            
        }
        
    }
    printf("Les elements du tableaux par le plus grand au plus petit est : \n");

    for (i = 0 ; i < n ; i++){
        printf("%d ",T[i]);
    }
    
    

    return 0;
}
