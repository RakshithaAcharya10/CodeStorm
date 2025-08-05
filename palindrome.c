// palindrome.c - placeholder for Day1_C
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], reversed[100];
    int length, i, flag = 1;

    printf("Enter a word: ");
    scanf("%s", str);

    length = strlen(str);

    // Reverse the string
    for (i = 0; i < length; i++) {
        reversed[i] = str[length - i - 1];
    }
    reversed[length] = '\0'; // Null-terminate the reversed string

    // Compare original and reversed
    for (i = 0; i < length; i++) {
        if (str[i] != reversed[i]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("%s is a palindrome.\n", str);
    else
        printf("%s is not a palindrome.\n", str);

    return 0;
}
