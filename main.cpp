#include <iostream>
#include "csrlib.h"
#include "csrtimer.h"
#include "csrprompt.h"
#include <algorithm>
#include <fstream>


int main()
{
    csr::util::Timer<csr::args::TTS::ms> timer;

    timer.resume();
    
    std::ifstream  src("bigobject.txt", std::ios::binary);
    std::ofstream  dst("move_here/here.txt",   std::ios::binary);

    dst << src.rdbuf();

    timer.pause();

    dst.close();
    src.close();

    std::cout << "Time taken to move the file " << timer.getTime() << " ms" << std::endl;
    return 0;
}
