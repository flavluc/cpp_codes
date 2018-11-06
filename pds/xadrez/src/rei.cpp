#include "rei.h"

Rei::Rei(int x, int y) : Peca("♔", x, y) {}

bool Rei::pode_mover(int x, int y){
  return (x+y < 3 && x+y > -3) && this->valida_movimento(x, y);
}