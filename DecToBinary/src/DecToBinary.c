#include <stdio.h>
#include <stdlib.h>

//int main(void) {
//	int dec, binN, bin[30], i;
//	scanf("%d", &dec);
//	printf("dec=%d\n", dec);
//	for (i = 0; dec != 0; i++) {
//		binN = dec % 2;
//		printf("%d\n", binN);
//		bin[i] = binN ;
//		dec = (dec - dec % 2) / 2;
//	}
//	printf("bin=%d", bin);
//}

int main(){
	int b[30],dec,i,meo;
	scanf("%d",&dec);
	i=0;
	while(dec){  //when loop finished, i plus 1
		meo=dec%2;
		b[i++]=meo;
		dec=dec/2;
	}
	while(i>0){
		printf("%d",b[--i]);  // so, first minus 1 from i
	}
}

