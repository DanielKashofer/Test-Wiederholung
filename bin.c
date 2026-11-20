#include <stdio.h>

int strlength(char* number){         //es wird eine funktion erstellt die die anzahl der zeichen des strings ermittelt        
    for (int i = 0; number[i] != '\0'; i++){
        return i;
    }
}


int main(int argc, char* argc[]){

    int anzahl;
    
    if (argc != 1){
        printf("\nEs ist nur ein Argument erlaubt\n");
        return -1;
    }

    if (     != '0' || '1'){                //wenn das bitmuster etwas enthält das keine 0 oder 1 ist, Usage Information, programm schließen mit return -1;
        printf("\nEingabefehler. Bitte verwende nur Binärcode !!\n");
        return -1;
    }
    
    anzahl = strlength(a);
    
    printf ("\nDeine Eingabe: %s -> Dezimal: %d\n", a, ); //Dezimal Zahl wird ausgegeben

    return 0;
}