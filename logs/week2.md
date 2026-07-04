## June 28, 2026

### Goal
- Design channel for tendon that will allow for simple finger-bending motion

### What I Did
- Added holes in the fingertip and middle portion of the finger where an elastic band could be passed through
- Made sure the holes are lined up in assembly so the tendon doesn't have unnatural bending

<img width="299" height="339" alt="image" src="https://github.com/user-attachments/assets/ff2a9990-a2a2-4960-8322-5ae2563187d7" />
<img width="424" height="332" alt="image" src="https://github.com/user-attachments/assets/20e7844c-3e57-4230-94ea-ed3a28601223" />
<img width="200" height="238" alt="image" src="https://github.com/user-attachments/assets/cb78b072-f7ce-4830-9028-c99fdfa55fd1" />

### Next Steps
- Design base for the finger
- Research optimal methods for tendon wiring

## June 29, 2026

### Goal
- Model a simple base with screw holes to create a second degree of freedom
- 3D print all of the parts to observe joint functionality

### What I Did
- Designed a simple base that can be attached to the finger's middle portion at a joint
- 3D printed the base, middle portion, and the fingertip to see how they fit together
- Went through multiple sizing iterations to make sure that there was enough room for the joints to have a reasonable range of motion

<img width="258" height="227" alt="image" src="https://github.com/user-attachments/assets/d811d0a4-d366-4a3c-b0f1-78cf6327a801" />
<img width="229" height="281" alt="image" src="https://github.com/user-attachments/assets/a2fee849-8e54-4bcc-ba6f-0aee76fa5181" />
<img width="1920" height="1120" alt="image" src="https://github.com/user-attachments/assets/1263f2ba-4987-40d2-9797-23617454850a" />

### Next Steps
- Start adding screws and more permanent attachements for joint mechanism
- Begin attaching the tendon in the physical prototype
- Replicate the finger and attach it to a base

## July 1, 2026

### Goal
- Attach screws to 3D printed prototype to see if joint motion works
- Try weaving a string through the designated holes and see if pulling it will close the finger

### What I Did
- Tried adding screws to hold the joints in place, had to reprint with slightly larger screw holes (3mm --> 3.5mm)
- Began weaving the string through the hole and saw that the holes were too small
    - Started 3D printing with much larger holes (1.3mm --> 3mm)

### Next Steps
- Weave the rubber band into the screw holes and create a functional finger that bends when the string is pulled
- Start designing the back of the hand and replicating 3 more fingers (excluding thumb)

## July 3, 2026

### Goal
- Create a functional finger that opens when the string is pulled and closes using an elastic band

### What I Did
- Successfully weaved the string through the holes such that when the string is pulled, the finger closes
- Added a second pair of holes on the fingertip and middle pieces for the rubber band
- Attached the rubber band on the opposite side of the string and pulled the rubber band before attaching to increase tension
- Tested the finger's ability to manually open and automatically close

https://github.com/user-attachments/assets/4641aa62-4bc4-4c51-ac22-6a175d73874a

<img width="3024" height="4032" alt="Tendon-Routed Finger" src="https://github.com/user-attachments/assets/ef7c3b83-8c6d-48ce-8692-d9309728d6eb" />

### Next Steps
- Replace manual hand pulling with a servo
- Replicate for more fingers

## July 4, 2026

### Goal
- Transition to controlling finger actuation by using a servo and Arduino

### What I Did
- Decided to use SG90 microservos and an Arduino (originally was going to use Arduino Nano, switching to Arduino Uno)
- Designed a temporary servo mount that attaches to the middle portion of the finger

### Next Steps
- Write and upload test code to the servo to ensure that it works and can be programmed properly
- Switch the string in the finger to fishing line so it can be weaved into the holes within the servo horn
- Test servo-controlled actuation
