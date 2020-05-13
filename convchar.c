#include<stdio.h>
#include<string.h>

int main() {
	char str[21];
	int i;
	
	printf("20글자 내의 문자열 입력 : ");
	scanf("%s", str);
	
	// A = 65, a = 97, '0' = 48
	for(i=0; i<strlen(str); i++) {
		if (str[i] >= 65 && str[i] <= 90) {
			str[i] += 32;
		} else if (str[i] >= 97 && str[i] <= 122){
			str[i] -= 32;
		}
	}
	
	printf("%s", str);
	
	return 0;
}
