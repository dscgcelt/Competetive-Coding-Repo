#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void make(int r,int c,char (*temp)[c+1]);//fills up temp with the bombs i.e. 'O' 
void detonate(int r,int c,char (*grid)[c+1],char (*temp)[c+1]);//detonates the bomb after each gap of 3 secs
void bomberMan(int n, int grid_count, char (*grid)[grid_count+1], int* result_count); // the bomberman function
void display(int r,int c,char (*grid)[c+1]);//displays the grid

void make(int r,int c,char (*temp)[c+1])
{
	int i,j;
	for(i=0;i<r;i++)
	{	
		for(j=0;j<c;j++)
			temp[i][j]='O';//filling up the r*c temp matrix by all 'O's
		temp[i][j]='\0';
	}
}
/* in the method below, the grid represents the previous stage of a matrix abd temp represents the state of the
   matrix after bomberman has filled it up with bombs,
   using the temp and the grid the detonation is done
 */
void detonate(int r,int c,char (*grid)[c+1],char (*temp)[c+1]){
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(grid[i][j]=='O')
			{
				temp[i][j]='.';
				if(j!=0)
					temp[i][j-1]='.';
				if(j!=c-1)
					temp[i][j+1]='.';
				if(i!=0)
					temp[i-1][j]='.';
				if(i!=r-1)
					temp[i+1][j]='.';
			}
		}
	}
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			grid[i][j]=temp[i][j];//copying the current grid which is formed in the temp to grid
}
				
/* below is the bomber man function.
 it is tobe noted that the bomb blasts occur as shown,
	0,1,2,3,4,5.... are time in secs.
 _______________________	_________________________	 _______________________
|			|	|			|	|			|
0	1	2	3	4	5	6	7	8	9	10	11	12	13
		|_______________________|	|_______________________|	|________________________|

*/
void bomberMan(int n, int grid_count, char (*grid)[grid_count+1], int* result_count) {
	int t1start,t1end,t2start,t2end;
	t1start=0;
	t1end=3;
	t2start=2;
	t2end=5;
	int i,c=strlen(grid[0]);
	char temp[grid_count][c+1];
	for(i=1;i<=n;i++)
	{
		if(t1start==i||t2start==i)
			make(grid_count,c,temp);
		else if(t1end==i)
		{
			detonate(grid_count,c,grid,temp);
			t1start=t1end+1;
			t1end=t1start+3;
		}
		else if(t2end==i)
		{
			detonate(grid_count,c,grid,temp);
			t2start=t2end+1;
			t2end=t2start+3;
		}
	}
	*result_count=grid_count;
}

void display(int r,int c,char (*grid)[c+1])
{
	printf("\n");
	int i,j;
	for(i=0;i<r;i++)
	{	for(j=0;j<c;j++)
		printf("%c",grid[i][j]);
		printf("\n");
	}
}
int main()
{
	int r;//the number of rows of the grid
	int c;//the number of columns of the grid
	int n;//the number of the seconds
	scanf("%d %d %d",&r,&c,&n);
	getchar();
	char (*grid)[(c+1)] =(char(*)[(c+1)]) malloc(r *(c+1)* sizeof(char));
	for (int i = 0; i < r; i++) {
		scanf("%[^\n]",*(grid + i));
		getchar();
	}
	int grid_count = r;

	int result_count;
	bomberMan(n, grid_count, grid, &result_count);
	display(r,c,grid);
	return 0;
}
