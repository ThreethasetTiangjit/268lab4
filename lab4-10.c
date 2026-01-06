#include <stdio.h>

int main(void){
	int score,A=0,B=0,C=0,D=0,F=0;
	scanf("%d",&score);
	while (score != -1){	
		if(score>=0&&score<=100){
			if (score>= 68){
				if (score>=80){
				
					printf("%d(A)\n",score);
					A +=1;	
				}	
				else if(score>=75){
				
					printf("%d(B)\n",score);
					B +=1;
				}
				else{
				
					printf("%d(C)\n",score);	
					C +=1;	
				}
			}
			else {
				if (score>=55){
				
					printf("%d(D)\n",score);
					D +=1;
				}
				else{
				
					printf("%d(F)\n",score);
					F +=1;
				}
			}
		}
		else
			printf("error score");
			
		scanf("%d",&score);
	}
	printf("A(%d)\nB(%d)\nC(%d)\nD(%d)\nF(%d)",A,B,C,D,F);
	return 0;
	

}