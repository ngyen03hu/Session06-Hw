#include<stdio.h>
#include<math.h>
 
int main(){
	int a , b ,c , x1 , x2 , x;
	float  delta; 
	printf("MOi ban nhap a : ");
	scanf("%d",&a);
	printf("MOi ban nhap b : ");
	scanf("%d",&b);
	printf("MOi ban nhap c : ");
	scanf("%d",&c);
		
		delta =  b * b - 4 * a * c;
		 if (delta > 0 ){
		 	x1 = -b + sqrt(delta)  / 2 * a;
			x2 = -b - sqrt(delta)  / 2 * a; 
			printf("Phuong co hai nghiem phan biet x1= %f va x2= %f \n",x1,x2); 
		 } else if (delta == 0){
		 	x = -b / 2  * c;
			 printf("phuong trinh co nghiem kep x= %d \n",x); 
		 } else if (delta < 0 ){
		 	printf(" phuong trinh vo nghiem \n "); 
		 } 
	
	
	return 0; 
} 
