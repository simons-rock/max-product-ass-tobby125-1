#include "max_product.h"

int max_pairwise_product_fast(int *arr, int size){
	int max1 = 0;
	int max2 = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] >= max1) {
			max2 = max1;
			max1 = arr[i];
		}
		else if (arr[i] > max2) {
			max2 = arr[i];
		}	
	}
	return max1 * max2;
}

