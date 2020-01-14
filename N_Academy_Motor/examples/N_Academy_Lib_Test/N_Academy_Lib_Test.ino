#include <n_academy_robot.h>

void setup() {
  Serial.begin(115200);
//  motor_init();
  motor_init(
      4, 6, 7,    // motor A (PWM, IN1, IN2)
      5, 8, 9     // motor B (PWM, IN1, IN2)
  );
  sl(100);
}
 
void loop() {
  Serial.print("Analog0:  ");
  Serial.println(in(0));
}
