
#include <stdio.h>
#include <string.h>
#include <math.h>

main() {
	FILE *fpin,*fpout;
	int i,j,width=512,height=512;
	unsigned char	filein[20],fileout[20],I[width][height],Id[width][height];

	//read and write file
	printf("Input image filename (*.raw): ");
	gets(filein);
	printf("Output image filename (*.raw): ");
	gets(fileout);

	fpin=fopen(filein,"rb");
	fpout=fopen(fileout,"wb");

	if(NULL==fpin) {
		printf("\7\n Cannot Open file: %s \n",filein);
//		exit(1);
	}
	if(NULL==fpout) {
		printf("\7\n Cannot Open file: %s \n",fileout);
//		exit(1);
	}


	//read/write image
	// fread(I, sizeof(unsigned char), 512*512, fpin);
	for(j=0; j<height; j++) {
		for(i=0; i<width; i++) {
			// read
			I[i][j]=fgetc(fpin);

			// I -> I/3, result in a dark image
			Id[i][j]=I[i][j]/3;

			// write
			fputc(Id[i][j],fpout);
		}
	}
	// fwrite(Id, sizeof(unsigned char), 512*512, fpout);


	fclose(fpin);
	fclose(fpout);

	system("PAUSE");
}

