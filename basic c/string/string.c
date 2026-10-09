#include <stdio.h>
#include <string.h>
int main()
{
    // char str[] = {'A', 'B', 'C', 'D', 'E', '\0'}; //----> ABCDE
    //  char str[] = {65, 66, 67, 68, 69, 0}; //---->ABCDE (0 is the ascii value of '\0')
    // char str[5] = {'A', 'B', 'C', 'D', 'E'}; // (5 bytes)
    // char str[10] = {'A', 'B', 'C', 'D', 'E'}; // size should be greater than elements then it put null('\0') for extra bites //(10 bytes)
    // char str[] = "ABCDE"; //---->ABCDE (by default add null('\0') character) //(6 bytes)

    // int i = 0;
    // while (str[i] != '\0')
    // {
    //     printf("%c", str[i]);
    //     i++;
    // }

    // *****************************input/output without loops*************************

    // char str[] = "Hello World";
    // printf("%s", str); //---> Hello World

    // ****************************user input**********************

    // char str[50];
    // // scanf("%s", str); // only the first word will be considered
    // // gets(str); // take words after space( )
    // scanf("%[^\n]s", str); // take words after space( )
    // // printf("your output: %s", str);
    // puts("your output is:"); // add new line(\n) default
    // puts(str);               // another way of printing string

    // ******************************* useful functions for string **************************

    // strlen(str)
    // ---> returns the number of characters in the string
    // ---> does NOT count the '\0' (null terminator)

    // strcpy(s1, s2)
    // ---> copies the string s2 into s1
    // ---> s1 must have enough space to hold s2 + '\0'

    // strcat(s1, s2)
    // ---> appends/concatenates s2 to the end of s1
    // ---> s1 must have enough space for:
    //     strlen(s1) + strlen(s2) + 1
    // ---> +1 is for the '\0'

    // strcmp(s1, s2)
    // ---> compares s1 and s2 lexicographically
    // ---> returns 0  if s1 == s2
    // ---> returns <0 if s1 comes before s2
    // ---> returns >0 if s1 comes after s2

    return 0;
}