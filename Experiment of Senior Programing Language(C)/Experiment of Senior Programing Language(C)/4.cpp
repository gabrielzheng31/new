//#include <stdio.h>
//double courseAverage(double[][6], int n);
//void specialStu(double[][6], int n);
//void topStu(double[][6], int n);
//
//int main(void) {
//	int i, j;
//	double score[4][6];
//
//	for (i = 0; i < 4; i++)
//		for (j = 0; j < 6; j++)
//			scanf("%lf", &score[i][j]);
//
//	printf("The average score of course 1 is:%0.2f\n", courseAverage(score, 4));
//	putchar('\n');
//
//	specialStu(score, 4);
//	putchar('\n');
//
//	topStu(score, 4);
//
//	return 0;
//}
//
//double courseAverage(double score[][6], int n) {
//	int i = 0;
//	double sum = 0.0;
//
//	for (; i < 4; i++)
//		sum += score[i][0];
//
//	return sum / 4.0;
//}
//
//void specialStu(double score[][6], int n) {
//	int i, j, count;
//	double sum;
//
//	for (i = 0; i < 4; i++) {
//		sum = 0.0;
//		count = 0;
//		for (j = 0; j < 5; j++)
//			if (score[i][j] < 60)
//				count++;
//
//		if (count >= 2) {
//			printf("The student number is:  %0.0f\n", score[i][5]);
//			printf("The student's every course score are:");
//
//			int k;
//
//			for (k = 0; k < 5; k++)
//				printf("%0.2f,", score[i][k]);
//			putchar('\n');
//			
//			for (k = 0; k < 5; k++)
//				sum += score[i][k];
//			printf("The student's average score is:%0.2f\n", sum / 5.0);
//		}
//	}
//
//	return;
//}
//
//void topStu(double score[][6], int n) {
//	double average[4];
//	double sum;
//	int i, j,k;
//
//	for (i = 0; i < 4; i++) {
//		sum= 0.0;
//		for (j = 0; j < 5; j++)
//			sum += score[i][j];
//		average[i] = sum / 5.;
//	}
//
//	for (i = 0; i < 4; i++)
//		if (average[i] >= 90)
//			printf("student %0.0f average score is above 90\n", score[i][5]);
//
//	for (i = 0; i < 4;i++) {
//		for (j = 0; j < 5; j++)
//				if (score[i][j] < 85) {
//					break;
//			}
//		if(j==5)
//			printf("student %0.0f every score is above 85\n", score[i][5]);
//	}
//	
//	return;
//}