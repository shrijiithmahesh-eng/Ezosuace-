#include "struct.c"
#define RAM_MAX_MB 4056
void wall() {
      if (get_mem_usage() > RAM_MAX_MB) {
        exit 1;
      }else{
            stzt();
      }
int main() {
  wall();
  return 0;
}
        
