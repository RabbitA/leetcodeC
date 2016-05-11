//Write a program to check whether a given number is an ugly number.
//Ugly numbers are positive numbers whose prime factors only include 2, 3, 5. For example, 6, 8 are ugly while 14 is not ugly since it includes another prime factor 7.
//Note that 1 is typically treated as an ugly number.

#include<stdio.h>
int main(){
	int input=2342423424;
	int i=0, result=0;

	//exclude zero
	if(input==0){
		result=0;
	}
	//first check %2
	while(input%2==0){
		input=input/2;
	}
	//second check %3
	while(input%3==0){
		input=input/3;
	}
	//third check %5
	while(input%5==0){
		input=input/5;
	}
	//check if there are other prime factors
	if(input!=1){
		result=0;
	} else {
		result=1;
	}
	return result;
}
