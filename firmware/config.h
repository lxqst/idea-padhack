#pragma once

// OLED (SSD1306) hängt an GP4 (SDA) / GP5 (SCL) = Hardware-I2C0 des RP2040
#define I2C_DRIVER I2CD0
#define I2C1_SDA_PIN GP4
#define I2C1_SCL_PIN GP5

// Größe des Displays: 128x64 oder 128x32 (nur eines davon aktiv lassen)
#define OLED_DISPLAY_128X64
