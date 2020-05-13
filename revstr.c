#include<stdio.h>
#include<string.h>
int main() {
	char s[10];
	int i;
	
	printf("문자를 10자 내로 입력 : ");
	scanf("%s", s);
	
	for(i=strlen(s)-1; i>=0; i--) {
		printf("%c", s[i]);
	}
	
	return 0;
}
