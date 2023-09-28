void pulse_generator(int frequency, int waittime, int runtime){
/*
* This function will generate a function of required frequency
* NOTE: In this case, frequency = number of pulses
* Usage: 
* Give it the frequency as first parameter 
* Vibration motor "off" time, i.e, how much should the circuit wait between pulses(waittime)
* Vibration motor "on" time, i.e, for how long should we keep the motor on (runtime)
* Multiply by 1000 for seconds. e.g: for 1 second of pulse use 1000 as value. 
*/
  for(int i = 0; i < frequency; i++){
    digitalWrite(3, HIGH);
    delay(runtime);
    digitalWrite(3, LOW);
    delay(waittime);
  }
}

int get_state(){
/*
* This is the only INCOMPLETE piece of code
* This function should use the output from our switch to assign
* a numerical value to the state
*/
  //Switches input here: 
  return 3;
}

void pick_state(int got_state){
/*
* The previous function got us a numeric value (1,2,3)
* This function uses that numeric value to assign a state to the device
* for the states, see distance_states.ino
*/
  if(got_state == 1){
    state_is_one(distance);
  }
  else if(got_state == 2){
    state_is_two(distance);
  }
  else if(got_state == 3){
    state_is_three(distance);
  }
}