// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2022 Dan Halbert for Adafruit Industries
//
// SPDX-License-Identifier: MIT

#pragma once

// Micropython setup

#define MICROPY_HW_BOARD_NAME "Tech Will Save Us Arcade Coder"
#define MICROPY_HW_MCU_NAME "ESP32"

#define CIRCUITPY_BOARD_I2C (1)
#define CIRCUITPY_BOARD_I2C_PIN              \
  {                                          \
    {                                        \
      .scl = &pin_GPIO27, .sda = &pin_GPIO26 \
    }                                        \
  }

// UART pins attached to the USB-serial converter chip
#define CIRCUITPY_CONSOLE_UART_TX (&pin_GPIO1)
#define CIRCUITPY_CONSOLE_UART_RX (&pin_GPIO3)
