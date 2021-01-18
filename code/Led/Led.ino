/*
 * 
 * 
 * 
 * 
 * 
 */

// Includes
#


// Var

int led_pin_x
int led_pin_y
int led_pin_z


// setup 
void setup() {

  Serial.begin(9600)
  pinMode(led_pin_x, OUTPUT)
  pinMode(led_pin_y, OUTPUT)
  pinMode(led_pin_z, OUTPUT)
  
}


// Main loop 
void loop() {



// basic on off for lights 
// lights operate between 8 am and 6 pm 
if (time >= 8) {
  led_state = HIGH
  digitalWrite(ledPin_x, led_state)
  digitalWrite(ledPin_y, led_state)
  digitalWrite(ledPin_z, led_state)
}

if (time <= 8) {
  led_state = LOW
  digitalWrite(ledPin_x, led_state)
  digitalWrite(ledPin_y, led_state)
  digitalWrite(ledPin_z, led_state)
}





  
  
  //


}
