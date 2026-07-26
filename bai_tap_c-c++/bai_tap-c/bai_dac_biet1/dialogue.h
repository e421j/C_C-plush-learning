#ifndef DIALOGUE_H
#define DIALOGUE_H

#include "effect.h"

// Các hiệu ứng hiển thị
typedef enum
{
    EFFECT_NORMAL,       // Hiển thị bình thường
    EFFECT_RANDOM,       // Random Reveal
    EFFECT_UPSIDE_DOWN   // Chữ upside-down
} Effect;

// Hiển thị một câu thoại
void showDialogue(const char *text,
                  int speed,
                  Effect effect,
                  Color color);

#endif