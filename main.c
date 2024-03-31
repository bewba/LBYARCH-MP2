#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

extern void kernel(float* arr, long long int size, float* jamal);
extern void asmhello();


int main(void) {
	float* arr,*jamal;
	long long int i, size=0;
	clock_t begin, end;
	printf("Enter Array Size:\n");
	scanf_s("%d", &size);
	arr = (float*) malloc(size * sizeof(float));
	jamal = (float*)malloc(10 * sizeof(float));
	for (i = 0; i < size; i++) {
		arr[i] = 1;
	}
	for (i = 0; i < 10; i++) {
		jamal[i] = 0.0;
	}

	printf("\n");
	begin = clock();
	kernel(arr, size, jamal);
	end = clock();
	for (i = 0; i < 10; i++) {
		printf("%f\n", jamal[i]);
	}

	double time_taken = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("Time take: %f seconds", time_taken);
	return 0;
}

