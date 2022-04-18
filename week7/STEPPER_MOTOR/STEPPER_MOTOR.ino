#include <Stepper.h>
#define MOTOR_STEPS_PER_REV 32
#define GSR 32*64

Stepper stepper(MOTOR_STEPS_PER_REV, 8, 10, 9, 11);

void setup() {
}

void loop() {
    stepper.setSpeed(350);
    stepper.step(GSR / 2);
    delay(2000);

    stepper.setSpeed(350);
    stepper.step(-GSR / 2);
    delay(2000);

    stepper.setSpeed(700);
    stepper.step(GSR);
    delay(2000);

    stepper.setSpeed(700);
    stepper.step(-GSR);
    delay(2000);
}
