#include <stdio.h>
#include <string.h>
#define MAX 50

int main(void) {
    char first[MAX];
    char second[MAX];
    char name[MAX * 2];
    char yearStr[4];
    int year;
    int i;


    printf("Enter your first name:  ");
    scanf("%s", first);
    printf("Enter your second name:  ");
    scanf("%s", second);
    printf("Enter your birth year: ");
    scanf("%d", &year);


    for (i = 0; i < strlen(second); i++) {
        if (second[i] > 90 ){
            second[i] = second[i] - 32;
        }
    }

    strncpy(name, first, sizeof(name) - 1);
    strncat(name, " ", sizeof(name) - strlen(name) - 1);
    strncat(name, second, sizeof(name) - strlen(name) - 1);
    snprintf(yearStr, sizeof(yearStr), "%d", year);
    strncat(name, " ", sizeof(name) - strlen(name) - 1);
    strncat(name, yearStr, sizeof(name) - strlen(name) - 1);
    printf("Full name: %s\n", name);

    char first2[MAX];
    char second2[MAX];
    char yearStr2[4];

    sscanf(name, "%s %s %s", first2, second2, yearStr2);

    printf("First Name: %s\n", first2);
    printf("Second Name: %s\n", second2);
    printf("Birth Year: %s\n", yearStr2);
    return 0;
}
