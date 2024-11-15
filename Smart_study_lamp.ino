const int trigPin = 9;
const int echoPin = 8;
#define relay 4

long duration;
int distance;
int safetyDistance;
void setup() {

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(relay, OUTPUT);
  Serial.begin(9600);
}
void loop() {

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
               
  duration = pulseIn(echoPin, HIGH);

  distance = duration * 0.034 / 2;
  safetyDistance = distance;
  if (safetyDistance <= 100) 
  {
    digitalWrite(relay, HIGH);
    delay(3000);
  }
  else {
    digitalWrite(relay, LOW);
  }
  Serial.print("Distance: ");
  Serial.println(distance);
  delay(100);  // Short delay before the next loop iteration
  
}
