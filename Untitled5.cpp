#include<stdio.h>
#include<string.h>
#include<math.h>
	 
int main() {
char isim[][7]={"ferhat","baris","omer","polat","eyup","oguz","berat"};
char gecici[7];
int i,j;

for(i=0;i<7;i++)
{
	for(j=0;j<7;j++){
		if(strcmp(isim[j],isim[j+1])>0)
		{
			
			
			strcpy(gecici,isim[j]);
			strcpy(isim[j],isim[j+1]);
			strcpy(isim[j+1],gecici);
			
		}
	}
}
for(i=0;i<7;i++){
	
	printf("\n%s\n\n",isim[i]);
}




	return 0;
}

