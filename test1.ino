// Use this code to test your motor with the Arduino board:

// if you need PWM, just use the PWM outputs on the Arduino
// and instead of digitalWrite, you should use the analogWrite command

// --------------------------------------------------------------------------- Motors

// --------------------------------------------------------------------------- Setup
void setup() {

  pinMode(8,OUTPUT);
   pinMode(9,OUTPUT);
    pinMode(10,OUTPUT);
     pinMode(11,OUTPUT);
  

}

// --------------------------------------------------------------------------- Loop
void loop() {

  drive_forward();
  delay(18000);
  motor_stop();
//  lcd.print("1");

//  drive_backward();
//  delay(1000);
//  motor_stop();
//  Serial.println("2");
//
//  turn_left();
//  delay(1000);
//  motor_stop();
//  Serial.println("3");
//
//  turn_right();
//  delay(1000);
//  motor_stop();
//  Serial.println("4");

}

// --------------------------------------------------------------------------- Drive

void motor_stop() {
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);

  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
 
}

void drive_forward() {
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);

  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  delay(1000);
}

//void drive_backward() {
//  digitalWrite(motor_left[0], LOW);
//  digitalWrite(motor_left[1], HIGH);
//
//  digitalWrite(motor_right[0], LOW);
//  digitalWrite(motor_right[1], HIGH);
//}
//
//void turn_left() {
//  digitalWrite(motor_left[0], LOW);
//  digitalWrite(motor_left[1], HIGH);
//
//  digitalWrite(motor_right[0], HIGH);
//  digitalWrite(motor_right[1], LOW);
//}
//
//void turn_right() {
//  digitalWrite(motor_left[0], HIGH);
//  digitalWrite(motor_left[1], LOW);
//
//  digitalWrite(motor_right[0], LOW);
//  digitalWrite(motor_right[1], HIGH);
//}
