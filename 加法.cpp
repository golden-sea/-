#include<iostream>

int Add() {//将加法算法封装进函数中
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
}


int main() {
	Add();//在main函数中调用Add方法
    return 0;
}
