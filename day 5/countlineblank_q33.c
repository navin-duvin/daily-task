//33. C Program to Count Lines,Blank Lines,Comments in File

#include <stdio.h> 

int main(){

    int line_count = 0, lines = 0, blank = 0, spaces = 0, comment = 0;
    FILE *fp;
    char ch;
    fp = fopen("test.c", "r");
    while ((ch = fgetc(fp))! = EOF){
        if (ch  ==  '\n')
        {
            line_count++;

        }
        if (ch  ==  '\n'){
            if ((ch = fgetc(fp))  ==  '\n'){
                fseek(fp, -1, 1);
                spaces++;
            }

        }
        if (ch  ==  ';')
        {
            if ((ch = fgetc(fp))  ==  '\n')

            {

                fseek(fp, -1, 1);
                comment++;

            }

        }

    }

    fseek(fp, 0, 0);
    while ((ch = fgetc(fp))! = EOF){
        if (ch  ==  '/'){

            if ((ch = fgetc(fp))  ==  '/'){
                lines++;
            }
        }
    }

    printf("Total no of lines: %d\n", line_count);
    printf("Total no of comment line: %d\n", lines);
    printf("Total no of blank lines: %d\n", spaces);
    printf("Total no of non blank lines: %d\n", line_count-spaces);
    printf("Total no of lines end with semicolon: %d\n", comment);
    return 0;
}