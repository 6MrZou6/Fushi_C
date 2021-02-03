#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	//找出数组中只出现一次的数
	int arr[] = { 1,2,3,4,5,1,2,3,4 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[i]);
	//for (i=0;i<sz;i++)
	//{
	//	//统计arr[i]在数组中出现了几次
	//	int j = 0;
	//	int count = 0;//计数器
	//	for (j = 0; j < sz;j++) {
	//		if (arr[i]==arr[j]) {
	//			count++;
	//		}
	//	}
	//	if (count == 1) {
	//		printf("单身狗是%d\n", arr[i]);
	//		break;
	//	}
	//}
	//法二  异或满足交换律  0^a=a   a^a=0
	int ret = 0;
	for (i = 0; i < sz;i++) {
		ret = ret ^ arr[i];
	}
	printf("单身狗是%d\n", ret);
	return 0;
}