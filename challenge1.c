#include <stdio.h>



int main(){
    

    int Tableaux[10] ;

    printf("Voila 10 elements du tableaux : \n");

    for (int i = 1 ; i <= 10 ; i++){
        printf("T[%d] = ",i);
        scanf("%d",&Tableaux[i]);
    }
    for (int i = 1 ; i <= 10 ; i++){
        printf("%d ,\n",Tableaux[i]);

    }
    
    return 0;
}
