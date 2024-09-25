
#include <stdio.h>

int main() {
    int n;

    
    printf("entrez un nombre decimal: ");
    scanf("%d", &n);


    printf("Valeur binaire : ");
    if (n == 0) {
        printf("0");
    } else {
        int b[50]; 
        int i = 0;

        
        while (n > 0) {
            b[i] = n % 2; 
            n = n / 2;      
            i++;
        }

        
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", b[j]);
        }
    }
    

    
    printf("veuiller taper votre nombre a neuveau svp: ");
    scanf("%d", &n);

    char h[50];
    int i = 0;

    
    while (n > 0) {
        int reste = n % 16; 
        if (reste < 10) {
            h[i] = reste + '0'; 
        } else {
            h[i] = reste - 10 + 'A'; 
        }
        n = n / 16; 
        i++;
    }


    printf("Valeur hexadecimale edt : ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", h[j]);
    }
   



    return 0;
}