#include<stdio.h>
struct profile
{
	char name[20];
	int birth[3];
	char blood[5];
};


main()
{
	struct profile pdat;
	printf("–¼‘O‚ğ“ü—Í:");
	scanf("%s", pdat.name);
	printf("¶”NŒ“ú‚ğ‹ó”’‚Å‹æØ‚Á‚Ä“ü—Í:");
	scanf("%d%d%d",& pdat.birth[0], 
					& pdat.birth[1], 
					& pdat.birth[2]);
	printf("ŒŒ‰tŒ^‚ğ“ü—Í:");
	scanf("%s", pdat.blood);

	
	printf("%s__", pdat.name);
	printf("%d”N%02dŒ%02d“ú¶‚Ü‚ê",pdat.birth[0],
					pdat.birth[1],
					pdat.birth[2]);
	printf("ŒŒ‰t%sŒ^\n", pdat.blood);
}