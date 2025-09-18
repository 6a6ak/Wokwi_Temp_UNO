# Wokwi Temp UNO

This project simulates an Arduino UNO using Wokwi, focusing on temperature-related functionality. It includes source code, build artifacts, and configuration files for running and testing the simulation.

## Project Schematic

![Schema01](Schema01.png)

## Project Structure

- `temp_uno.ino`: Main Arduino sketch for the project.
- `diagram.json`: Wokwi simulation diagram describing the hardware setup.
- `wokwi.toml`: Wokwi configuration file.
- `build/`: Contains compiled binaries and build outputs.
  - `arduino.avr.uno/`: Build artifacts for the Arduino UNO target, including `.elf`, `.hex`, `.eep`, and bootloader files.
- `sample.ino.elf`, `sample.ino.hex`: Example build outputs.

## How to Use

1. **Open in Wokwi**: Use the Wokwi online simulator to open the project and run the simulation.
2. **Edit Code**: Modify `temp_uno.ino` to change the Arduino logic.
3. **Build**: Use Wokwi or Arduino IDE to compile the sketch. Build outputs are stored in the `build/arduino.avr.uno/` directory.
4. **Simulate Hardware**: The `diagram.json` file defines the hardware connections for the simulation.

## Requirements

- [Wokwi Simulator](https://wokwi.com/)
- Arduino IDE (optional, for local development)

## Files Explained

- **temp_uno.ino**: Main source code for the Arduino UNO simulation.
- **diagram.json**: Describes the hardware setup (sensors, connections, etc.).
- **wokwi.toml**: Configuration for Wokwi simulation environment.
- **build/**: Contains compiled files for flashing or simulation.

## Author

- GitHub: [6a6ak](https://github.com/6a6ak)

## License

This project is provided for educational and simulation purposes. Please check with the author for licensing details.
