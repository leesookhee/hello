#include <stdio.h>
#include <string.h>
int main(){
	char str[] = "hello";
	char str1[30];
	strcpy(str1, str);
	printf("%s\n", str1);
	return 0;
}