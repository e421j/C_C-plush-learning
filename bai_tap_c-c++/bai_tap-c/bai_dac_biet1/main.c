#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <direct.h> 
#include <windows.h>
#include "dialogue.h"
#include <time.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    srand((unsigned)time(NULL));
    char cwd[260];

    if (_getcwd(cwd, sizeof(cwd)) != NULL)
    {
        printf("Thu muc hien tai: %s\n\n", cwd);
    }

    FILE *fp = fopen("filedoc.txt", "r");

    if (fp == NULL)
    {
        perror("Loi fopen");
        return 1;
    }

    char line[500];

   while (fgets(line, sizeof(line), fp))
{
    line[strcspn(line, "\n")] = '\0';
    if (strlen(line) == 0)
    continue;

    char *effectStr = strtok(line, "|");
    char *colorStr  = strtok(NULL, "|");
    char *speedStr  = strtok(NULL, "|");
    char *text      = strtok(NULL, "");

    if (effectStr == NULL ||colorStr == NULL || speedStr == NULL || text == NULL)
    {
        printf("Dong khong hop le!\n");
        continue;
    }

    int speed = atoi(speedStr);
    Effect effect;

    if (strcmp(effectStr, "NORMAL") == 0)
    {
        effect = EFFECT_NORMAL;
    }
    else if (strcmp(effectStr, "RANDOM") == 0)
    {
        effect = EFFECT_RANDOM;
    }
    else if (strcmp(effectStr, "UPSIDE_DOWN") == 0)
    {
        effect = EFFECT_UPSIDE_DOWN;
    }
    else
    {
        printf("Effect khong hop le: %s\n", effectStr);
        continue;
    }
    Color color = COLOR_DEFAULT;

    if (strcmp(colorStr, "WHITE") == 0)
    {
    color = COLOR_WHITE;
    }
    else if (strcmp(colorStr, "RED") == 0)
    {   
    color = COLOR_RED;
    }
    else if (strcmp(colorStr, "PURPLE") == 0)
    {
    color = COLOR_PURPLE;
    }
    else if (strcmp(colorStr, "PURPLE_WHITE") == 0)
    {
    color = COLOR_PURPLE_WHITE;
    }
else
{
    color = COLOR_DEFAULT;
}
    showDialogue(text, speed, effect, color);
}

fclose(fp);
return 0;
}