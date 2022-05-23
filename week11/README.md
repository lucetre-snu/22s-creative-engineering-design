### Espressif ESP32 installing link

https://docs.espressif.com/projects/arduino-esp32/en/latest/installing.html

### Stable release link

https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json

### CP210x USB driver

https://www.silabs.com/developers/usb-to-uart-bridge-vcp-drivers

### Test ESP32 board

- `arduino-cli core list` > esp32:esp32
- `arduino-cli board listall esp32` > esp32:esp32:esp32doit-devkit-v1
- `arduino-cli core install esp32:esp32`
- ~~`arduino-cli upload -p COM6 --fqbn esp32:esp32:esp32doit-devkit-v1 ESP32_TEST`~~
