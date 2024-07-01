#include<stdio.h>
#define SX 1
#define SY 1

#define GX 8
#define GY 1
void DrawMaze(void);
int map[7][10] = {
	{1,1,1,1,1,1,1,1,1,1},
	{1,0,0,0,0,0,1,0,0,1},
	{1,0,1,0,1,0,0,0,1,1},
	{1,0,0,1,0,0,0,1,0,1},
	{1,1,0,1,0,1,0,1,0,1},
	{1,0,0,0,0,1,0,0,0,1},
	{1,1,1,1,1,1,1,1,1,1}

};
#define STACKSIZE 46
int stack[STACKSIZE];
int sp = 0;

main()
{
	DrawMaze();
	susumu();
	return 0;
}
void DrawMaze(void)
{
	
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("%d ", map[i][j]);
		}
		printf("\n");
	}
	return;
}

int push(int d)
{
	if (sp >= STACKSIZE)
	{
		return -1;
	}
	stack[sp] = d;
	sp++;
	return 0;
}

int pop(int *pd)
{
	if (sp <= 0) { return -1; }
	*pd = stack[sp];
	sp--;
	stack[sp] = 0;
	return 0;
}

int susumu(int x, int y)
{
	int i;
	while (1)
	{
		map[x][y] = 1;
		if (x == GX && y == GY) { return 0; }
		

		if (map[y - 1][x] == 0) { y -=1 ; continue; }
		if (map[y + 1][x] == 0) { y += 1; continue; }
		if (map[y][x - 1] == 0) { x -= 1; continue; }
		if (map[y][x + 1] == 0) { x += 1; continue; }

	}

	return;
}