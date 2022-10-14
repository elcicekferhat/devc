#include<stdio.h>
#include<string.h>
#include<math.h>
	 
int main() {
float cosh;
float x;

printf("cosh icin radyan cinsinden x i giriniz");
scanf("%f",&x);
cosh=(exp(x)+exp(-x))/2.0;
printf("%f",cosh);



	return 0;
}

