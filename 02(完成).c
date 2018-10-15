#include <stdio.h>
#include <stdlib.h>
/* 
¸Õ¼¶¼g¤@µ{¦¡¡A§ä¥X¤@ºû¾ã¼Æ°}¦C¤¸¯Àµ´¹ï­È«áªº³Ì¤j­È©M³Ì¤p­È¤§©M(²ßÃD 9.8)
¿é¤J»¡©ú¡G
²Ä 1 ¦æ¦¹¾ã¼Æ°}¦Cªºªø«× 2¡Øn¡Ø10
²Ä 2 ¦æ¬° n ­Ó¨Ï¥Î int ¸ê®Æ«¬ºAªº¾ã¼Æ
¿é¥X»¡©ú¡G
²Ä 3 ¦æ¬°¿é¥X max{|a1|,|a2|,|a3|,¡K,|an|} + min{|a1|,|a2|,|a3|,¡K,|an|}¡C
½d¨Ò¡G
5„p
0„Ò-1„Ò-2147483648„Ò-2147483648„Ò-1526240„p
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
