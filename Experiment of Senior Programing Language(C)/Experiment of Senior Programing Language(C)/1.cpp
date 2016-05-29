//#include <stdio.h>
//
//int main(void) {
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	int *ptr1, *ptr2, *ptr3, *bac;
//	ptr1 = &a;
//	ptr2 = &b;
//	ptr3 = &c;
//	if (*ptr1>*ptr2) {
//		bac = ptr1;
//		ptr1 = ptr2;
//		ptr2 = bac;
//	}
//	if (*ptr1>*ptr3) {
//		bac = ptr1;
//		ptr1 = ptr3;
//		ptr3 = bac;
//	}
//	if (*ptr2>*ptr3) {
//		bac = ptr2;
//		ptr2 = ptr3;
//		ptr3 = bac;
//	}
//	printf("%d\n%d\n%d", *ptr1, *ptr2, *ptr3);
//	return 0;
//}
