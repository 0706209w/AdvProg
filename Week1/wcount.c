#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* readline: read a line from standard input, return its length or 0
*/
int readline(char line[], int max)
{
	if (fgets(line, max, stdin) == NULL)
		return 0;
	else
		return strlen(line);
}

/* writeline: write line to standard output, return number of chars
written */
int writeline(const char line[])
{
	fputs(line, stdout);
	return strlen(line);
}

int main(){
	int c;
	int w = 0;
	int flag = 0;
	int l;
	char input[100];
	while(l = readline(input, 100) != 0) {
		for (c = 0; c < strlen(input); c++) {
			if ((isalpha(input[c])) && (flag == 0)){
				w++;
				flag = 1;
			} else if (!(isalpha(input[c])) && (flag == 1)){ 
				flag = 0;
			}
		}
	}
	printf("%d", w);
		
}
