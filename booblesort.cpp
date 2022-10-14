#include<stdio.h>
#include<string.h>
void bobblesort(int arr[],int uzunluk){
	
	int i,j;
	
      for(i=0;i<uzunluk;i++){
      	for(j=0;j<uzunluk-i;j++){
      		if(arr[j]>arr[j+1]){
      			int deger=arr[j+1];
      			arr[j+1]=arr[j];
      			arr[j]=deger;
      			
			  }
     	}
	  }
}
int main()  {
	
	int array[10];
	printf("arrayleri doldurunuz:");
	int i;
	
	for(i=0;i<10;i++){
		scanf("%d\n",&array[i]);
	}
	
	bobblesort(array,10);
	for(i=0;i<10;i++){
		printf("%d",array[i]);
	}



	
	return 0;
}


