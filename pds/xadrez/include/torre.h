#ifndef TORRE_H
#define TORRE_H

#include "peca.h"

class Torre : public Peca{

  public:
    Torre(int x, int y);
    virtual bool pode_mover(int x, int y);
};

#endif