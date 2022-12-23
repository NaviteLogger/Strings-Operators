

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
