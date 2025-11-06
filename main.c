#include <stdio.h>
#include <stdlib.h>
int main(void) {
    FILE *fp;
    int ch;

    fp = fopen("sample.txt", "r");
   

    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);  
    }

    fclose(fp);
    system("PAUSE");
    return 0;
}
