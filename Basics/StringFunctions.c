#include <stdio.h>
#include <string.h>
#include <strings.h>

int main() {

    char string1[] = "eren";
    char string2[] = "yeager";
    char string3[20];
    char string4[20];

    printf("string1: %s\n", string1);
    printf("string2: %s\n", string2);

    // strcat: Concatenate strings
    strcpy(string1, "eren"); 
    printf("strcat(string1, string2): %s\n", strcat(string1, string2)); // Output: erenyeager

    // strncat: Concatenate strings with a maximum length
    strcpy(string1, "eren"); 
    printf("strncat(string1, string2, 1): %s\n", strncat(string1, string2, 1)); // Output: ereny

    // strcpy: Copy strings
    strcpy(string1, string2); 
    printf("strcpy(string1, string2): %s\n", string1); // Output: yeager

    // strncpy: Copy strings with a maximum length
    strcpy(string1, "eren"); 
    strncpy(string1, string2, 1); 
    printf("strncpy(string1, string2, 1): %s\n", string1); // Output: yeren

    // strset: Set all characters in a string to a specific character
    strcpy(string1, "eren"); 
    printf("strset(string1, '?'): %s\n", strset(string1, '?')); // Output: ????

    // strnset: Set the first n characters in a string to a specific character
    strcpy(string1, "eren"); 
    printf("strnset(string1, '?', 1): %s\n", strnset(string1, '?', 1)); // Output: ?ren

    // strlwr: Convert all characters in a string to lowercase
    strcpy(string1, "ErEn"); 
    printf("strlwr(string1): %s\n", strlwr(string1)); // Output: eren

    // strupr: Convert all characters in a string to uppercase
    strcpy(string1, "eren"); 
    printf("strupr(string1): %s\n", strupr(string1)); // Output: EREN

    // strrev: Reverse the order of characters in a string
    strcpy(string1, "eren"); 
    printf("strrev(string1): %s\n", strrev(string1)); // Output: nere

    // strlen: Get the length of a string
    strcpy(string1, "eren"); 
    printf("strlen(string1): %ld\n", strlen(string1)); // Output: 4

    // strcmp: Compare two strings
    printf("strcmp(string1, string2): %d\n", strcmp(string1, string2)); // Output: negative value (string1 < string2)

    // strncmp: Compare two strings with a maximum length
    printf("strncmp(string1, string2, 1): %d\n", strncmp(string1, string2, 1)); // Output: 0 (first character is the same)

    // strcasecmp: Compare two strings case-insensitively (from <strings.h>)
    printf("strcasecmp(string1, string2): %d\n", strcasecmp(string1, string2)); // Output: negative value (case-insensitive comparison)

    // strncasecmp: Compare two strings case-insensitively with a maximum length (from <strings.h>)
    printf("strncasecmp(string1, string2, 1): %d\n", strncasecmp(string1, string2, 1)); // Output: 0 (first character is the same)

    // strchr: Find the first occurrence of a character in a string
    strcpy(string1, "erenyeager");
    printf("strchr(string1, 'e'): %c\n", *strchr(string1, 'e')); // Print the character itself

    // strrchr: Find the last occurrence of a character in a string
    strcpy(string1, "erenyeager");
    printf("strrchr(string1, 'e'): %c\n", *strrchr(string1, 'e')); // Print the character itself

    // strstr: Find the first occurrence of a substring in a string
    strcpy(string1, "erenyeager");
    printf("strstr(string1, \"yeager\"): %s\n", strstr(string1, "yeager")); // Output: yeager

    // strpbrk: Find the first occurrence of any character in a set of characters in a string
    strcpy(string1, "erenyeager");
    printf("strpbrk(string1, \"aeiou\"): %s\n", strpbrk(string1, "aeiou")); // Output: eren

    return 0;
}