#include <stdio.h>
#include <string.h>


#define WordSize 100

int main()
{
	
	FILE *in = fopen("input.txt","r");

	
	
	char word[WordSize];

	fscanf(in,"%s",word);

	while (word[0] != '*'){
		
		char LettertoCheck = tolower(word[0]), check;
		int answer = 1;
			fscanf(in,"%c",&check);
			while (check != '\n'){
				fscanf(in,"%s",word);
				if ( tolower(word[0]) != LettertoCheck )
						answer = 0;
		
				fscanf(in,"%c",&check);
			}

			if (answer == 1)
				printf("Y\n");
			else 
				printf("N\n");
			
		fscanf(in,"%s",word);
	}

	fclose(in);
	return 0;
}
