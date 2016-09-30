#define blue_led      6
#define ZSWITCH       3
#define CSWITCH       4   
#define pitch_pot     0 
#define roll_pot      1

int raw_pitch = 0;
int raw_roll  = 0;
int z_switch ;
int c_switch ;
int paired_flag = false;


void setup() {
  //Initlizes serial communication
  Serial.begin(115200);
  Serial.print("Transmita is turning on, Jah Bless");

  //Set pin Modes
  pinMode(blue_led, OUTPUT);
  pinMode(ZSWITCH, INPUT);
  pinMode(CSWITCH, INPUT);
  pinMode(pitch_pot, INPUT);
  pinMode(roll_pot, INPUT);

  //Turn blue LED on
  //digitalWrite(blue_led, HIGH);

}

void loop() {
  
  if (paired_flag == false) {
    WAITING_FOR_PAIRING();
  }
  else {
    REMOTE_PAIRED();
  }

 raw_pitch = analogRead(pitch_pot);
 raw_roll = analogRead(roll_pot);
 Serial.print (raw_pitch);
 Serial.print ("     ");
 Serial.println (raw_roll);

 c_switch = digitalRead(CSWITCH);
 z_switch = digitalRead(ZSWITCH);
 //Serial.print (c_switch);
 //Serial.print ("     ");
 //Serial.println (z_switch);
  

}
