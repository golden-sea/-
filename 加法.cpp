#include<iostream>

int main() {
	float a[999], sum = 0;
	printf("�������һ������:");
	scanf("%f", &a[0]);
	sum = sum + a[0]; 
	
	for(int i = 1; i<999; i++) {
		printf("�������%d������:", i+1);
		scanf("%f", &a[i]);
		sum += a[i];
		printf("��Щ���ĺ���%f\n", sum);
	}
    return 0;
}
