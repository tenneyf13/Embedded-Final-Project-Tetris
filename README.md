# Embedded-Final-Project-Tetris

# Tetris Game on STM32

## Project Overview
This project implements the classic **Tetris** game on an STM32 microcontroller. The game is played on an LCD screen with block movements controlled via buttons or a touchscreen. Randomized block generation, timers, and interrupts are used to provide an engaging gameplay experience.

## Features
- Randomly generated Tetris blocks using the STM32's RNG (Random Number Generator).
- Blocks move, rotate, and drop based on user input from:
  - Buttons.
  - Touchscreen.
- Dynamic game state updates on the LCD screen.
- Timers for gameplay time tracking and scheduled block movements.
- Real-time scoring and game-over conditions.

## Technical Details
- **Microcontroller:** STM32
- **Peripherals Used:**
  1. **RNG:** Generates random Tetris blocks.
  2. **Timers:** Tracks game duration and controls block movement speed.
  3. **Interrupts/Schedulers:** Handles user inputs (e.g., block rotation, movement).
  4. **LCD Display:** Renders the game board and displays the score.
  5. **Buttons/Touchscreen:** Accepts player input.

## How to Play
1. **Objective:** Arrange falling blocks to form complete horizontal lines. Completed lines disappear, and you score points.
2. **Controls:**
   - **Move Blocks:** Use the left/right buttons or swipe gestures on the touchscreen.
   - **Rotate Blocks:** Press the designated rotation button or tap on the touchscreen.
   - **Drop Blocks:** Press the "down" button or swipe down on the touchscreen.
3. **Game Over:** The game ends when the blocks stack to the top of the screen.

## Project Structure
- **Source Code Files:**
  - `main.c`: Core game logic and setup.
  - `rng.c`: RNG configuration for block generation.
  - `lcd.c`: Handles LCD display updates.
  - `timers.c`: Timer configurations for gameplay timing.
  - `input.c`: Handles button and touchscreen inputs.
- **Header Files:**
  - `game.h`: Game state definitions and functions.
  - `blocks.h`: Tetris block shapes and data structures.

## Setup Instructions

### Hardware Requirements
- STM32 microcontroller.
- LCD display module compatible with the STM32.
- Pushbuttons or a touchscreen for user input.
- Development tools: STM32CubeIDE, ST-Link debugger.

### Software Setup
1. Clone the repository:
   ```bash
   git clone https://github.com/your-username/tetris-stm32.git
2. Open the project in STM32CubeIDE.
3. Build and flash the program to your STM32 board.
4. Ensure all dependencies (HAL libraries, FreeRTOS if used) are included in the project.
5. Use STM32CubeIDE to compile and flash the code onto the microcontroller.

### Credits
Developed by Francesca Tenney as part of a final project for embedded systems(ECEN 2370-010) at CU Boulder. Inspired by the original Tetris game created by Alexey Pajitnov.
