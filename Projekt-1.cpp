#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // zmienne pomocnicze
    int wartosc = 0;
    int wyniki[24];
    int trafione = 0;

    srand(time(NULL)); //inicjumemy generator liczb losowych, bez tego liczby losowane byłyby zawsze takie same
    printf("dla jakiej wartosci obliczamy prawdopodobienstwo? (1-6): ");

    // w tej petli czekamy az uzytkownik poda prawidlowe dane (1-6)
    while (wartosc < 1 || wartosc > 6) {
        scanf("%d", &wartosc);
    }

    // losujemy 24 liczb z zakresu 1-6

    for (int i=0; i<24; i++) {
        wyniki[i] = (rand()%6) + 1;
        printf("%d ", wyniki[i]); // wyswietlamy wynik losowania

        // sprawdzamy czy to wartosc ktorej poszukujemy
        if (wyniki[i] == wartosc) {
            trafione++; // i jesli tak to zwiekszamy licznik trafien
        }
    }
    printf("\n");

    printf("trafione: %d/24 razy\n", trafione); // wyswietlamy informacje
    printf("WYNIK: %d%%\n", (trafione*100/24 ));  // obliczamy jaki procent z 24 losowan to wybrana przez nas wartosc
    return 0;