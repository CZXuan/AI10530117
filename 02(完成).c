#include <stdio.h>
#include <stdlib.h>
/* 
試撰寫一程式，找出一維整數陣列元素絕對值後的最大值和最小值之和(習題 9.8)
輸入說明：
第 1 行此整數陣列的長度 2≦n≦10
第 2 行為 n 個使用 int 資料型態的整數
輸出說明：
第 3 行為輸出 max{|a1|,|a2|,|a3|,…,|an|} + min{|a1|,|a2|,|a3|,…,|an|}。
範例：
5�p
0��-1��-2147483648��-2147483648��-1526240�p
2147483648
*/ 
int main() {
	int a,i=0;
	int A[a];
	long long B[a],max,min,sum;
	scanf("%d",&a);
	fflush(stdin);
	if((2<=a)&&(a<=10)){
		for(i=0;i<a;i++){
			scanf("%d",&A[i]);
			B[i]=A[i];
			if(B[i]<0){
				B[i]=B[i]*-1;
			}
		
		}
		/*for(i=0;i<a;i++){
			A[i]==abs(A[i]);
		}*/
		max=B[0];
		min=B[0];
		for(i=1;i<a;i++){
			if(B[i]>max){
				max=B[i];
				
			}
			if(B[i]<min){
				min=B[i];
				
			}
			
		}
		sum=min+max;
		//printf("%lld\n",max);
		//printf("%lld\n",min);
		printf("%lld",sum);	
		
	}
	
}
