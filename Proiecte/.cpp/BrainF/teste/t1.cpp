#include <fstream>
#include <stdio.h>
#include <cstring>
#include <stack>
#include "const.h"

#define _CRT_SECURE_NO_WARNINGS

FILE* fin = fopen(__INPUT_FILE_NAME__, "r");
FILE* fout = fopen(__OUTPUT_FILE_NAME__, "w");

// TODO: clean the input file (this algorithm doesn't work in code with comments)

int main(int argc, char** argv, char** env)
{
    /// the current character
    char cchar;

    /// the memory of our program
    int memory[__MEMORY_SIZE__];
    memset(memory, 0, 3000);

    /// the pointer to the current address in the memory of the program
    int* caddr = memory;

    /// the stack in which  we'll memerize the addresses of *[* symbol
    // NOTE: if we encounter a *]*, we'll pop the first element
    // NOTE: if we encounter a *[*, we'll push the address of it in the stack
    std::stack<fpos_t> LBarray;

    /// read the first character from the stream and verify if it is the and of it
    while ((cchar = fgetc(fin)) != EOF)
    {
        switch (cchar)
        {
        case '>':
            caddr++;
            break;
        case '<':
            caddr--;
            break;
        case '+':
            (*caddr)++;
            break;
        case '-':
            (*caddr)--;
            break;
        case '.':
            printf("%c", *caddr);
            break;
        case ',':
            *caddr = getc(stdin);
            break;
        case '[':
            // we find the pair of *[* symbol and execute the instruction after the pair
            if (*caddr == 0)
            {
                int matcher = -1;
                do
                {
                    // read the next character
                    cchar = fgetc(fin);

                    if (cchar == '[')
                        matcher--;
                    else if (cchar == ']')
                        matcher++;

                } while (cchar != EOF && matcher != 0);
            }
            else {
                //  we push the address of *[* in the stack
                fpos_t LBaddr;
                fgetpos(fin, &LBaddr);
                LBarray.push(LBaddr);
            }
            break;
        case ']':
            if (*caddr != 0)
            {
                fpos_t RBaddr;
                RBaddr = LBarray.top();
                LBarray.pop();
                fsetpos(fin, &RBaddr);
                cchar = fgetc(fin);
            }
            break;
        case '{':
            if (*caddr == 0)
            {
                int matcher = -1;
                do
                {
                    cchar = fgetc(fin);
                    if (cchar == '{')
                        matcher--;
                    else if (cchar == '}')
                        matcher++;
                } while (cchar != EOF && matcher != 0);
            }
            // else continue;
            break;
        case 'b':
            fprintf(stderr, "***Break***\n");
        default:
            //  fprintf(stdout, "%c", cchar);
            break;
        }
    }
    return 0;
}
