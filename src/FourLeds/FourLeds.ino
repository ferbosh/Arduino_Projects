/*
	El lenguaje de programacion que usa la placa arduino
	es el lenguaje de programacion c++, ya que este lenguaje
	nos permite hacer uso de objetos y metodos, pero en este
	ejemplo hacemos uso de funciones void las cuales no
	retornan valores sino que ejecutan el codigo de su interior.

	Los pines hay que declararlos de acuerdo a los pines que posee
	arduino y de tipo enteros, luego en el cuerpo de la funcion
	setup() declaramos el comportamiento de cada puerto, indicandole
	a arduino si es un pin de entrada o un pin de salida.

	Al llegar al cuerpo de la funcion loop(), es ahi donde
	se escribe todas las instrucciones yt el metodo de trabajo
	de arduino, indicandole que leds se enciaenden y que leds
	se apagan a la ves de definir el tiempo de encendido y de
	apagado.
*/

// declarando los puertos a usar
int led01 = 13;
int led02 = 12;
int led03 = 11;
int led04 = 10;

void setup() {
  // colocando la definicion de cada puerto
  pinMode(led01, OUTPUT);
  pinMode(led02, OUTPUT);
  pinMode(led03, OUTPUT);
  pinMode(led04, OUTPUT);
}

void loop() {
  // llamada a las funciones y a la vez pasandole como parametro
  // el tiempo de demora de cada componente
  second01(500);
  second02(600);
  second03(700);
  second04(800);
}

void second01(int psTime){
  digitalWrite(led01, HIGH);
  delay(psTime);
  digitalWrite(led02, HIGH);
  delay(psTime);
  digitalWrite(led03, HIGH);
  delay(psTime);
  digitalWrite(led04, HIGH);
  delay(psTime);
  digitalWrite(led01, LOW);
  delay(psTime);
  digitalWrite(led02, LOW);
  delay(psTime);
  digitalWrite(led03, LOW);
  delay(psTime);
  digitalWrite(led04, LOW);
  delay(psTime);
}

void second02(int psTime){
  digitalWrite(led01, HIGH);
  delay(psTime);
  digitalWrite(led01, LOW);
  delay(psTime);
  digitalWrite(led02, HIGH);
  delay(psTime);
  digitalWrite(led02, LOW);
  delay(psTime);
  digitalWrite(led03, HIGH);
  delay(psTime);
  digitalWrite(led03, LOW);
  delay(psTime);
  digitalWrite(led04, HIGH);
  delay(psTime);
  digitalWrite(led04, LOW);
  delay(psTime);
}

void second03(int psTime){
  digitalWrite(led01, HIGH);
  delay(psTime);
  digitalWrite(led04, HIGH);
  delay(psTime);
  digitalWrite(led01, LOW);
  delay(psTime);
  digitalWrite(led04, LOW);
  delay(psTime);
  digitalWrite(led02, HIGH);
  delay(psTime);
  digitalWrite(led03, HIGH);
  delay(psTime);
  digitalWrite(led02, LOW);
  delay(psTime);
  digitalWrite(led03, LOW);
  delay(psTime);
}

void second04(int psTime){
  digitalWrite(led01, HIGH);
  digitalWrite(led04, HIGH);
  delay(500);
  digitalWrite(led01, LOW);
  digitalWrite(led04, LOW);
  delay(500);
  digitalWrite(led02, HIGH);
  digitalWrite(led03, HIGH);
  delay(500);
  digitalWrite(led02, LOW);
  digitalWrite(led03, LOW);
  delay(500);
}

