#include <stdio.h>
void main(){
	char a[]="hweleoelo8hjhja";
	char temp;
	int i=0,z=strlen(a)-1;
	for (i=0;i<z;i++){
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'){
			for(;z>i;z--){
				if(a[z]=='a'||a[z]=='e'||a[z]=='i'||a[z]=='o'||a[z]=='u'||a[z]=='A'||a[z]=='E'||a[z]=='I'||a[z]=='O'||a[z]=='U'){
					printf("%d%d\n",i,z);
					temp=a[i];
					a[i]=a[z];
					a[z]=temp;
					z--;
					break;
				}
			}
		}
	}
}
