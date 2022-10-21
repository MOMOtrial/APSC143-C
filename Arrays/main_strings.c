#include <stdio.h>
#include <math.h>
#include <string.h>

// Format specifier for char is %c
// Format specifier for string is %s
// fgets(string, numberOfCharacters, stream)

// strcpy copies string2 to string 1
// strcpy(string1, string2);
//------
// strcat concatenates string2 onto the end of string1
// strcat(string1, string2);
//------
// strlen returns the length of the string (does not include the null character)
// strlen(string);
//------
//strcmp compares string 1 and string 2 and return 0 if they are the same <0 if string1 "comes before" string2, and >0 if string1 "comes after" string2
// strcmp(string1, string2);
//     number of strings  | max size
// char shopping list[3][10] = {"...", "..."}

// strelwer(string3) changes to lower case
int main() {
    char myString[6];
    printf("String:\n");
    // 5 is max amount of characters
    scanf("%5s", myString);


    //--------
    char myString[10];
    //scanf("%9s", myString);
    fgets(myString, 10, stdin);
    printf("%s \n", myString);

    //--------
    char string1[50] = "Apple";
    char string2[6];

    //       destination | source
    strcpy(string2, string1);
    printf("%s", string2);

    char string3[7] = {'B', 'a', 'n', 'a', 'n', 'a', '\0'};

    int result = strcmp(string1, string2);
    printf("%i \n", result); // 0

    int result = strcmp(string1, string3);
    printf("%i \n", result); // -1

    strcat(string1, string3);
    printf("%s \n", string1);

    for(int i = 0; i <  strlen(string2); i += 1) {
        printf("=%c \n", string2[i]);
    }

    //-----------
    char myArrayOfString[3][10];

    for(int i=0; i<3; i +=1) {
        char userString[10];
        fgets(userString, 10, stdin);

        if(userString[strlen(userString) -1]=='\n') {
            userString[strlen(userString) - 1] = '\0';
        }
            
        strcpy(myArrayOfString[i], userString);

    }

    for(int i=0; i<3; i +=1) {
        printf("%s \n", myArrayOfString[i]);
    }
}
