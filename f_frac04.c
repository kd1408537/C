#include<stdio.h>
#define sol_name 3
typedef struct
{
	char Wname[20];
	int bullet;
	float atk;
}weapon;
typedef struct
{
	char name[20];
	int hp;
	weapon wpn;
}soldier;

void SetInfo(soldier* s, char* filename);
void Display(soldier s);
main()
{
	soldier sols[sol_name];
	SetInfo(sols, "file04.txt");
	Display(sols);
}
void SetInfo(soldier* s, char* filename) {
	FILE* fp;
	fp = fopen(filename, "r");
	for (int i = 0; i < sol_name; i++)
	{
		fscanf(fp, "%s%d%s%d%f", (s + i)->name, &(s + i)->hp, (s + i)->wpn.Wname, 
			&(s + i)->wpn.bullet, (s + i)->wpn.atk);
		fclose(fp);
	}
	
}
void Display(soldier *s) {
	for (int i = 0; i < sol_name; i++)
	{
	printf("名前%s　体力%d\n武器名%s　残弾数%d　攻撃力%f",
		(s + i)->name, (s + i)->hp, (s + i)->name.Wname, 
		(s + i)->name.wpn.bullet, (s + i)->name, (s + i)->name.wpn.atk);
	}
}
