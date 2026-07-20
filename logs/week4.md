## July 12, 2026

### Goal
- Design and print a temporary 4-servo holder that can attach four fingers
- Wire four SG90 servos to a breadboard and program them to rotate simultaneously

### What I Did
- Made a new part in Solidworks that duplicated the original single servo holder

<img width="428" height="281" alt="image" src="https://github.com/user-attachments/assets/a1aed719-cb09-4528-8b9a-c15b2a608c70" />

- Powered and controlled four SG90 servos simultaneously using an external 5V/3A wall adapter
- Test code had all four servos rotate through a 40 degree range of motion without any Arduino resets
- Servos did not experience any jitters or delays

### Next Steps
- Finish printing the four-servo holder and attach fingers
- Line up tendons through all of the fingers and attach them to the SG90 servos
- Run test code to determine minimum and maximum angles for each individual servo

## July 14, 2026

### Goal
- Line up fishing tackle and elastic band for 4 finger mechanism
- Hardcode minimum and maximum angles in Arduino

### What I Did
- Assembled all 4 fingers with an identical structure to the first finger prototype
    - Made key adjustments to hole sizes (fishing tackle hole reduced to 1.35mm diameter; elastic band hole changed to an          elliptical shape)
- 3D printed newer prototypes to ensure smooth tendon routing in the future

### Next Steps
- Power all 4 fingers using a wall wart/breadboard circuit
- Write Arduino code to have the fingers open and close simultaneously

## July 15

### Goal
- Create a functional, servo-powered 4 finger prototype that can open and close repeatedly

### What I Did
- Wired the 4 servos to the breadboard and hardcoded the individual ranges for each finger
- Wrote a simple program that has the fingers open and close on repeat

### Next Steps
- Add an additional joint on each finger to more accurately represent the human hand
- Design a more appropriate servo holder that mimics a palm structure
