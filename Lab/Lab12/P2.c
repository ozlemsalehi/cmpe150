#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

int main(void) {
	TC_BEGIN;


	int board[8][8];

	int i,j;
	int rook_i,rook_j;

	for(i=0;i<8;i++){
		for(j=0;j<8;j++){
			scanf("%d",&board[i][j]);
			if(board[i][j]==8){
				rook_i=i;
				rook_j=j;
			}
		}
	}

	int dist=1;
	while(1){

		if(rook_i+dist<8 && board[rook_i+dist][rook_j]==1){
			board[rook_i+dist][rook_j]=8;
			break;
		}


		else if(rook_i-dist>=0 && board[rook_i-dist][rook_j]==1){
			board[rook_i-dist][rook_j]=8;
			break;
		}


		else if(rook_j-dist>=0 && board[rook_i][rook_j-dist]==1){
			board[rook_i][rook_j-dist]=8;
			break;
		}


		else if(rook_j+dist<8 && board[rook_i][rook_j+dist]==1){
			board[rook_i][rook_j+dist]=8;
			break;
		}


		dist++;
	}


	board[rook_i][rook_j]=0;

	for(i=0;i<8;i++){
		for(j=0;j<8;j++){
			printf("%d",board[i][j]);
		}
		printf("\n");
	}
	TC_END;
	return 0;
}
