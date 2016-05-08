#include <stdio.h>
#include <math.h>
int main(){
	int n=16;
    if (n%2==0&&n==0) {  //check odd and zero
        return 0;
    } else if (n==2) {  //check 2
        return 1;
    } else {
        while(n%2==0) {  //loop start
            n=n/2;
            if (n%2!=0) {  //check a/2 is odd?
                return 0;
                continue;
            } else if (n==2) {  //check a/2 reach 2? yes->power of 2  no->next loop
                return 1;
                continue;
            }
        }
    }
}
