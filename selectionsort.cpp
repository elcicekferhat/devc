#include<stdio.h>
#include<string.h>

void selectionsort(int arr[],int uzunluk){

int i,j;
int minimum;


     for(i=0;i<uzunluk;i++){
        minimum=i;
     	
     	  for(j=i+1;j<uzunluk;j++){	
     	  	
     	    if(arr[j]<arr[minimum]){
          minimum=j;
		    }    	
		 }  
		 int temp=arr[minimum];
		 arr[minimum]=arr[i];
		 arr[i]=temp;		
      }	
         
   }
	 
         
       
		   
      
		 
		 
		 
		 
		 
		 
		 
		 
int main()  {
	int array[5];
	printf("arrayleri doldurunuz:");
	int i;
	
	for(i=0;i<5;i++){
		scanf("%d",&array[i]);
	}
	
	selectionsort(array,5);
	for(i=0;i<5;i++){
		printf("%d",array[i]);
	}




	
	return 0;
}


