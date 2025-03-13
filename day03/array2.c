//#include <stdio.h>
//
//int main()
//{
//	/*int arr[] = { 1,2,3 };
//
//	printf("배열의 전체 크기: %d\n", sizeof(arr));
//	printf("배열 방 한 개의 크기: %d\n", sizeof(arr[0]));
//	printf("배열의 방의 갯수: %d\n", sizeof(arr)/sizeof(arr[0]));
//	printf("배열 이름: %p\n", arr);
//	printf("배열의 첫 번째 방 주소: %p\n", &arr[0]);
//	printf("배열의 두 번째 방 주소: %p\n", &arr[1]);
//	printf("배열의 두 번째 방 주소: %p\n", arr + 1);*/
//
//	int score;
//	int arr2[5];
//	int count = sizeof(arr2) / sizeof(arr2[0]);
//	printf("학생 5명 성적 입력\n");
//	for (int i = 0; i < 5; i++) {
//		scanf_s("%d", &score);
//		arr2[i] = score;
//		printf("%d번 학생 성적: %d\t", i+1, arr2[i]);
//	}
//	
//	int sum = 0;
//	for (int j = 0; j < 5; j++) {
//		sum += arr2[j];
//	}
//	double avgScore = sum / count;
//	printf("학생들 평균 성적: %.2lf", avgScore);
//
//
//	return 0;
//}