#include<iostream>

int main() {
	float a[999], sum = 0;
	printf("请输入第一个加数:");
	scanf("%f", &a[0]);
	sum = sum + a[0]; 
	
	for(int i = 1; i<999; i++) {
		printf("请输入第%d个加数:", i+1);
		scanf("%f", &a[i]);
		sum += a[i];
		printf("这些数的和是%f\n", sum);
	}
    return 0;
}
