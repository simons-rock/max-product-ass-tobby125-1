#include "max_product.h"

int max_pairwise_product_naive(int * arr, int size){
	int max = 0;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i != j && arr[i] * arr[j] > max) {
				max = arr[i] * arr[j];
			}
		}
	}
	return max;
}
