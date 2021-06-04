#include <stdio.h>
#include <stdlib.h>

#define TRUE    1
#define FALSE   0

#define OPCJA_POLE_PROSTOKATA 1
#define OPCJA_POLE_TROJKATA   2
#define OPCJA_WYJSCIE   0

void pole_prostokata();
void pole_trojkata();

int main() {
    int wybrana_opcja, wyjscie_z_programu;

    wyjscie_z_programu = FALSE;
    while(TRUE) {
        printf("Opcje programu:\n");
        printf("===============\n");
        printf("%d %s\n", OPCJA_POLE_PROSTOKATA,  " - pole_prostokata");
        printf("%d %s\n", OPCJA_POLE_TROJKATA,    " - pole_trojkata");
        printf("%d %s\n", OPCJA_WYJSCIE,    " - koniec");
        printf("\nPodaj kod polecenia: ");
        scanf("%d", &wybrana_opcja);

        switch(wybrana_opcja) {
            case OPCJA_POLE_PROSTOKATA:   pole_prostokata();          break;
            case OPCJA_POLE_TROJKATA:    pole_trojkata();            break;
            case OPCJA_WYJSCIE:     wyjscie_z_programu = TRUE;  break;
            default:                printf("Niepoprawny kod polecenia.\n");

        }
        if (wyjscie_z_programu == TRUE)
            break;
    }

    return EXIT_SUCCESS;
}

void pole_prostokata() {
    float a;
    float b;
    float pole_prostokata;
    printf ("\nPodaj dlugosc boku a - ");
    scanf ("%f", &a);
    printf ("\nPodaj d³ugosc boku b - ");
    scanf ("%f", &b);

    pole_prostokata = (a * b);

    printf("\nPole prostokata wynosi: %.2f\n\n", pole_prostokata);


}

void pole_trojkata() {
    float a;
    float h;
    float pole_trojkata;
    printf ("\nPodaj dlugosc boku a - ");
    scanf ("%f", &a);
    printf ("\nPodaj wysokosc trojkata h - ");
    scanf ("%f", &h);

    pole_trojkata = (a * h)/2;

    printf("\nPole trojkata wynosi: %.2f\n\n", pole_trojkata);

}
