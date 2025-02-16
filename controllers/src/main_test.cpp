// #include <Arduino.h>
// #include <Servo.h>

// int max_angle = 180;
// // MAX_ANGLE is 180 for small servo, 270 for big servo and 300 for middle servo

// void writeCustom(Servo servo, int value, int min, int max)
// {
//     if (value < min)
//     {
//         value = min;
//     }
//     else if (value > max)
//     {
//         value = max;
//     }
//     int newValue = map(value, min, max, MIN_PULSE_WIDTH, MAX_PULSE_WIDTH);
//     servo.writeMicroseconds(newValue);
// }

// void writeSmallServo(Servo servo, int value)
// {
//     writeCustom(servo, value, 0, max_angle);
// }

// void readSmallServo(Servo servo)
// {
//     Serial.println(map(servo.readMicroseconds(), MIN_PULSE_WIDTH, MAX_PULSE_WIDTH, 0, max_angle));
// }

// Servo test2;
// Servo test3;
// Servo test4;
// Servo test5;
// Servo test6;
// Servo test7;
// Servo test8;
// const int potPin = A6; // Analog input pin A0

// /**
//  * @brief Setup function
//  */
// void setup()
// {
//     Serial.begin(9600);

//     test2.attach(2);
//     test3.attach(3);
//     test4.attach(4);
//     test5.attach(5);
//     test6.attach(6);
//     test7.attach(7);
//     test8.attach(8);

//     delay(1250);
// }

// /**
//  * @brief Loop function
//  */
// void loop()
// {
//     int potValue = analogRead(potPin); // Read the potentiometer value (0-1023)
//     int new_angle;
//     if (potValue < 376) {
//         new_angle = 180;
//     } else if (potValue < 650) {
//         new_angle = 270;
//     } else {
//         new_angle = 300;
//     }
//     if (new_angle != max_angle) {
//         max_angle = new_angle;
//         writeSmallServo(test2, 0);
//         writeSmallServo(test3, 90);
//         writeSmallServo(test4, 135);
//         writeSmallServo(test5, 150);
//         writeSmallServo(test6, 180);
//         writeSmallServo(test7, 270);
//         writeSmallServo(test8, 300);
//     }
//     delay(500);

//     //* Read the test2 servo angle
//     // Serial.println(map(test2.readMicroseconds(), MIN_PULSE_WIDTH, MAX_PULSE_WIDTH, 0, 270));

//     //* Write the test2 servo angle to test every angle
//     // for (int i = 0; i < 300; i++)
//     // {
//     //     writeSmallServo(test2, i);
//     //     Serial.print("demande ");
//     //     Serial.print(i);
//     //     Serial.print(" - a ");
//     //     Serial.println(map(test2.readMicroseconds(), MIN_PULSE_WIDTH, MAX_PULSE_WIDTH, 0, 300));
//     //     delay(50);
//     // }
//     // writeSmallServo(test2, 0);
//     // delay(1000);
// }
