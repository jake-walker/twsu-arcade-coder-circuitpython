// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2020 Scott Shawcroft for Adafruit Industries
//
// SPDX-License-Identifier: MIT

#include "shared-bindings/board/__init__.h"

static const mp_rom_map_elem_t board_module_globals_table[] = {
    CIRCUITPYTHON_BOARD_DICT_STANDARD_ITEMS

    // Arcade Coder specific
    {MP_ROM_QSTR(MP_QSTR_LED_BLUE), MP_ROM_PTR(&pin_GPIO22)},
    {MP_ROM_QSTR(MP_QSTR_LED_RED), MP_ROM_PTR(&pin_GPIO23)},
    {MP_ROM_QSTR(MP_QSTR_BUTTON_HOME), MP_ROM_PTR(&pin_GPIO2)},

    {MP_ROM_QSTR(MP_QSTR_HC595_DATA), MP_ROM_PTR(&pin_GPIO5)},
    {MP_ROM_QSTR(MP_QSTR_HC595_CLOCK), MP_ROM_PTR(&pin_GPIO17)},
    {MP_ROM_QSTR(MP_QSTR_HC595_LATCH), MP_ROM_PTR(&pin_GPIO16)},
    {MP_ROM_QSTR(MP_QSTR_HC595_ENABLE), MP_ROM_PTR(&pin_GPIO4)},
    {MP_ROM_QSTR(MP_QSTR_ICN_A0), MP_ROM_PTR(&pin_GPIO19)},
    {MP_ROM_QSTR(MP_QSTR_ICN_A1), MP_ROM_PTR(&pin_GPIO18)},
    {MP_ROM_QSTR(MP_QSTR_ICN_A2), MP_ROM_PTR(&pin_GPIO21)},

    {MP_ROM_QSTR(MP_QSTR_BTN_ROW_6_12), MP_ROM_PTR(&pin_GPIO32)},
    {MP_ROM_QSTR(MP_QSTR_BTN_ROW_5_11), MP_ROM_PTR(&pin_GPIO33)},
    {MP_ROM_QSTR(MP_QSTR_BTN_ROW_4_10), MP_ROM_PTR(&pin_GPIO34)},
    {MP_ROM_QSTR(MP_QSTR_BTN_ROW_3_9), MP_ROM_PTR(&pin_GPIO35)},
    {MP_ROM_QSTR(MP_QSTR_BTN_ROW_2_8), MP_ROM_PTR(&pin_GPIO36)},
    {MP_ROM_QSTR(MP_QSTR_BTN_ROW_1_7), MP_ROM_PTR(&pin_GPIO39)},

    // Generic/Unknown
    {MP_ROM_QSTR(MP_QSTR_IO0), MP_ROM_PTR(&pin_GPIO0)},
    {MP_ROM_QSTR(MP_QSTR_IO1), MP_ROM_PTR(&pin_GPIO1)}, // Serial
    {MP_ROM_QSTR(MP_QSTR_IO2), MP_ROM_PTR(&pin_GPIO2)}, // Home Button
    {MP_ROM_QSTR(MP_QSTR_IO3), MP_ROM_PTR(&pin_GPIO3)}, // Serial
    {MP_ROM_QSTR(MP_QSTR_IO4), MP_ROM_PTR(&pin_GPIO4)}, // HC595 Enable
    {MP_ROM_QSTR(MP_QSTR_IO5), MP_ROM_PTR(&pin_GPIO5)}, // HC595 Data
    {MP_ROM_QSTR(MP_QSTR_IO6), MP_ROM_PTR(&pin_GPIO6)},
    {MP_ROM_QSTR(MP_QSTR_IO7), MP_ROM_PTR(&pin_GPIO7)},
    {MP_ROM_QSTR(MP_QSTR_IO8), MP_ROM_PTR(&pin_GPIO8)},
    {MP_ROM_QSTR(MP_QSTR_IO9), MP_ROM_PTR(&pin_GPIO9)},
    {MP_ROM_QSTR(MP_QSTR_IO10), MP_ROM_PTR(&pin_GPIO10)},
    {MP_ROM_QSTR(MP_QSTR_IO11), MP_ROM_PTR(&pin_GPIO11)},
    {MP_ROM_QSTR(MP_QSTR_IO12), MP_ROM_PTR(&pin_GPIO12)}, // Unknown / NC
    {MP_ROM_QSTR(MP_QSTR_IO13), MP_ROM_PTR(&pin_GPIO13)}, // Unknown / NC
    {MP_ROM_QSTR(MP_QSTR_IO14), MP_ROM_PTR(&pin_GPIO14)}, // Unknown / NC
    {MP_ROM_QSTR(MP_QSTR_IO15), MP_ROM_PTR(&pin_GPIO15)}, // Unknown / NC
    {MP_ROM_QSTR(MP_QSTR_IO16), MP_ROM_PTR(&pin_GPIO16)}, // HC595 Latch
    {MP_ROM_QSTR(MP_QSTR_IO17), MP_ROM_PTR(&pin_GPIO17)}, // HC595 Clock
    {MP_ROM_QSTR(MP_QSTR_IO18), MP_ROM_PTR(&pin_GPIO18)}, // ICN A1
    {MP_ROM_QSTR(MP_QSTR_IO19), MP_ROM_PTR(&pin_GPIO19)}, // ICN A0
    {MP_ROM_QSTR(MP_QSTR_IO21), MP_ROM_PTR(&pin_GPIO21)}, // ICN A2
    {MP_ROM_QSTR(MP_QSTR_IO22), MP_ROM_PTR(&pin_GPIO22)}, // Status LED
    {MP_ROM_QSTR(MP_QSTR_IO23), MP_ROM_PTR(&pin_GPIO23)}, // Status LED
    {MP_ROM_QSTR(MP_QSTR_IO25), MP_ROM_PTR(&pin_GPIO25)}, // Unknown / NC
    {MP_ROM_QSTR(MP_QSTR_IO26), MP_ROM_PTR(&pin_GPIO26)}, // I2C?
    {MP_ROM_QSTR(MP_QSTR_IO27), MP_ROM_PTR(&pin_GPIO27)}, // I2C?
    {MP_ROM_QSTR(MP_QSTR_IO32), MP_ROM_PTR(&pin_GPIO32)}, // Button Inputs
    {MP_ROM_QSTR(MP_QSTR_IO33), MP_ROM_PTR(&pin_GPIO33)}, // Button Inputs
    {MP_ROM_QSTR(MP_QSTR_IO34), MP_ROM_PTR(&pin_GPIO34)}, // Button Inputs
    {MP_ROM_QSTR(MP_QSTR_IO35), MP_ROM_PTR(&pin_GPIO35)}, // Button Inputs
    {MP_ROM_QSTR(MP_QSTR_IO36), MP_ROM_PTR(&pin_GPIO36)}, // Button Inputs
    {MP_ROM_QSTR(MP_QSTR_IO39), MP_ROM_PTR(&pin_GPIO39)}, // Button Inputs
};
MP_DEFINE_CONST_DICT(board_module_globals, board_module_globals_table);
