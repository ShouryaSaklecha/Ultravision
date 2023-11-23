# Ultravision
Ultrasonic Headband Project: ENGG3060 UNSW

This device was designed for John Lee, a person with vision and hearing impairment. We worked with him over six months to design an assistive technology that can detect an object using an ultrasonic sensor, and send haptic feedback indicating this distance by designing a custom pulse algorithm calibrated for John.

Files:

1. Main File: 
Contains the board initialization and the main loop that runs endlessly. Sets up the sensors and motors and sends a pulse sequence to convey successful setup. 

2. Algorithm_setup: 
Contains code that helps the control flow of the device. Gets data from switches and sets the state of the device (1m, 2m, 3m). Also contains a function you can use to create your own pulse. 

3. distance_states: 
Contains all the states and what the device should do when in a particular state.

4. 3060 PCB: All the PCB files with BOM for the project: 

<img width="630" alt="Screenshot 2023-11-23 at 22 46 05" src="https://github.com/ShouryaSaklecha/ultravision/assets/65444247/0c36f3bb-7009-4d8f-af4e-3f8fec7e9418">


Apart from this, you will need: 
1. HCSR04 sensor
2. 9V Battery
3. Vibration motor (10mm)
4. And off course, an Arduino Nano!

**Updating Distances:** The program has been optimized to easily change the distance states. Locate the macros on top on the code labelled:
const int state_1_distance, state_2_distance, state_3_distance. Change their values to your desired value in cm. 
