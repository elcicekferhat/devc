#include<stdio.h>
void bastir(int m[][3],int size){
  	
  	int i,j;
  	for(i=0;i<size;i++){
  		
  		for(j=0;j<3;j++){
  			printf("%d",m[i][j]);
		  }
  		printf("\n");
  		
	  } 
	  
	  
	 
	   
  }

   

   


 
int main() { 
    int i,j;
    int matris[3][3];

   	printf("matrisi doldurunuz:");
   	
   
   for(i=0;i<3;i++){
   	for(j=0;j<3;j++){
   		
   	
   		  scanf("%d",&matris[i][j]);
			
			
	   }
   }
   
    bastir(matris,3);

    
    

    


	
	return 0;
}


