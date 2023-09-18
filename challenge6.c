#include <stdio.h>
#include <string.h>


int main(){
    
    char text[] = "Quel sinistre mot !\n";
    int i;


    i = 0;

    while (text[i] != '\0'){
        i++;
        if (text[i] == 'm'){
            printf("m se trouve dans la position %d\n",i);
        }
        else if (text[i] == 's'){
            printf("s se trouve dans la position %d\n",i);
        }
    }

    i = 0;

    while (text[i] != '\0'){
        i++;
        if (text[i] == 's'){
            text[i] = 'm';
        }
        if (text[i] == 'm'){
            text[i] = 's';
        }

        
    }
    printf("%s",text);

    char L;
    printf("saisir une lettre quelconque : ");
    scanf("%c",&L);


    i = 0;

    while (text[i] != '\0'){
        i++;
        if (text[i] == L){
            printf("%c se trouve dans la position %d\n",L,i);
        }
        else if(text[i] == L){
            printf("%c ne se trouve pas dans Ce text\n",L);
        }
    }
    




    
    
    return 0;
}
