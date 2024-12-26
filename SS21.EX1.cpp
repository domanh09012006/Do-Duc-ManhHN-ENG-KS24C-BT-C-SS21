#include<stdio.h>
#include<string.h>
int main(){
	char Strings[] = {"Hello World"};
	//Demo fputs
	FILE *fptr;
	fptr = fopen("bt02.txt", "w");
	if(fptr == NULL){
		printf("Loi mo tap tin!\n");
		return 1;
	}
	fputs(String,fptr);
	fputs("\n", fptr);
	fputs(String,fptr);
	fclose(fptr);
	printf("Hoan thanh ghi FILE!");
	//Demo fgets
	FILE *ptr = fopen("bt03.txt", "r");
	if(ptr == NULL){
		printf("Loi mo tap tin!\n");
		return 1;
	}
	
	return 0;
}
