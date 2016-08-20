#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *get_str(unsigned int len){
    char *p = (char*)malloc(sizeof(char)*len);    
    memset(p, 'a', len);
    return p;
}


int main(){
    char *str;

    str = get_str(7);
    printf("my string: %s\n", str);

    return 0;
}
