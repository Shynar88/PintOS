#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(int a, char** b){
    if (b[a] == NULL)
        printf("iugfiuwbfqerg\n");
    char s[30] = "a b c grep foo bar";
    char **argv = (char **) malloc(20*sizeof(char *));
    // argv = (char **) calloc(strlen(s)+1, sizeof(char));
    if (argv == NULL){
	printf("NULL\n");
	return -1;
    }
    int argc = 0;
    char *arg;
    char *left;
    printf("s: %x\n", s);
    for (arg = strtok_r(s, " ", &left); arg!=NULL;
	arg = strtok_r(NULL, " ", &left)){
	    argv[argc++] = arg;
    }
    printf("argc: %d\n", argc);
    int i;
    //printf("argv: %x\n", argv);
    //printf("sizeof argv0: %d\n", sizeof(argv[0]));
    //printf("argv0: %x\n", argv[0]);
    for (i = 0 ; i < argc; i++)
	printf("%s\n", argv[i]);
    if (argv[argc] ==  NULL)
	printf("Yes\n");
    //printf("argv argc: %s\n", argv[argc]);
    free(argv);    
    //printf("%s\n", argv);
}
