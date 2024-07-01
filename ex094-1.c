#include<stdio.h>

struct day
{
	int nen;
	int tuku;
	int hi;
};

struct profile
{
	char name[20];
	struct day birth;
	char blood[5];
};


main()
{
	struct profile pdat[5] =
	{
		{"a",{2000,2,23},"a"},
		{"b",{2000,2,23},"a"},
		{"c",{2000,4,23},"a"},
		{"d",{2000,1,23},"a"},
		{"e",{2000,3,23},"a"},
	};
	struct  profile* p;
	
	p = pdat;
	for (int j = 0; j < 5; j++)
	{

		if (p->birth.tuku==2)
		{
			printf("%s__", p->name);
			printf("%d”N%02dŒŽ%02d“ú¶‚Ü‚ê\n", p->birth.nen,
				p->birth.tuku,
				p->birth.hi);
			printf("ŒŒ‰t%sŒ^\n", p->blood);
		}
		p++;
	}

}