const int switch_1_and_2 = 12;
const int switch_3_and_4 = 13;
const int enable = 11;

void setup(){
    pinMode(switch_1_and_2, OUTPUT);
    pinMode(switch_3_and_4, OUTPUT);
    pinMode(enable, OUTPUT);
}
 
void loop(){
    digitalWrite(switch_1_and_2, HIGH);
    digitalWrite(switch_3_and_4, LOW);
    analogWrite(enable, 255);
    delay(2000);

    digitalWrite(switch_1_and_2, LOW);
    digitalWrite(switch_3_and_4, LOW);
    delay(1000);

    digitalWrite(switch_1_and_2, LOW);
    digitalWrite(switch_3_and_4, HIGH);
    analogWrite(enable, 255);
    delay(2000);

    digitalWrite(switch_1_and_2, LOW);
    digitalWrite(switch_3_and_4, LOW);
    delay(1000);
}
