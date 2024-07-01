#include<stdio.h>
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
	soldier sol;
	SetInfo(&sol, "file03.txt");
	Display(sol);

}
void SetInfo(soldier* s, char* filename) {
	FILE* fp;
	fp = fopen(filename, "r");
	fscanf(fp, "%s%d%s%d%f",s->name,&s->hp,s->wpn.Wname,&s->wpn.bullet,&s->wpn.atk);
	fclose(fp);
}
void Display(soldier s) {
	printf("名前%s　体力%d\n武器名%s　残弾数%d　攻撃力%f",
		s.name, s.hp, s.wpn.Wname, s.wpn.bullet, s.wpn.atk);
}
