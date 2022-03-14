# 22s-creative-engineering-design
창의공학설계 (2022년도, 1학기, 400.018_001)
- Lecturer: `samstack54`
  - [YouTube](https://www.youtube.com/user/samstack54/videos)
  - [GitHub](https://github.com/samstack54?tab=repositories)

### [Arduino CLI Command](https://arduino.github.io/arduino-cli/0.21/getting-started/)
1. `arduino-cli [command] help`
2. Create a configuration file \
`arduino-cli config init`
3. Create a new sketch \
`arduino-cli sketch new LED_ON`
4. Connect a board
    1. `arduino-cli core update-index`
    2. View board list \
    `arduino-cli board list`
    3. Identify unknown boards \
    `arduino-cli board listall mkr`
    4. Install the core for boards, e.g. *arduino:samd*\
    `arduino-cli core install arduino:avr`
    5. View core list \
    `arduino-cli core list`
5. Compile a sketch \
`arduino-cli compile --fqbn arduino:avr:uno LED_ON`
6. Upload a sketch \
`arduino-cli upload -p COM3 --fqbn arduino:avr:uno LED_ON`
