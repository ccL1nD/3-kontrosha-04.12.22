#include <stdio.h>
#include <string.h>
#define SIZE 80
static char name[5][50] = {"print", "happy new year", "chacha", "GEYnadiy", "vasya"};
void find(char *);
int main(int argc, char **argv) {
    char str[SIZE];
    printf("Enter string: ");
    fgets(str,SIZE, stdin);
    str[strlen(str) - 1] = '\0';
    find(str); 
    return 0;
}
void find(char *str) {
    for(int i = 0; i < 5; i++) {
        if(strstr(name[i], str) > 0) {
            printf("Word number %d: %s\n", i + 1, name[i]);
        }
    }
}