#include <stdio.h>

int main(void){
	int score,i,n;
	scanf("%d",&n);
	
	for (i=0;i<=n;i++){
		scanf("%d",&score);
		
		if(score>=0&&score<=100){
			if (score>= 68){
				if (score>=80)
					printf("%d(A)\n",score);
				else if(score>=75)
					printf("%d(B)\n",score);
				else
					printf("%d(C)\n",score);		
			}
			else {
				if (score>=55)
					printf("%d(D)\n",score);
				else
					printf("%d(F)\n",score);
			}
		}
		else
			printf("error score");
	}
	return 0;
	
}