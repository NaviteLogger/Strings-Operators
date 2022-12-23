#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// int main()
// {
//     int limit = 20;

//     char dane[3][20];
//     char str[][20] = {"Stopien: ", "Imie: ", "Nazwisko: "};

//     for (int i = 0; i < 3; i++)
//     {
//         printf("%s", str[i]);
//         fgets(dane[i], limit, stdin);
//         dane[i][strlen(dane[i]) - 1] = '\0';
//     }

//     printf("%s%s, %s%s, %s%s\n", str[0], dane[0], str[1], dane[1], str[2], dane[2]);

//     return 0;
// }

// int main()
// {
//     printf("Podaj wymiar tablicy mnozenia: ");
//     int wymiarTablicy;
//     int tablicaMnozenia[wymiarTablicy][wymiarTablicy];
//     scanf("%i", &wymiarTablicy);

//     ]for (int i = 0; i < wymiarTablicy; i++)
//     {
//         for (int j = 0; j < wymiarTablicy; j++)
//         {
//             tablicaMnozenia[i][j] = (i + 1) * (j + 1);
//         }
//     }

//     for (int i = 0; i < wymiarTablicy; i++)
//     {
//         for (int j = 0; j < wymiarTablicy; j++)
//         {
//             if (tablicaMnozenia[i][j] < 10)
//             {
//                 printf("%i ", tablicaMnozenia[i][j]);
//             }
//             else
//             {
//                 printf("%i", tablicaMnozenia[i][j]);
//             }
//             printf(" ");
//         }
//         printf("\n");
//     }

//     return 0;
// }

int main()
{
    char czyKontynuowacDzialanie = 'y';

    do
    {
        char jednosci[10][20] = {"", " jeden", " dwa", " trzy", " cztery", " piec", " szesc", " siedem", " osiem",
                                 " dziewiec"};
        char nascie[10][20] = {"dziesiec", " jedenascie", " dwanascie", " trzynascie", " czternascie", " pietnascie",
                               " szesnascie", " siedemnascie", " osiemnascie", " dziewietnascie"};
        char dziesiatki[10][20] = {"", " dziesiec", " dwadziescia", " trzydziesci", " czterdziesci", " piecdziesiat",
                                   " szescdziesiat", " siedemdziesiat", " osiemdziesiat", " dziewiecdziesiat"};
        char setki[10][20] = {"", " sto", " dwiescie", " trzysta", " czterysta", " piecset", " szescset", " siedemset",
                              " osiemset", " dziewiecset"};

        char inputUzytkownikaDoSformatowania[3];
        //

        int inputUzytkownika;
        do
        {
            printf("Podaj liczbe z zakresu 0-999 do wypisania przez program:");
            //scanf("%[0-9]", inputUzytkownikaDoSformatowania);
            fgets(inputUzytkownikaDoSformatowania, 4, stdin);
            inputUzytkownika = atoi(&inputUzytkownikaDoSformatowania);
            fflush(stdin);
        } while(strspn(inputUzytkownikaDoSformatowania, "0123456789") == 0);

        int tempLiczbaSetek = inputUzytkownika / 100;
        int tempLiczbaDziesiatek = (inputUzytkownika - (tempLiczbaSetek * 100)) / 10;
        int tempLiczbaJednosci = inputUzytkownika - tempLiczbaSetek * 100 - tempLiczbaDziesiatek * 10;

        if (tempLiczbaJednosci == 0)
        {
            printf("Liczba zapisana slownie dla podanego przez Ciebie wejscia to: \n");
            printf("zero");
        }
        else if (tempLiczbaDziesiatek != 1)
        {
            printf("Liczba zapisana slownie dla podanego przez Ciebie wejscia to: \n");
            printf("%s %s %s", setki[tempLiczbaSetek], dziesiatki[tempLiczbaDziesiatek], jednosci[tempLiczbaJednosci]);
        }
        else
        {
            printf("Liczba zapisana slownie dla podanego przez Ciebie wejscia to: \n");
            printf("%s %s", setki[tempLiczbaSetek], nascie[tempLiczbaJednosci]);
        }

        fflush(stdin);
        printf("\nCzy chcesz kontynuowac program?:");
        czyKontynuowacDzialanie = getchar();
        fflush(stdin);

    } while (czyKontynuowacDzialanie == 'y' || czyKontynuowacDzialanie == 'Y');

    return 0;
}


