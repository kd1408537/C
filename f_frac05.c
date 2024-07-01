#include<stdio.h>
#define MapNum 3
#define W 10
#define H 5
typedef struct {
	char map[H][W];
}Map;
void SetMap(char* filename, Map* m);
void DrawMap(Map m);
main()
{
	Map mapData;
	char* MapfileName[MapNum] =
	{ "map0.txt","map1.txt","map2.txt" };
	int select;
	printf("表示マップ(0　1　2)");
	scanf("%d", &select);
	SetMap(MapfileName[select], &mapData);
	DrawMap(mapData);
}

void SetMap(char* filename, Map* m)
{
	FILE* fp;
	char ch;
	int i, j;
	int count = 0;
	if (fp = fopen(filename, "r"))
	{
		for (i = 0; i < H; i++)
		{
			for (j = 0; j < W; j++)
			{
				ch = fgetc(fp);
				if (ch == '\n')
					j--;
				else
					m->map[i][j] = ch;
			}
		}
	}
	printf("%d\n", count);
}
void DrawMap(Map m)
{
	char ch;
	int i, j;
	for (i = 0; i < H; i++)
	{
		for (j = 0; j < W; j++)
		{
			if (m.map[i][j] == '1')
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
		printf("\n");
	}
}

