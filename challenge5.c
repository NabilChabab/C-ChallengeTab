#include <stdio.h>
#include <string.h>


int main(){
    
    char T[100];

    printf("Saisir le nom : ");
    scanf("%s",&T);
    

    int compt = strlen(T);

    printf("%d",compt);
    
    return 0;
}
