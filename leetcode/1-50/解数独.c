bool line[9][9];
bool column[9][9];
bool block[3][3][9];
int *space[81];
int valid;
int spaceSize;

void dfs(char** board,int pos)
{
	int i,row,col;
	if(pos == spaceSize)
	{
		valid=1;
		return;
	}
	row=space[pos][0];
	col=space[pos][1];
	for(i=0;i<9&&!valid;i++)
	{
		if(line[row][i]==0 && column[col][i]==0 &&  block[row/3][col/3][i]==0)
		{
			board[row][col]='0'+i+1;
			line[row][i]=column[col][i]=block[row/3][col/3][i]=1;
			dfs(board,pos+1);
			line[row][i]=column[col][i]=block[row/3][col/3][i]=0;
		}
	}
}
void solveSudoku(char** board, int boardSize, int* boardColSize) 
{
	int i,j,digital;
	memset(line,0,sizeof(line));
	memset(column,0,sizeof(column));
	memset(block,0,sizeof(block));
	valid=0;
	spaceSize=0;
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			if(board[i][j] == '.')
			{
				space[spaceSize]=(int *)malloc(sizeof(int)*2);
				space[spaceSize][0]=i;
				space[spaceSize][1]=j;
				spaceSize++;
			}
			else
			{
				digital=board[i][j]-'0'-1;
				line[i][digital]=column[j][digital]=block[i/3][j/3][digital]=1;
			}
		}
	}
	dfs(board,0);
}
