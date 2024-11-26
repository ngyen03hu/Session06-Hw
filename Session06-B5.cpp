#include<stdio.h> 

int main (){
	int year , moth; 
	printf("Moi ban nhap nam :  \n");
	scanf("%d",&year);
	printf("Moi ban nhap thang  :  \n");
	scanf("%d",&moth);
	if (0 < year && year >12 ){
		printf("khong co thang nay ");
	}

			
	switch(moth){
		case 1:case 3:case 5:case 7:case 8:case 10 :case 12:
		  if(year>0){
		  	printf(" Nam : %d \n",year);
		  	printf(" thang  : %d \n",moth);
		  	printf(" thang nay co 31 ngay ");
		  } else {
		  	printf("khong hop le ");
		  }
		  break;
		case 4:case 6:case 9:case 11:
			  if(year>0){
		  	printf(" Nam : %d \n",year);
		  	printf(" thang  : %d \n",moth);
		  	printf(" thang nay co 30 ngay ");
		  } else {
		  	printf("khong hop le ");
		  }
		  break;
		case 2:
			  if(year>0){
		  	printf(" Nam : %d \n",year);
		  	printf(" thang  : %d \n",moth);
		  	printf(" thang nay co 28 ngay ");
		  } else if (year % 4 ==0 && year % 100 !=0 && year % 400 ==0) {
		  	printf(" Nam : %d \n",year);
		  	printf(" thang  : %d \n",moth);
		  	printf(" thang nay co 29ngay ");
		  } else {
		  		printf("khong hop le ");
		  }
		  
		  break;
		
	} 
	return 0; 
} 
