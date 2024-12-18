#include <stdio.h>  

int main() {  
    int arr[5]; 

    printf("Nhap 5 phan tu:\n");  
    
    for (int i = 0; i < 5; i++) {  
        printf("Nhap phan tu arr[%d]: ", i);  
        scanf("%d", &arr[i]);  
    }  

    printf("So da nhap la: ");  
    for (int i = 0; i < 5; i++) {  
        printf("%d ", arr[i]);  
    }  

    return 0;  
}