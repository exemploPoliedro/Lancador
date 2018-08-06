void motorLancar() {

  // Colocar aqui o código que ativa o motor e lança o objeto
  // os pinos do motor são MOTOR_IN_1_PIN e MOTOR_IN_2_PIN
  
  digitalWrite(MOTOR_IN_1_PIN, LOW);
  digitalWrite(MOTOR_IN_2_PIN, HIGH);
  delay(2000);
  digitalWrite(MOTOR_IN_1_PIN, HIGH);
  digitalWrite(MOTOR_IN_2_PIN, HIGH);
  
}

