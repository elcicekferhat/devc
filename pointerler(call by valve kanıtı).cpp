#include<stdio.h>
#include<string.h>

void degerdegistir(int*a,int*b){
	
	int gecici=*a;
	*a=*b;
	*b=gecici;
	printf("a=%d b=%d\n",*a,*b);
}
   

 
int main() {int x,y;

 
 printf("degerlerini degistireceginiz x'i' giriniz:");
    scanf("%d",&x);
    printf("degerlerini degistireceginiz y'i' giriniz:");
    scanf("%d",&y);


   
    degerdegistir(&x,&y);
    printf("x:%d y:%d",x,y);
    


  
	
	return 0;
}


