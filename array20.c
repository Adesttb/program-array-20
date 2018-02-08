#include <stdio.h>

	char nm[100][100],lagi[1];
	int i=1,j;

	main()
{
	do{
	printf("Masukkan nama : ");
	scanf("%s",&nm[i]);
	i++;
	printf("\n\nInput lagi [Y/T] : ");
	scanf("%s",&lagi);
	}
	while((strcmp(lagi,"Y")==0) || (strcmp(lagi,"y")==0));
	printf("\n\n");
	for(j=1;j<=i-1;j++)
	{
		printf("Nama %d : %s\n",j,nm[j]);
	}

	return 0;
}

