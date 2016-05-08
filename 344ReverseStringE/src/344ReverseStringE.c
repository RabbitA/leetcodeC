#include <stdio.h>
int main(){
	char a[]="hello guys! hhaha";
	char temp;
	int len=strlen(a);
	int i,z=len-1;
	for (i=0;i<z;i++,z--){
		temp=a[i];
		a[i]=a[z];
		a[z]=temp;
		printf("%s\n",a);
	}
	return 0;
}
