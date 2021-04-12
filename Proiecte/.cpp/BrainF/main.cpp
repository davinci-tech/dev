#include <bits/stdc++.h>
#include "const.h"

FILE *fin = fopen(__INPUT_FILE_NAME__, "r");
FILE *fout = fopen(__OUTPUT_FILE_NAME__, "w");

// NOTE: This program can cause a segmentation fault because the content of the input file is stored inside a std::string
// A better version of this program could use JUST files ( 
//	FILE* fin = fopen("filename", "r");
// 	/* some operations */
// 	auto tempPos = ftell(fin);
// 	fsetpos(fin, &tempPos);
//	/* this will move the cursor to a wanted position (like the position of an opened bracket ( *[* ) or any other kind of symbol ) */ 
//	/* NOTE: The code described early (FILE* fin .... fsetpos(fin, &tempPos);) was NOT tested */
// )
// NOTE: for a better version take a look at https://blog.aaronlenoir.com/2019/09/25/brainf-interpreter-optimization-excercise-part-4/

std::string fileToString(std::string file)
{
    FILE *fin = fopen(file.c_str(), "r");
    std::string result;
    char temp;
    do
    {
        temp = fgetc(fin);
        result += temp;
    } while (temp != EOF);

    return result;
}

int main(int argc, char **argv, char **env)
{
    /// the current character
    char cchar;

    /// the content of the file
    std::string content = fileToString(__INPUT_FILE_NAME__);

    /// the stack in which we'll store the positions of the *[* symbol
    std::stack<size_t> LBposarr;

    /// the memory of our program
    int memory[__MEMORY_SIZE__];
    memset(memory, 0, 3000 * sizeof(int));

    /// the pointer to the current address in the memory of the program
    int *caddr = memory;

    for (size_t i = 0; i < content.size(); i++)
    {
        /// read the first character from the stream and verify if it is the and of it
        cchar = content[i];

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
            if (*caddr == 0)
            {
                int matcher = -1;
                do
                {
                    cchar = content[i++];
                    if (cchar == '[')
                        matcher--;
                    else if (cchar == ']')
                        matcher++;
                } while (matcher != 0);
            }
            else
            {
                LBposarr.push(i);
            }
            break;
        case ']':
            if (*caddr != 0)
            {
                i = LBposarr.top();
                cchar = content[i];
            }
            else 
            {
                LBposarr.pop();
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
            break;
            // default:
            //     continue;
        }
    }
    return 0;
}