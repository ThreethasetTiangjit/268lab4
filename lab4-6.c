#include <stdio.h>

int main(void) {
    int j,i, n;
    char c;

    scanf(" %c %d", &c, &n);

    for (i = 1; i <= n; i++) {
    	for (j=1 ; j<= n; j++){
    		printf("%c", c);
		}
		printf("\n");
        
    }

    return 0;
}

#include<stdio.h>
