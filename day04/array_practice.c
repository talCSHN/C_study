/* 2���� �迭 */
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

// 4���� ������ ���� �Է¹޾Ƽ� �л�������, ��ü ���
void sum() {
	int sum = 0;
	int totalSum = 0;
	double totalAvg;
	double avg;
	int score;
	int scoreArr[4][3];
	int totalArr[4];

	printf("������ ���� �Է�\n");
	for (int i = 0; i < 4; i++) {
		printf("%d��° �л� ���� �Է�(������ �������)\n", i+1);
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
				printf("%d��° �л� ���� ���� : %d\n", i + 1, *(scoreArr[i] + k));
			}
			else if (k == 1) {
				printf("%d��° �л� ���� ���� : %d\n", i + 1, *(scoreArr[i] + k));
			}
			else if (k == 2) {
				printf("%d��° �л� ���� ���� : %d\n", i + 1, *(scoreArr[i] + k));
			}
		}
		printf("%d��° �л� ���� ���� : %d\n", i+1, sum);
		avg = sum / 3;
		printf("%d��° �л� ��� : %.2lf\n", i + 1, avg);
		printf("\n");
		totalArr[i] = avg;
	}
	for (int x = 0; x < 4; x++) {
		totalSum += totalArr[x];
	}
	totalAvg = totalSum / 4;
	printf("��ü �л� ���� ��� : %.2lf", totalAvg);
	/*double avg = sum / 4;
	printf("���: %d / 4 = %.2lf", sum, avg);*/
}