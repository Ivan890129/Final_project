#ifndef _MATMUL_H
#define _MATMUL_H

#define SIZE 4
	int A[SIZE*SIZE] = {1, 2, 0, 1,
			2, 0, 3, 2,
			0, 1, 2, 3,
			1, 0, 5, 1,
	};
	int B[SIZE*SIZE] = {1, 2, 3, 4,
		5, 6, 7, 8,
		9, 10, 11, 12,
		13, 14, 15, 16,
	};
	int result[SIZE*SIZE];
#endif
