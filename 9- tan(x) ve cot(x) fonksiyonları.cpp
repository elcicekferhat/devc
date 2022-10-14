#include<stdio.h>
#include<string.h>
#include<math.h>
	 
int main() {
  
  float pi=3.14159265359;
  float aci,deger;
  printf("tanx deki x i giriniz=");
  scanf("%f",&aci);
  
  deger=tan(aci*pi/180.0);
  printf("tanx=%f",deger);



	return 0;
}

