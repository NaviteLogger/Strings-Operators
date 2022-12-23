#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char czyKontynuowacDzialanie = 'y'; //zmienna uzyta do kontynuacji programu

    do
    {
        //tablice zawierajace elementy do wypisania przez program
        char jednosci[10][20] = {"", " jeden", " dwa", " trzy", " cztery", " piec", " szesc", " siedem", " osiem"," dziewiec"};
        char teProblematyczneLiczby[10][20] = {"dziesiec", " jedenascie", " dwanascie", " trzynascie", " czternascie", " pietnascie"," szesnascie", " siedemnascie", " osiemnascie", " dziewietnascie"};
        char dziesiatki[10][20] = {"", " dziesiec", " dwadziescia", " trzydziesci", " czterdziesci", " piecdziesiat"," szescdziesiat", " siedemdziesiat", " osiemdziesiat", " dziewiecdziesiat"};
        char setki[10][20] = {"", " sto", " dwiescie", " trzysta", " czterysta", " piecset", " szescset", " siedemset"," osiemset", " dziewiecset"};

        char inputUzytkownikaDoSformatowania[3]; //surowe wejscie uzytkownika

        int inputUzytkownika; //wejscie uzytkownika do edycji
        do
        {
            printf("Podaj trzycyfrowa liczbe z zakresu 0-999 do wypisania przez program (program zczyta tylko trzy pierszwe elementy):");
            //scanf("%[0-9]", inputUzytkownikaDoSformatowania);
            fgets(inputUzytkownikaDoSformatowania, 4, stdin); //pobranie pierwszych trzech elementow z surowego wejscia uzytkownika
            inputUzytkownika = atoi(&inputUzytkownikaDoSformatowania); //konwersja surowego wejscia uzytkownika: string -> int
            fflush(stdin); //oproznienie buffera do pozniejszego uzycia
        } while(strspn(inputUzytkownikaDoSformatowania, "0123456789") == 0); //uzytkownik bedzie proszony o podanie poprawnego wejscia do skutku (przy czym program moze przyjac
                                                                                        //np. za dluga liczbe -> zostanie ona przycieta). Program przyjmuje do trzech liczby lub mniej w przypadku
                                                                                        //gdy np. po dwoch pojawi sie nieprawidlowej wejscie (litera, znak, itp)
        int tempLiczbaSetek = inputUzytkownika / 100; //wyliczanie cyfry setek
        int tempLiczbaDziesiatek = (inputUzytkownika - (tempLiczbaSetek * 100)) / 10; //wyliczanie cyfry dziesiatek
        int tempLiczbaJednosci = inputUzytkownika - tempLiczbaSetek * 100 - tempLiczbaDziesiatek * 10; //wyliczanie cyfry jednosci

        if (tempLiczbaJednosci == 0 && tempLiczbaDziesiatek == 0 && tempLiczbaSetek == 0) //dla zera uzytkownik dostanie opowiedz "0"
        {
            printf("Liczba zapisana slownie dla podanego przez Ciebie wejscia to: \n");
            printf(" zero");
        }
        else if (tempLiczbaDziesiatek != 1) //dla cyfry dziesiatek "1" program skorzysta ze specjalnej tablicy
        {
            printf("Liczba zapisana slownie dla podanego przez Ciebie wejscia to: \n");
            printf("%s %s %s", setki[tempLiczbaSetek], dziesiatki[tempLiczbaDziesiatek], jednosci[tempLiczbaJednosci]);
        }
        else //pozostale, prawidlowe wejscia
        {
            printf("Liczba zapisana slownie dla podanego przez Ciebie wejscia to: \n");
            printf("%s %s", setki[tempLiczbaSetek], teProblematyczneLiczby[tempLiczbaJednosci]);
        }

        fflush(stdin); //wyczyszczenie buffera do kolejnego uzycia
        printf("\nCzy chcesz kontynuowac program? [y/n]:");
        czyKontynuowacDzialanie = getchar(); //program przyjmie jedna litere od uzytkownika i zgodnie z warunkiem sprawdzi czy kontynuowac dzialanie aplikacji
        fflush(stdin);

    } while (czyKontynuowacDzialanie == 'y' || czyKontynuowacDzialanie == 'Y');

    return 0;
}