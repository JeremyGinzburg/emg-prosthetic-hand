## July 6, 2026

### Goal
- Replace string with fishing tackle
- Wire SG90 servo to the Arduino Uno

### What I Did
- Reprinted the fingertip and middle portion of the finger with smaller holes for the fishing tackle (see Fingertip (2) in /cad)
- Weaved the fishing tackle and reassembled the finger
- Wired the SG90 servo the Arduino Uno and wrote simple servo sweep code (see /firmware)

### Next Steps
- Tie the other end of the fishing tackle to the servo horn
- Upload the code and see if the servo can bend and unbend the finger

## July 7, 2026

### Goal
- Achieve servo-powered finger actuation

### What I Did
- Held the servo and finger in place while the servo rotated
- Observed successful finger actuation (see video in /docs)

### Next Steps
- Add a small mounting area to screw the SG90 servo in place

## July 8, 2026

### Goal
- Refine SG90 case and include a screw hole so it can be mounted

### What I Did
- Successfully redesigned the servo case to allow for the SG90 servo to be screwed in place
- Added a hole for the servo wires to go through
- Went through three iterations of Solidworks modeling and 3D printed iterations to ensure optimal placement

<img width="141" height="284" alt="image" src="https://github.com/user-attachments/assets/40969a02-c7f9-4bb1-9475-474eb0091794" />

### Next Steps
- Practice coding in Arduino for controlling the extent that the finger is bent, rather then just having a servo sweep

## July 9, 2026

### Goal
- Write a program in Arduino that allows the user to input how much the finger should bend

### What I Did
- Used Arduino IDE to create a program allowing the user to input a number into the Serial Monitor that corresponds to the finger flexion (see Servo_Angle_Input in /firmware)
- Coded minimum and maximum values to ensure that there isn't slack or too much tension in the fishing tackle
- Wrote another program that has the finger continuously bend and unbend between the minimum and maximum values (see Continuous_Finger_Flexion in /docs)

### Next Steps
- Create a larger base in Solidworks to accomodate 3 additional fingers
- Map out circuit for a design with four fingers

## July 10, 2026

### Goal
- Design the circuit for the four finger mechanism in TinkerCad and roughly map out the wiring

### What I Did
- Created a circuit design and wrote code in TinkerCad to simulate running four servos simultaneously

https://github.com/user-attachments/assets/952dc470-4419-4437-9e56-5fa9d18c7a48

- Ordered necessary electrical parts to create this circuit (breadboard, wall wart, barrel jack screw terminal adapter)

### Next Steps
- Design a temporary base that can hold four SG90 servos and can attach the middle portion of the finger

## July 11, 2026

### Goal

