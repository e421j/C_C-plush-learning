#ifndef EFFECT_H
#define EFFECT_H

// Các màu hỗ trợ
typedef enum
{
    COLOR_DEFAULT,       // Màu mặc định
    COLOR_RED,           // Đỏ
    COLOR_PURPLE,        // Tím
    COLOR_WHITE,         // Trắng
    COLOR_PURPLE_WHITE   // Tím xen trắng (xử lý trong dialogue.c)
} Color;

// Đổi màu chữ
void setColor(Color color);

// Trả về màu mặc định
void resetColor(void);

#endif