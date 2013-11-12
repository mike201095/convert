#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXBUF 1024

char buf[MAXBUF];
int w;
int h;
int b = 0;


int main(void) {

FILE * fp;

int a = atoi(buf);

int i = 1;


	if ( (fp = fopen("PGMike.pgm", "r")) == NULL ) { printf("Error, missing file"); return 1;  }
	
	while(fgets(buf, MAXBUF-1, fp) != NULL) {
	
	if (i == 5) { while ( fscanf(fp, "%s", buf) > 0  ) {
		if( b == w ) { printf("\n"); b = 0; }
		
		b++;
		
		else if( a < 8) { printf(".");  }
		else if ( a < 16 ) { printf("'");  }
		else if ( a < 24 ) { printf("^");  }
		else if ( a < 32 ) { printf("I");  }
		else if ( a < 40 ) { printf("!");  }
		else if ( a < 48 ) { printf(">");  }
		else if ( a < 56 ) { printf("~");  }
		else if ( a < 64 ) { printf("-");  }
		else if ( a < 72 ) { printf("?");  }
		else if ( a < 80 ) { printf("[");  }
		else if ( a < 88 ) { printf(")");  }
		else if ( a < 96 ) { printf("|");  }
		else if ( a < 104 ) { printf("/");  }
		else if ( a < 112 ) { printf("f");  }
		else if ( a < 120 ) { printf("r");  }
		else if ( a < 128 ) { printf("n");  }
		else if ( a < 134 ) { printf("v");  }
		else if ( a < 144 ) { printf("z");  }
		else if ( a < 152 ) { printf("Y");  }
		else if ( a < 156 ) { printf("J");  }
		else if ( a < 164 ) { printf("0");  }
		else if ( a < 172 ) { printf("Z");  }
		else if ( a < 180 ) { printf("w");  }
		else if ( a < 188 ) { printf("p");  }
		else if ( a < 194 ) { printf("b");  }
		else if ( a < 202 ) { printf("h");  }
		else if ( a < 210 ) { printf("o");  }
		else if ( a < 218 ) { printf("E");  }
		else if ( a < 226 ) { printf("#");  }
		else if ( a < 234 ) { printf("W");  }
		else if ( a < 242 ) { printf("8");  }
		else if ( a < 250 ) { printf("B");  }
		else if ( a < 258 ) { printf("$");  } b++; }
		
		}
			
	else if (i == 1) { 
		if (strncmp(buf, "P2",2) == 0) {		printf("De orginele foto is zwartwit\n"); }	
		else if (strncmp(buf, "P5",2) == 0) {	printf("Deze code is binair.\n"); printf("Helaas ondersteunen we dit nog niet.\n"); printf("Doei!\n"); return 0;}
		else { 									printf("Dit formaat wordt nog niet ondersteund.\n"); printf("Doei!\n"); } i++; }
		
	else if (i == 1) { printf("De codering is %s", buf); i++; } 
	else if (i == 2) { printf("De copyright is voor %s" , buf); i++;} 
	else if (i == 3) { sscanf(buf, "%d %d", &w, &h); printf("De pixels van de foto zijn %d x %d\n", w, h); i++;} 
	else if (i == 4) { printf("Het aantal grijstinten in deze foto zijn %s", buf); i++;} 
	else { printf("fout"); } }
		
	fclose(fp); return 0; } 
	
