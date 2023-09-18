#include <stdio.h>


int main(){



    int T[100];
    int n;
    const int moyenneC = 10;

    int i , s = 0 , max , min , moyenne;


    printf("Saisir le nombre des notes : ");
    scanf("%d",&n);

    for (i = 1 ; i <= n ; i++){
        printf("Note %d = ",i);
        scanf("%d",&T[i]);
    }

    for (i = 1 ; i <= n ; i++){
        s = s + T[i];
    }

    moyenne = s/n;
    printf("La moyenne des notes du tableaux est : %d\n" , moyenne);
    if (moyenne < moyenneC){
        printf("La note est inferieur a la moyenne !!\n");
    }
    else if (moyenne == moyenneC){
        printf("La note est egal  la moyenne !!\n");
    }
    else if (moyenne > moyenneC){
        printf("La note est superieur a la moyenne !!\n");
    }
    else{
        printf("erreur");
    }

    i = 0;
    for (int j = 1 ; j <= n ; j++){
        if (T[j] > moyenne){
            i++;
        }
        
    }
    printf("il y a %d notes superieures a la moyenne\n",i);

    min = T[1];
    for (i = 1 ; i <= n; i++){
        if (min > T[i]){
            min = T[i];
        }
    }

    printf("Le Min des Notes est : %d\n",min);

    i = 0;

    while (T[i] != n){
        i++;
        if (T[i] == min){
        printf("Le Min se trouve dans la position : %d\n",i);
        break;
    }
    }

    max = T[1];
    for (i = 1 ; i <= n; i++){
        if (max < T[i]){
            max = T[i];
        }
    }

    printf("Le Max des Notes est : %d\n",max);

    i = 0;

    while (T[i] != n){
        i++;
        if (T[i] == max){
        printf("Le Max se trouve dans la position : %d\n",i);
        break;
    }
    }
  
    return 0;
}
