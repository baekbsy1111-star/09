#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fp;               
    char word[30];           
    int i;  

    fp = fopen("sample.txt", "w");  
    

    for (i = 0; i < 3; i++) {
        printf("input a word: ");
        scanf("%s", word);
        fprintf(fp, "%s\n", word);  
    }

    fclose(fp); 
    system("PAUSE");
    return 0;
}
