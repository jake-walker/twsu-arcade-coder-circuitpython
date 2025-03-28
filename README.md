# Arcade Coder CircuitPython

A custom CircuitPython build for the [Tech Will Save Us](https://en.wikipedia.org/wiki/Technology_Will_Save_Us) Arcade Coder. The custom build will eventually contain a C-based API for managing the LED matrix and inputs which will be more speedy than doing it in pure Python. At the moment you get a fancy board name and better named pins.

More information about the Arcade Coder is available [here](https://github.com/padraigfl/awesome-arcade-coder/wiki).

## Usage

The firmware is built on GitHub Actions for every push to main. You can download the bin through the pipeline artifacts. Once more progress has been made I'll add a release with a known good version.

```bash
# erase flash
esptool.py -p [port] erase_flash

# write the firmware to flash
esptool.py -p [port] write_flash -z 0x0 firmware.bin
```

## Todo

- [ ] Add C library for controlling peripherals
  - [ ] Writing LED Matrix
  - [ ] Reading button matrix
  - [ ] Reading home button?
  - [ ] Reading battery voltage, etc...
- [ ] Documentation for board specific functions

## Contributing

Pull requests are welcome. <!-- For major changes, please open an issue first to discuss what you would like to change. -->

## License

[MIT](https://choosealicense.com/licenses/mit/)
