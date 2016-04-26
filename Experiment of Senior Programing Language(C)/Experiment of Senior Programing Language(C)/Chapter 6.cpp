//6-3
#include <stdio.h>
int stuaver(const int score[][5], int);
//void couaver(const int score[][5], int);

int main(void) {
	int score[10][5];
	int i, j;
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 5; j++) {
			scanf("%d", &score[i][j]);
		}
	}
	stuaver(score, 10);
	//couaver(score, 10);
	printf("Part 3: a student  and  course scores of the student "
		"whose average is the highest");
	for (j = 0; j<5; j++)
		
	printf("%d\n%d", stuaver(score, 10) + 1, score[stuaver(score, 10)][j]);
}

int stuaver(const int score[][5], int n) {
	double aver[10] = {};
	int i, j;
	printf("Part 1: the averages of every student");
	for (i = 0; i < n; i++) {
		float sum = 0;
		for (j = 0; j < 5; j++) {
			sum += score[i][j];
		}
		aver[i] = sum / 5.0;
		printf("%f\n", aver[i]);
	}
	int max;
	for (max = 0, i = 0; i<n; i++)
		if (aver[max]>aver[i])
			max = i;
	return i;
}

/*void couaver(const int score[][5], int n) {
	//float aver;
	int i, j;
	printf("Part 2: the averages of every course score");
	for (j = 0; j < 5; i++) {
		float sum = 0;
		for (i = 0; i < n; j++) {
			sum += score[j][i];
		}
		printf("%f\n", sum / 10.0);
	}
	return;
}*/