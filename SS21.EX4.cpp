#include <stdio.h>
#include <string.h>
int main() {
    char String[1000];
    FILE *fptr;
    fptr = fopen("bt01.txt", "r");
    if (fptr == NULL) {
        printf("Loi mo tap tin!\n");
        return 1;
    }
    int n;
    fgets(String, 1000, fptr);
    String[strlen(String)-1] = '\0';
    printf("%s", String);
    fclose(fptr);
    printf("\nHoan thanh gdoc FILE!");
    return 0;
}
