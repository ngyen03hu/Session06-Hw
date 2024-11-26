#include<stdio.h>

int main (){
    int c = 0 , l = 0,num ;   
    for (int i = 0; i < 5; i++) {
        printf("Nhap so thu %d: ", i + 1);
        scanf("%d", &num);
        if (num % 2 == 0) {
            c++ ;// moi khi dung +1 vao C 
        } else {// moi lan sai thi +1 vao l
        	l++;
		}
    }
    printf("so lan nhap so le  là: %d\n", l);
    printf("so lan nhap so chan là: %d\n",c
	);	
	
	return 0;
}
