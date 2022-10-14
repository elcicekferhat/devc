#include<stdio.h>
#include<string.h>
#include<math.h>
	 
int main() {
char kucuk[20];

printf("kucuk harfli kelime:");  scanf("%s",kucuk);

printf("buyuk harflisi=%s",strupr(kucuk));
	return 0;
}

