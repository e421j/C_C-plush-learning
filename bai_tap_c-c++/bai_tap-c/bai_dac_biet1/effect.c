#include "effect.h"

#ifdef _WIN32

#include <windows.h>

static HANDLE hConsole = NULL;

void setColor(Color color)
{
    if (hConsole == NULL)
        hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    switch (color)
    {
        case COLOR_RED:
            SetConsoleTextAttribute(hConsole, 12); // Đỏ
            break;

        case COLOR_PURPLE:
            SetConsoleTextAttribute(hConsole, 13); // Tím
            break;

        case COLOR_WHITE:
            SetConsoleTextAttribute(hConsole, 15); // Trắng sáng
            break;

        case COLOR_PURPLE_WHITE:
            // Không xử lý ở đây.
            // dialogue.c sẽ tự đổi giữa COLOR_PURPLE và COLOR_WHITE.
            break;

        default:
            SetConsoleTextAttribute(hConsole, 7); // Màu mặc định
            break;
    }
}

void resetColor()
{
    if (hConsole == NULL)
        hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hConsole, 7);
}

#else

void setColor(Color color)
{
    (void)color;
}

void resetColor()
{
}

#endif