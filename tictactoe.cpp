#include <iostream>
using namespace std;
int main(){
	char board[3][3]={{'#','#','#'},
	{'#','#','#'},
	{'#','#','#'}
	};
	int row,column;	
	char player='X',winner=' ';
	for(int moves=0;moves<9;moves++){
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				cout<<board[i][j]<<" ";
			}
			cout<<endl;
		}
	
		cout<<"Enter the row(1 or 2 or 3):";
		cin>>row;
		cout<<"Enter the column(1 or 2 or 3):";
		cin>>column;
		if(row<1 || row>3 || column<1 || column>3){
			cout<<"Invalid row/column!Please enter again.";
			moves--;
			continue;
		}
		if(board[row-1][column-1]=='#'){
			board[row-1][column-1]=player;
		}
		else{
			cout<<"\nInvalid Move\n";
			continue;
		}
		bool gameEnded=false;
		for(int i=0;i<3;i++){
			if(board[i][0]==player && board[i][1]==player && board[i][2]==player){
				gameEnded=true;
				winner=player;
				break;
			}
		}
		if(gameEnded){
			break;
		}
		for(int i=0;i<3;i++){
			if(board[0][i]==player && board[1][i]==player && board[2][i]==player){
				gameEnded=true;
				winner=player;
				break;
			}
		}
		if(gameEnded){
			break;
		}
		if(board[0][0]==player && board[1][1]==player && board[2][2]==player || board[0][2]==player && board[1][1]==player && board[2][0]==player){
			gameEnded=true;
			winner=player;
			break;
		}
		if(gameEnded){
			break;
		}
		if(player=='X'){
			player='O';
		}
		else{
			player='X';
		}
	}
	if(winner=='X'){
		cout<<"\nPlayer X won!!";
	}	
	else if(winner=='O'){
		cout<<"\nPlayer O won!!";
	}
	else{
		cout<<"\nIt's a tie!!";
	}
}
