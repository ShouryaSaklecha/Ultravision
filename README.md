# ultravision
Ultrasonic Headband Project: ENGG3060

Files: 

1. Main File: 
Contains the board initialization and the main loop that runs endlessly. Sets up the sensors and motors and sends a pulse sequence to convey successful setup. 


2. Algorithm_setup: 
Contains code that helps the control flow of the device. Gets data from switches and sets the state of the device (1m, 2m, 3m). Also contains a function you can use to create your own pulse. 

3. distance_states: 
Contains all the states and what the device should do when in a particular state.

**Updating Distances:** The program has been optimised to easily change the distance states. Locate the macros on top on the code labelled 
