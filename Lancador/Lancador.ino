#define LED_1_PIN 2
#define LED_2_PIN 5
#define LED_3_PIN 7

#define MOTOR_IN_1_PIN 24
#define MOTOR_IN_2_PIN 26

#define BUTTON_PIN 9

// Função do motor
void motorLancar();

// Função do LED
void contarRegressivamente();

void setup() {

  // Inicializando as portas dos LEDs
  pinMode(LED_1_PIN, OUTPUT);
  pinMode(LED_2_PIN, OUTPUT);
  pinMode(LED_3_PIN, OUTPUT);

  // Inicializando as portas dos motores
  pinMode(MOTOR_IN_1_PIN, OUTPUT);
  pinMode(MOTOR_IN_2_PIN, OUTPUT);

  // Inicializando a porta do botão
  pinMode(BUTTON_PIN, INPUT_PULLUP);

}

void loop() {
  
  // Colocar aqui o código para reconhecer que o botão está pressionado
  // Após ele ser pressionado,
  // lembre-se de chamar as funções de contagem regressiva e lancamento
if (digitalRead(BUTTON_PIN) == LOW){
  contarRegressivamente();
  motorLancar();
}
