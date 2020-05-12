int led1 =  8;
int led2 = 9;
int led3 = 10;
int led4 = 11;
int led5 = 12;
int led6 = 13;
int sw = 0;
int count = 0;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);  
  pinMode(sw, INPUT);
}

void loop() {
  if(digitalRead(sw)){
    while(digitalRead(sw)); 
    int leds[7] = {led6, led1, led2, led3, led4, led5, led6};
    int ledNo = (count % 6) + 1;
    int turnedOffLED = leds[ledNo - 1];
    int turnedOnLED = leds[ledNo];
    digitalWrite(turnedOffLED, LOW);
    digitalWrite(turnedOnLED, HIGH);
    count++;
  };
}


//void blinkLED(int pinNo, long int delayTime){
//  digitalWrite(pinNo, HIGH);
//  delay(delayTime);
//  digitalWrite(pinNo, LOW);
//  delay(delayTime);
//}
//
//
