#include "dialogue.h"
#include <stdlib.h>
#include <time.h>
#include "effect.h"

#include <stdio.h>
#include <string.h>
static void showNormal(const char *text, int speed);
static void showRandom(
    const char *text,
    int speed,
    Color color
);
static void showUpsideDown(
    const char *text,
    int speed,
    Color color
);
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

void delay(int ms)
{
#ifdef _WIN32
    Sleep(ms);
#else
    usleep(ms * 1000);
#endif
}

//kí tự đảo ngược
const char *flip(char c)
{
    switch(c)
    {
        case 'a': return "ɐ";
        case 'b': return "q";
        case 'c': return "ɔ";
        case 'd': return "p";
        case 'e': return "ǝ";
        case 'f': return "ɟ";
        case 'g': return "ƃ";
        case 'h': return "ɥ";
        case 'i': return "ᴉ";
        case 'j': return "ɾ";
        case 'k': return "ʞ";
        case 'l': return "l";
        case 'm': return "ɯ";
        case 'n': return "u";
        case 'o': return "o";
        case 'p': return "d";
        case 'q': return "b";
        case 'r': return "ɹ";
        case 's': return "s";
        case 't': return "ʇ";
        case 'u': return "n";
        case 'v': return "ʌ";
        case 'w': return "ʍ";
        case 'x': return "x";
        case 'y': return "ʎ";
        case 'z': return "z";

        case 'A': return "∀";
        case 'B': return "𐐒";
        case 'C': return "Ɔ";
        case 'D': return "◖";
        case 'E': return "Ǝ";
        case 'F': return "Ⅎ";
        case 'G': return "פ";
        case 'H': return "H";
        case 'I': return "I";
        case 'J': return "ſ";
        case 'K': return "ʞ";
        case 'L': return "˥";
        case 'M': return "W";
        case 'N': return "N";
        case 'O': return "O";
        case 'P': return "Ԁ";
        case 'Q': return "Ό";
        case 'R': return "ᴚ";
        case 'S': return "S";
        case 'T': return "┴";
        case 'U': return "∩";
        case 'V': return "Λ";
        case 'W': return "M";
        case 'X': return "X";
        case 'Y': return "⅄";
        case 'Z': return "Z";

        default:
        {
            static char normal[2];
            normal[0] = c;
            normal[1] = '\0';
            return normal;
        }
    }
}

void showDialogue(const char *text,
                  int speed,
                  Effect effect,
                  Color color)
{
    setColor(color);

    switch(effect)
    {
        case EFFECT_NORMAL:
            showNormal(text, speed);
            break;

        case EFFECT_RANDOM:
            showRandom(text, speed, color);
            break;

        case EFFECT_UPSIDE_DOWN:
            showUpsideDown(text, speed, color);
            break;
    }

    resetColor();
}


    

static void showNormal(const char *text, int speed)
{
    for (int i = 0; text[i] != '\0'; i++)
    {
        putchar(text[i]);
        fflush(stdout);
        delay(speed);
    }

    printf("\n");
}
static void showUpsideDown(
    const char *text,
    int speed,
    Color color
)
{   
    for (int i = 0; text[i] != '\0'; i++)
    {
        if(color == COLOR_PURPLE_WHITE)
    {
        if(i % 2 == 0)
            setColor(COLOR_PURPLE);
        else
            setColor(COLOR_WHITE);
    }
        else
    {
            setColor(color);
    }

        printf("%s", flip(text[i]));
        fflush(stdout);
        delay(speed);
    }

    printf("\n");
}

static void showRandom(
    const char *text,
    int speed,
    Color color
)
{
    const char randomSet[] =
        "!@#$%^&*ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    int len = strlen(text);

    for (int i = 0; i < len; i++)
    {
        for (int k = 0; k < 5; k++)
        {
            printf("\r");

            for (int j = 0; j < len; j++)
            {
            if (j <= i)
                {
                    
                setColor(color);      // chữ thật
                putchar(text[j]);
                }
            else
                {
                resetColor();         // ký tự random
                putchar(randomSet[rand() % (sizeof(randomSet) - 1)]);
                }
            }

            fflush(stdout);

            delay(speed / 3);
        }
    }

    setColor(color);
    printf("\r%s\n", text);
    resetColor();
}