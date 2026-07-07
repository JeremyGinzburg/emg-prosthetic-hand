# EMG-Controlled 3D Printed Prosthetic Finger
3D-printed and EMG-controlled prosthetic hand with real-time signal processing and tendon-driven actuation. This project focuses on mechanical design, tendon routing, and iterative prototyping.

## Demo (Servo-Powered Finger Prototype)

https://github.com/user-attachments/assets/ce7d5607-2d94-4dee-b67e-697f45107c94

- Actuated motion is controlled by a servo pulling the fishing tackle, which bends the finger
- The rubber band snaps the finger back into its neutral position when tension in the fishing tackle is released

## Overview
This project aims to develop a functional prosthetic finger that is controlled by a myoelectric (EMG) control system. The current stage focuses on prototyping a mechanically reliable, tendon-driven finger with multiple degrees of freedom and smooth actuation. 

The design uses a single tendon (rubber band) to drive flexion across two joints, modeling how biological fingers operate.

## How It Works
- A tendon (fishing tackle) runs through the finger segments and is anchored at the fingertip
- An SG90 servo pulls the tendon causes the finger to curl
- An elastic return mechanism will restore the finger to its original position

## Current Design
- 3D printed fingertip, middle segment, and temporary base
- Two hinge joints held in place by M3 screws
- Internal tendon routing through hollow structures
- Tendon anchored at the fingertip
- SG90 servo powered by Arduino Uno
- Assembled and physically tested prototype

## Current Status
- CAD design implemented for full finger
- First prototype printed and assembled
- Joint motion validated
- Tendon integration and elastic return mechanism successfully implemented
- Wiring for SG90 servo and Arduino Uno completed

## Version History
- v1.0 - Initial Prototype
    - Desgined and printed finger components
    - Verified hinge joint motion
- v1.1 - Tendon Routing Improvements
    - Increased hole sizes for tendons
    - Adjusted hole placement to avoid interference with the hinge
- v1.2 - Functional Tendon-Driven Finger
    -  Implemented tendon (string) actuation
    -  Added elastic return mechanism
    -  Achieved full open-close motion across joints
    -  Demonstrates smooth flexion and passive extension
- v1.3 - Hardwired Servo-Powered Finger
    - Replaced string with fishing tackle for the tendon mechanism
    - Finger contracts by servo rotation instead of manual force
    - Observed consistent performance (50+ successful contractions with very few mechanical/electrical issues)
  
## Design Decisions
- Tendon-Driven Actuation
    - Simple, lower weight, and similar to biological mechanisms
- Reduced Degrees of Freedom
    - Each joint has one hinge degree of freedom to ensure optimal control with a single tendon
- Internal Routing
    - Tendon is routed inside the hollow finger parts to protect it from wear and maintain consistent motion

## Challenges
- Finalize tendon routing within single finger and test full actuation
- Implement return mechanism using an elastic cord
- Redesign base and integrate into full finger
- Introduce servo control
- Transition into EMG-based signals

## Repository Structure
- /cad - Solidworks files and assemblies
- /docs - Images, videos, and selected references
- /logs - Engineering logs and iteration notes
- /firmware - (future) microcontroller and EMG code

## Acknowledgements
This project builds on tendon-driven prosthetics research as well as open-source mechanical designs, adapted and simplified for a first working prototype
