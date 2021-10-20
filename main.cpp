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

    // task that takes a long time
    std::ifstream  src("bigobject.txt", std::ios::binary);
    std::ofstream  dst("move_here/",   std::ios::binary);

    timer.pause();
    std::cout << "Time taken to sort the array: " << timer.getTime() << " ms" << std::endl;
    return 0;
}
