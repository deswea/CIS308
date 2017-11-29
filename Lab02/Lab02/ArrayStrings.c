/* Lab 02, Arrays and String
		Author: Desmund Weathers*/
#include <stdio.h>
#include <string.h>

//Pre-Condition Program is supposed to read in a text file 
//The program then checks for the names on each line and prints out if there is a repeated letter in the name.
int main() {
	FILE *fp;
	fopen_s(&fp,"names.txt", "r");
	if (fp == NULL) {
		printf("Error opening the file\n ");
		getchar();
		exit(0);
	}

		char names[20];
		
		while (fscanf_s(fp, "%30s", names, sizeof(names)) != EOF) {
			
			printf("Hello, %s\n", names);
			if (repeatcheck(names)) {
				printf("Yes\n");
			}
			else{
				printf("No\n");
			}
			getchar();
			}
		fclose(fp);
			
		}
		//Pre-Condition - Supposed to take in the given string and tell if there are any repeated characters in a word
		//Post-Condition - If the name has a repeated word it send the main function a 1 if not, a 0
		int repeatcheck(char* name) {

			int count = strlen(name);
			for (int i = 0; name[i]; i++) {
				name[i] = tolower(name[i]);
			}
			for (int i = 0; i < count; i++) {
				for (int j = i + 1; j < count; j++) {
					if (name[i] == name[j])
					{
						return 1;
						break;
					}
				}	
			}
			return 0;
		}
