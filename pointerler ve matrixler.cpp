#include<stdio.h>
#include<string.h>
int   maximumbulma(int *a,int uzunluk){
	 int i;
   int max=a[0];
   
   
   

   for(i=0;i<uzunluk;i++){
   		if(a[i]>max){
   		max=a[i];
   		
   		
	   }
   }
   return max;
}
  

int main()  
{
	
	
	int sayilar[5]={1,2,150,5,135};
	printf("%d\n",maximumbulma(sayilar,5));
	

int max= maximumbulma(sayilar,5);
	printf("sonuc =%d",max);

 



  
	
	return 0;
}


