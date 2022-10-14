#include<stdio.h>
#include<string.h>
#include<math.h>
	 
int main() {
char buyuk[20];

printf("buyuk harfli kelime:");  scanf("%s",buyuk);

printf("kucuk harflisi=%s",strlwr(buyuk));
	return 0;
}

