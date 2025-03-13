///**/
//#include <stdio.h>
//
////void printArr(int arr[], int);
////void inputArr(int arr3[], int);
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int arr2[] = { 1, 2, 3 };
//	int arr3[5];
//	int arrLen = sizeof(arr3) / sizeof(arr3[0]);
//
//	inputArr(arr3, arrLen);
//	//printArr(arr2, arrLen);
//	return 0;
//}
//
//void printArr(int *arr, int l) {
//	for (int i = 0; i < l; i++) {
//		printf("arr[%d]: %d\n", i, arr[i]);
//	}
//}
//
//void inputArr(int *arr3, int l) {
//	for (int j = 0; j < l; j++) {
//		int inputNum;
//		scanf_s("%d", &inputNum);
//		arr3[j] = inputNum;
//	}
//	for (int k = 0; k < l; k++) {
//		printf("%d ", arr3[k]);
//	}
//}