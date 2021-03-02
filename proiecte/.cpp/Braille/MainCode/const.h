#pragma once
#include <vector>

std::vector<std::vector<char> > l_A = {
    {'A', 'A', 'A'},
    {'A', 'A', 'A'},
    {'A', 'A', 'A'}
};
std::vector<std::vector<char> > l_B = {
    {'B', 'B', 'B'},
    {'B', 'B', 'B'},
    {'B', 'B', ' '}
};
std::vector<std::vector<char> > l_C = {
    {'C', 'C', 'C'},
    {'C', 'C', 'C'},
    {'C', ' ', ' '}
};
std::vector<std::vector<char> > l_space = {
    {' ', ' ', ' '},
    {' ', ' ', ' '},
    {' ', ' ', ' '}
};

#define INPUT_FILE "input.in"
#define OUTPUT_FILE "output.out"
#define ENABLE_SPACES_BETWEEN_LETTERS

// to disable the spaces between words, uncomment this line: 
// #undef ENABLE_SPACES_BETWEEN_LETTERS