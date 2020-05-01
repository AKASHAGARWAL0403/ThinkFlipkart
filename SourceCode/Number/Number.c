#include<stdio.h>
#include<math.h>

int add(int a , int b){
	//Added in bugFix branch
	int result = 0;
	result = a + b;
	return result;
}

int sub(int a, int b){
	//Added in bugFix branch
	int result = 0;
	result = a-b;
	return result;
}

//Added in testing branch
int mul(int a , int b){
	return a*b;
}

int div(int a , int b){
	return a/b;
}

int mod(int a,int b){
	return a%b;
}
