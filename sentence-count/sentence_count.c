#include "sentence_count.h"
#include <stdio.h>
#define MAX_CHARS_PER_LINE 100

void sentence_count(char* input_file_name, char* output_file_name){
    char ch;
    //char inputLine[MAX_CHARS_PER_LINE + 1];
    //int cursor;
    int questions;
    int statements;
    int exclamations;
    int total;
    char* inFile = input_file_name;
    char* outFile = output_file_name;
    FILE *in;
    FILE *out;

    in = fopen(inFile, "r");         //open file
    questions = 0, statements = 0, exclamations = 0;                           //cursor at first char
    ch = fgetc(in);                             //input first char
    while(ch != EOF){                           //continue while file exists
        if(ch == '?'){                          //check if ?
            questions++;
        }
        if(ch == '!'){                          //check if !
            exclamations++;
        }
        if(ch == '.'){                          //check if .
            statements++;
        }
        ch = fgetc(in);                         //increment current char in file
    }
    total = questions + exclamations + statements;
    out = fopen(outFile, "w");                  //open file for output(write, not append)
    fprintf(out, "Questions: %d\n", questions);
    fprintf(out, "Statements: %d\n", statements);
    fprintf(out, "Exclamations: %d\n", exclamations);
    fprintf(out, "Total: %d\n", total);

}
