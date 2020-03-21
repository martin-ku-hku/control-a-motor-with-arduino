const int switch_1_and_2 = 12;
const int switch_3_and_4 = 13;
const int enable = 11;
const int pot = A0;

void setup(){
    pinMode(switch_1_and_2, OUTPUT);
    pinMode(switch_3_and_4, OUTPUT);
    pinMode(enable, OUTPUT);
    pinMode(pot, INPUT);
    digitalWrite(switch_1_and_2, LOW);
    digitalWrite(switch_3_and_4, HIGH);
}
 
void loop(){
    int analog_value = analogRead(pot);
    int duty = map(analog_value, 0, 1023, 0, 255);
    analogWrite(enable, duty);
    delay(500);
}
