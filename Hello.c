#include <stdio.h>
int main() {
	int out, out2;
	int a, b;
	
	out = printf("Hello C Worid\n");
	printf("%d\n", out);
	
	printf("�� ���� ���� �Է� : ");
	out2 = scanf("%d %d", &a, &b);
	printf("%d %d\n", a, b); 
	printf("scanf �Լ��� �Է¹��� �������� ������ %d�Դϴ�.", out2);
	
	return 0;
}
