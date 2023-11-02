void state_is_one(int distance){
/*
* This function is for when switch is at 1m
* sends a pulse with waittime that reduces with time
* ignores other distances
*/
  if(distance <= state_1_distance){
    pulse_generator(1,distance*10,100);
  }
}

void state_is_two(int distance){
/*
* This function is for when switch is at 2m
* sends a two-pulse sequence, with time between two sequences a function of distance
* if distances is less than 1m, it shifts control to 1m state
* Automatically goes back to 2m state if distances is > 1m. 
* Ignores 3m. 
*/
  if(distance <= state_1_distance){
    state_is_one(distance);
  }
  else if(distance < state_2_distance){
    pulse_generator(2,100,100);
    delay(distance*10);
  }
}

void state_is_three(int distance){
/*
* This function is for when switch is at 3m
* sends a three-pulse sequence, with time between two sequences a function of distance
* if distances is less than 1m, it shifts control to 1m state.
* if distances is less than 2m, it shifts control to 2m state.
* Automatically goes back to 3m state if distances is > 2m. 
*/
  if(distance <= state_1_distance){
    state_is_one(distance);
  }
  else if(distance <= state_2_distance && distance > state_1_distance){
    state_is_two(distance);
  }
  else if(distance < state_3_distance){
    pulse_generator(3,100,100);
    delay(distance*10);
  }
}