#include <stdio.h>
#include <stdlib.h>
/* 
�ռ��g�@�{���A��X�@����ư}�C��������ȫ᪺�̤j�ȩM�̤p�Ȥ��M(���D 9.8)
��J�����G
�� 1 �榹��ư}�C������ 2��n��10
�� 2 �欰 n �Өϥ� int ��ƫ��A�����
��X�����G
�� 3 �欰��X max{|a1|,|a2|,|a3|,�K,|an|} + min{|a1|,|a2|,|a3|,�K,|an|}�C
�d�ҡG
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
