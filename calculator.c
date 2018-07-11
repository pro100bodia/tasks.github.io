#include<iostream>

int addition(int x1, int x2){
	return x1 + x2;
}

int multiplication() {
	return x1 * x2;
}

int main(){
	int x1, x2;
	printf("Input two figers: ");
	scanf("%d %d", &x1, &x2);
	int d = addition(x1, x2);
	int d = multiplication(x1, x2);
	printf("%d", d);
	return 0;
}