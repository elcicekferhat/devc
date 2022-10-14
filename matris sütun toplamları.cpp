#include<stdio.h>



int main() { 
     
     int matris[4][4];
     int i,j;
     float toplam; 
     
    
     for(i=0;(i<4);(i++)){
     	
     	    for(j=0;j<4;j++){
     	    	
     	    	scanf("%d",&matris[i][j]);
			 }
	 }

      for(j=0;j<4;j++){
      	
      	for(i=0;i<4;i++){
      		
      		toplam+=matris[i][j];
      		
		  }
		  	printf("%.2f ",toplam/2.0);
		  toplam=0;
		  printf("\n");
	  }



















	
	return 0;
}


