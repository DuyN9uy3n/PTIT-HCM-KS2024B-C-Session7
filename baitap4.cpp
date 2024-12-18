#include <stdio.h>  

#define MAX_SIZE 100

int main() {  
    int n;  
    int arr[MAX_SIZE]; 

    printf("Nhap so phan tu cua mang (toi da %d): ", MAX_SIZE);  
    scanf("%d", &n);  
 
    if (n <= 0 || n > MAX_SIZE) {  
        printf("So phan tu phai lon hon 0 va nho hon hoac bang %d.\n", MAX_SIZE);  
        return 1;
    }  

    printf("Nhap %d phan tu trong mang:\n", n);  
    for (int i = 0; i < n; i++) {  
        printf("Nhap phan tu arr[%d]: ", i);  
        scanf("%d", &arr[i]);  
    }  
 
    printf("Cac phan tu trong mang la:\n");  
    for (int i = 0; i < n; i++) {  
        printf("%d ", arr[i]);  
    }    

    return 0;  
}