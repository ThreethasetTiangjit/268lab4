#include <stdio.h>

int main(void) {
    int j, i, c, r;
    char ch;

    scanf(" %c %d %d", &ch, &c,&r);

    for (i = 1; i <= r; i++) {
    	for (j=1 ; j<= c; j++){
    		printf("%c", ch);
		}
		printf("\n");
        
    }

    return 0;
}