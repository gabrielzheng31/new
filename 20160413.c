#include <stdio.h>

void input(const int ar[], int n)

void sort(const int ar[], int n)

int binarySearch(const int ar[], int n, int special)

int main(void){
	int ar[15];
	input(ar, 15);
	//sort(ar, 15);
	binarySearch(ar, 15, 89);
	return 0;
}


void input(const in ar[], int n){
	int i;
	for(i = 0; i < n; i++)
		scanf("%d", &ar[i]);
	return;
}

void sort(const int ar[], int n){
	int i, j, temp;
	for(i = 0; i < n-1; i++){
		for(j = 0; j < n - i -1; j++){
			if(ar[i] > ar[i+1]){
				temp = ar[i];
				ar[i] = ar[i+1];
				ar[i+1] = temp;
			}
		}
	}
}

int binarySearch(const int ar[], int n, int special){
	int Mid, Low, High, special;
	Low = 0;
	High = n-1;
	scanf("%d", &special);
	while(Low <= High){
		Mid = (Low+High)/2;
		if(special < Mid)
			High = Mid - 1;
		else if(special > Mid)
			Low = Mid + 1;
		else
			return Mid;
	}
	printf("Not Found");
}