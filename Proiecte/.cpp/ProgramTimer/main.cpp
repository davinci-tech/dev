// This is not a perfect code
// For example, when you press Ctrl+C, it is stopped with your main program

#include <chrono>
#include <string>
#include <iostream>
#include <cstdlib>

int main(int argc, char **argv, char **env)
{
    if (argc == 1)
        std::cerr << "You need to provide a file to be runned as an argument\n";

    std::chrono::time_point<std::chrono::high_resolution_clock> startTImepoint = std::chrono::high_resolution_clock::now();
    std::chrono::time_point<std::chrono::high_resolution_clock> endTimepoint;

    int returnVal = system(argv[1]);

    endTimepoint = std::chrono::high_resolution_clock::now();
    std::chrono::microseconds::rep start = std::chrono::time_point_cast <std::chrono::microseconds>(startTImepoint).time_since_epoch().count();
    std::chrono::microseconds::rep end = std::chrono::time_point_cast <std::chrono::microseconds>(endTimepoint).time_since_epoch().count();
    std::chrono::microseconds::rep duration = end - start;

    std::cout << "\nThe program runned in: " << duration << " us (" << duration * 0.001 << " ms or " << duration * 0.000001 << " s)" << '\n' 
            <<  "The program exited with the code: " << returnVal << '\n';

    return 0;
}