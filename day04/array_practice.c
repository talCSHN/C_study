/* 2차원 배열 */
#include <stdio.h>
void sum();
int main()
{
	/*int arr[4] = { 1, 2, 3, 4 };

	int arr2[3][2] = { {1, 2}, {3, 4}, {5, 6} };
	int arr3[3][4] = { {1, 2}, {3, 4, 5}, {6, 7, 8, 9} };
	int arr4[3][2] = { 1, 2, 3, 4, 5, 6 };
	int arr5[][4] = { {1, 2, 3, 4}, {5, 6, 7, 8} };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			if (i == 2 && j == 1) {
				printf("%d", arr2[i][j]);
			}
			else printf("%d, ", arr2[i][j]);
		}
	}*/

	sum();

	return 0;
}

// 4명의 국영수 성적 입력받아서 학생별총점, 전체 평균
void sum() {
	int sum = 0;
	int totalSum = 0;
	double totalAvg;
	double avg;
	int score;
	int scoreArr[4][3];
	int totalArr[4];

	printf("국영수 성적 입력\n");
	for (int i = 0; i < 4; i++) {
		printf("%d번째 학생 성적 입력(국영수 순서대로)\n", i+1);
		for (int j = 0; j < 3; j++) {
			scanf_s("%d", &score);
			scoreArr[i][j] = score;
			if (i >= 1) {
				sum += scoreArr[i][j] - scoreArr[i-1][j];
			}
			else if (i == 0)
				sum += scoreArr[i][j];
		}
		for (int k = 0; k < 3; k++) {
			if (k == 0) {
				printf("%d번째 학생 국어 성적 : %d\n", i + 1, *(scoreArr[i] + k));
			}
			else if (k == 1) {
				printf("%d번째 학생 영어 성적 : %d\n", i + 1, *(scoreArr[i] + k));
			}
			else if (k == 2) {
				printf("%d번째 학생 수학 성적 : %d\n", i + 1, *(scoreArr[i] + k));
			}
		}
		printf("%d번째 학생 성적 총점 : %d\n", i+1, sum);
		avg = sum / 3;
		printf("%d번째 학생 평균 : %.2lf\n", i + 1, avg);
		printf("\n");
		totalArr[i] = avg;
	}
	for (int x = 0; x < 4; x++) {
		totalSum += totalArr[x];
	}
	totalAvg = totalSum / 4;
	printf("전체 학생 총점 평균 : %.2lf", totalAvg);
	/*double avg = sum / 4;
	printf("평균: %d / 4 = %.2lf", sum, avg);*/
}