#ifndef ANIMATION_STATE_H
#define ANIMATION_STATE_H

#include "../renderable.h"
#include "./graphic_engine.h"
#include <SDL2pp/SDL2pp.hh>

class AnimationState {
private:
  GraphicEngine &graphicEngine;
  SDL2pp::Renderer &sdlRenderer;
  // cppcheck-suppress unusedStructMember
  int currentFrame;
  // cppcheck-suppress unusedStructMember
  uint8_t spriteCode;
  // cppcheck-suppress unusedStructMember
  Sprite *sprite;

public:
  explicit AnimationState(GraphicEngine &graphicEngine,
                          const uint8_t &spriteCode, Sprite *sprite);

  void render(int iterationNumber, const Coordinates &coords);

  void renderFromLeftCorner(int iterationNumber, const Coordinates &leftCorner,
                            const Coordinates &currentCoords);
};

#endif // ANIMATION_STATE_H
