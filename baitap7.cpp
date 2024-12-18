#include <stdio.h>  

int main() {  
    int n;  

    printf("Nhap so phan tu cua mang: ");  
    scanf("%d", &n);  

    if (n <= 0) {  
        printf("So phan tu phai lon hon 0.\n");  
        return 1;
    }  

    int arr[n];
    
    for (int i = 0; i < n; i++) {  
        while (1) { 
            printf("Nhap phan tu arr[%d] (phai la so le): ", i);  
            scanf("%d", &arr[i]);  

            if (arr[i] % 2 != 0) {  
                break;
            } else {  
                printf("Khong phai so le, nhap lai!\n");  
            }  
        }  
    }  
  
    printf("Cac phan tu trong mang la:\n");  
    for (int i = 0; i < n; i++) {  
        printf("%d ", arr[i]);  
    }  
    printf("\n");
    return 0;  
}