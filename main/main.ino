const int trigPin = 4;
const int echoPin = 5;
const int state_1 = 20;
const int state_2 = 60;
const int state_3 = 600;
const int switchPin1 = 7;
const int switchPin2 = 8;
const int switchPin3 = 9;
long duration;
int distance;

void pulse_generator(int frequency, int waittime, int runtime); // Create a custom pulse of your design
int get_state(); // Get state from the switches
void state_is_one(int distance); // Function for when switch is at 1m
void state_is_two(int distance); // Function for when switch is at 2m
void state_is_three(int distance); // Function for when switch is at 3m
void pick_state(int got_state); // Allows the board to switch control to different states

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(switchPin1, INPUT);
  pinMode(switchPin2, INPUT);
  pinMode(switchPin3, INPUT);

  // A basic sequence to indicate circuit is initialised:
  pulse_generator(1,200,200);
  pulse_generator(1,200,200);
  pulse_generator(1,200,2000); 
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034/2;
  Serial.print("Distance: ");
  Serial.println(distance);

  int got_state = get_state(); // gets a state value from switch (1,2,3)
  pick_state(got_state); // based on the state value, sets the program into the appropriate state
}
