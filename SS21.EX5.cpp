#include <stdio.h>
#include <string.h>
int main() {
    char String[1000];
    int n;
    char line[50];
    FILE *fptr;
    fptr = fopen("bt03.txt", "w");
    if (fptr == NULL) {
        printf("Loi mo tap tin!\n");
        return 1;
    }
    printf("Nhap vao so dong can nhap: ");
    scanf("%d", &n);
    getchar();
    for(int i=0; i<n; i++){
    	printf("Nhap dong thu %d: ", i+1);
    	fgets(String, sizeof(String), stdin);
    	String[strcspn(String, "\n")] = '\0';
	}
    fclose(fptr);
    printf("Hoan thanh ghi FILE!\n");
    fptr = fopen("bt03.txt", "r");
    if (fptr == NULL) {
        printf("Loi mo tap tin\n", fptr);
        return 1;
    }
    printf("\nNoi dung file: '%s':\n", fptr);
    while (fgets(String, sizeof(String), fptr) != NULL) {
        printf("%s", String);
    }
    fclose(fptr);
    return 0;
}
