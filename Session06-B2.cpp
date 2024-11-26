#include <stdio.h>

int main() {
    int num, dem = 0;

  
    for (int i = 0; i < 5; i++) {
        printf("Nhap so thu  %d: ", i + 1);
        scanf("%d", &num);  
        while (num %2 ==0 && num %2 !=0 ){
        		++dem; 
        }
    }

    
  

    return 0;
}

