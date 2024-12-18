#include<stdio.h>

int isPrime(int num) {  
    if (num <= 1) 
	return 0; 
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) 
		break;
    }  
    return 1;
}

int main() {
    int n, arr[100], sum = 0;

    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("So da nhap la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nCac so nguyen to: ");  
    for (int i = 0; i < n; i++) {  
        if (isPrime(arr[i])) {  
            printf("%d ", arr[i]);  
        }  
    }  

    for (int i = 0; i < n; i++) {  
        sum += arr[i];
    }  

    printf("\nTong cac phan tu: %d\n", sum);  

    return 0;
}