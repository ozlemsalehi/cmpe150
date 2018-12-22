#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>


//Idea is to mark the cells reachable from (0,0) by 2 at each step 

int main(void) {
	TC_BEGIN;
	

	int board[10][10];

	int i,j;

	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			scanf("%d",&board[i][j]);

		}
	}
	board[0][0]=2;
	int changed=1;
	while(changed){ //if there is still some squares that can be updated enter into loop
		changed=0;
		for(i=0;i<10;i++){
			for(j=0;j<10;j++){
				if(board[i][j]==2){
					if(i+1<10 && board[i+1][j]==0){ //if i+1>=10, it is out of boundary
						board[i+1][j]=2;
						changed=1;
					}
					if(j+1<10 && board[i][j+1]==0){
						board[i][j+1]=2;
						changed=1;
					}
					if(i-1>-1 && board[i-1][j]==0){
						board[i-1][j]=2;
						changed=1;
					}
					if(j-1>-1 && board[i][j-1]==0){
						board[i][j-1]=2;
						changed=1;
					}
				}
			}
		}
	}

	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			printf("%d",board[i][j]);

		}
		printf("\n");
	}

	if(board[9][9]==2)
		printf("yes");
	else
		printf("no");

	TC_END;
	return 0;
}
