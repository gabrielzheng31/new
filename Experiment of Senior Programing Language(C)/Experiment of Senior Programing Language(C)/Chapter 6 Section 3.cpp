/*#include <stdio.h>
int stuaver(const double score[][5], int);
void couaver(const double score[][5], int);

int main(void) {
	double score[10][5];
	int i, j;
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 5; j++) {
			scanf("%lf", &score[i][j]);
		}
	}
	int rank = stuaver(score, 10);
	couaver(score, 10);
	printf("Part 3: a student  and  course scores of the student "
		"whose average is the highest\n");
	printf("%d\n", rank+1);
	for (j = 0; j<5; j++)
		printf("%lf ", score[rank][j]);
	putchar('\b');
	return 0;
}

int stuaver(const double score[][5], int n) {
	double aver[10] = {};
	int i, j;
	printf("Part 1: the averages of every student\n");
	for (i = 0; i < n; i++) {
		double sum = 0;
		for (j = 0; j < 5; j++) {
			sum += score[i][j];
		}
		aver[i] = sum / 5.0;
		printf("%f\n", aver[i]);
	}
	int max;
	for (max = 0, i = 0; i < n; i++)
		if (aver[max]<aver[i])
			max = i;
	return max;
}

void couaver(const double score[][5], int n) {
	int i, j;
	printf("Part 2: the averages of every course score\n");
	for (j = 0; j < 5; j++) {
		double sum = 0;
		for (i = 0; i < n; i++) {
			sum += score[i][j];
		}
		printf("%lf\n", sum / 10.0);
	}
	return;
}*/
