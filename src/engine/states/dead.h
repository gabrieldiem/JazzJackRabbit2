
#ifndef JAZZJACKRABBIT_DEAD_H
#define JAZZJACKRABBIT_DEAD_H

#include "base_state.h"

class Dead : public BaseState {

public:
  bool can_move() override;
};

#endif // JAZZJACKRABBIT_DEAD_H
