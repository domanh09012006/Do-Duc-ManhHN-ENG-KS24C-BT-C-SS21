#include<stdio.h>
#include<string.h>
int main(){
	char first;
	FILE *fptr;
	fptr = fopen("bt01.txt", "r");
	if(fptr == NULL){
		printf("Loi mo tap tin!\n");
		return 1;
	}else{
	printf("%c", fgetc(fptr));
	}
	fclose(fptr);
	return 0;
}
