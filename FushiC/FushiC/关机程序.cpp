#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	//�ػ�   
	//System   ר������ִ��ϵͳ����
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	again:
	printf("��ĵ��Խ���һ���Ӻ�ػ���������룺��������ȡ���ػ�\n");
	scanf("%s", input);
	if (strcmp(input,"������")==0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}