#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 100
void reverse(char *);
int main(int argc, char **argv) {
    char str[SIZE];
    printf("Enter string: ");
    fgets(str, SIZE, stdin);
    if(strlen(str) == 0) {
        printf("Error\n");
        return 0;
    } else {
        reverse(str);
    }
    return 0;
}
void reverse(char *str) {
    int tmp = 0;
    tmp = strlen(str);
    for (int i = tmp; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}