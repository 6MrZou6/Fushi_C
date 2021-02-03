#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h> 
int main() {
	//Hello Zoudeng!!!!!!
	//##############
	//H############!
	//He###########!!
	//Hel##########!!!
	//...
	char arr1[] = "Hello Zoudeng!!!!!!";
	char arr2[] = "###################";
	int left = 0;
	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
	int right = strlen(arr1) - 1;
	while (left<=right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);
		system("cls");
		left++;
		right--;
	}
	return 0;
}