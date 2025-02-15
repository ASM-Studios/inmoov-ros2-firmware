// #include <Arduino.h>
// #include <Servo.h>

// #define MAX_ANGLE 180

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
//     writeCustom(servo, value, 0, MAX_ANGLE);
// }

// void readSmallServo(Servo servo)
// {
//     Serial.println(map(servo.readMicroseconds(), MIN_PULSE_WIDTH, MAX_PULSE_WIDTH, 0, MAX_ANGLE));
// }

// Servo test2;
// Servo test3;
// Servo test4;
// Servo test5;
// Servo test6;
// Servo test7;
// Servo test8;
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
//     writeSmallServo(test2, 0);
//     writeSmallServo(test3, 90);
//     writeSmallServo(test4, 135);
//     writeSmallServo(test5, 150);
//     writeSmallServo(test6, 180);
//     writeSmallServo(test7, 270);
//     writeSmallServo(test8, 300);

//     delay(1250);
// }

// /**
//  * @brief Loop function
//  */
// void loop()
// {
//     // Serial.println(map(test2.readMicroseconds(), MIN_PULSE_WIDTH, MAX_PULSE_WIDTH, 0, 270));

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

//     // writeSmallServo(test2, 1);
//     // delay(1000);
// }
