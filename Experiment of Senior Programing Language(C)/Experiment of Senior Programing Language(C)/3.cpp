//#include <stdio.h>
//void tranMat(int [][3], int [][3]);
// 
//int main(void){
//    int matrix[3][3], matTran[3][3];
//    int i, j;
//    for(i = 0; i<3; i++)
//        for(j = 0; j < 3; j++)
//            scanf("%d", &matrix[i][j]);
//    tranMat(matrix, matTran);
//    for(i = 0; i<3; i++)
//        for(j = 0; j < 3; j++)
//            if(j == 2)
//                printf("%d\n", matTran[i][j]);
//            else
//            printf("%d ", matTran[i][j]);
//    return 0;
//}
// 
//void tranMat(int matrix[][3], int matTran[][3]){
//    int i, j;
//    for(i = 0; i < 3; i++)
//        for(j = 0; j < 3; j++)
//            matTran[j][i] = matrix[i][j];
//}