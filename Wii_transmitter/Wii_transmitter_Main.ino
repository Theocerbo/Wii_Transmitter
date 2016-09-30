#define blue_led      6
#define z_switch      3
#define c_switch      4   
#define pitch_pot     0 
#define roll_pot      1

int raw_pitch = 0;
int raw_roll = 0;


void setup() {
  //Initlizes serial communication
  Serial.begin(115200);
  Serial.print("Transmita is turning on, Jah Bless");

  //Set pin Modes
  pinMode(blue_led, OUTPUT);
  pinMode(z_switch, INPUT);
  pinMode(c_switch, INPUT);
  pinMode(pitch_pot, INPUT);
  pinMode(roll_pot, INPUT);

  //Turn blue LED on
  digitalWrite(blue_led, HIGH);

}

void loop() {

 raw_pitch = analogRead(pitch_pot);
 raw_roll = analogRead(roll_pot);
 Serial.print (raw_pitch);
 Serial.print ("     ");
 Serial.println (raw_roll);
  

}
