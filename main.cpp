#include <iostream>
#include "csrlib.h"
#include "csrtimer.h"
#include "csrprompt.h"
#include <algorithm>
#include <fstream>

int main()
{
    csr::util::Timer<csr::args::TTS::ms> timer;

    std::ifstream src("bigobject.txt", std::ios::binary);
    std::ofstream dst("move_here/here.txt", std::ios::binary);

    timer.resume();

    dst << src.rdbuf();

    timer.pause();

    std::cout << "Time taken to move the file " << timer.getTime() << " ms" << std::endl;

    dst.close();
    src.close();

    return 0;
}
