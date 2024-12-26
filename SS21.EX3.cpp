#include <stdio.h>
#include <string.h>
int main() {
    char String[1000];
    FILE *fptr;
    fptr = fopen("bt01.txt", "a");
    if (fptr == NULL) {
        printf("Loi mo tap tin!\n");
        return 1;
    }
    printf("Nhap them vao file: ");
    fgets(String, 1000, stdin);
    String[strcspn(String, "\n")] = '\0';
    fprintf(fptr, "%s\n", String);
    fclose(fptr);
    printf("Hoan thanh ghi FILE!\n");
    return 0;
}
