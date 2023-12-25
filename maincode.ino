#define trigPin 13
#define echoPin 12
#define buzzer 6

void setup()
{ pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(buzzer, OUTPUT);
}

void loop()
{ long duration, distance;
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH);
distance = (duration/2) / 29.1;

if (distance < 100)
{
digitalWrite(buzzer, HIGH);
 delay(500);
}
 else if (distance < 80)
{
 digitalWrite(buzzer, HIGH);
 delay(300);
}
 if (distance < 60)
{
 digitalWrite(buzzer, HIGH);
 delay(100);
}
 if (distance < 50)
{
 digitalWrite(buzzer, HIGH);
 delay(50);
}
 else
{
digitalWrite(buzzer, LOW);
}
