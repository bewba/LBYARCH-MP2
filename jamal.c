#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

int main() {
	int size, i,j, ctr;
	float values[10], val;
	float* arr;
	clock_t begin, end;
	printf("Enter a size:\n");
	scanf_s("%d", &size);

	arr = (float*)malloc(size * sizeof(float));
	ctr = 0;
	for (i = 0; i < size; i++) {
		arr[i] = 1;
	}

	for (i = 0; i < 10; i++) {
		values[i] = 0;
	}

	begin = clock();
	for (i = 3; i < size; i++) {
		val = 0;
		for (j = i - 3; j < i + 4; j++) {
			val += arr[j];
		}

		if (ctr < 10) {
			values[ctr] = val;
		}
		ctr += 1;
	}
	end = clock();
	for (i = 0; i < 10; i++) {
		printf("%f\n", values[i]);
	}

	double time_taken = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("Time take: %f seconds", time_taken);
	end = clock();
}

	