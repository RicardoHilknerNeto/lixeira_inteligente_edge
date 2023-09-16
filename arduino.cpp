#include <LiquidCrystal.h>

// Define os pinos do LCD
const int rs = 2;
const int en = 3;
const int db4 = A0;
const int db5 = A1;
const int db6 = A2;
const int db7 = A3;
// Inicializa o LCD com o número de colunas e linhas do display
LiquidCrystal lcd(rs, en, db4, db5, db6, db7);


//sensor de distancia
const int TRIG = 13;
const int ECHO = 12;

//leds
const int PrimeiroLedVerde = 11;
const int SegundoLedVerde = 10;

const int PrimeiroLedAmarelo = 9;
const int SegundoLedAmarelo = 8;

const int PrimeiroLedVermelho = 7;
const int SegundoLedVermelho = 6;

void setup() {
  Serial.begin(9600);
  pinMode(TRIG,OUTPUT);
  pinMode(ECHO,INPUT);
  
  pinMode(PrimeiroLedVerde, OUTPUT);
  pinMode(SegundoLedVerde, OUTPUT);
  pinMode(PrimeiroLedAmarelo, OUTPUT);
  pinMode(SegundoLedAmarelo, OUTPUT);
  pinMode(PrimeiroLedVermelho, OUTPUT);
  pinMode(SegundoLedVermelho, OUTPUT);
  
   // Inicializa o LCD com 16 colunas e 2 linhas
  lcd.begin(16, 2);

  // Escreve uma mensagem inicial
  lcd.print("Ola, informe seu");
  
  lcd.setCursor(0,1);
  lcd.print("nome no Monitor");
  Serial.print("Digite seu nome aqui:");
}

void loop() {
  if (Serial.available() > 0) {  // Verifica se há dados disponíveis no Serial
    String nome = Serial.readStringUntil('\n');  // Lê a linha digitada até encontrar um '\n' (que indica o fim da linha)
  	Serial.println("Login efetuado com sucesso");
    // Limpa o LCD
    lcd.clear();

    // Exibe "Bem vindo," na linha de cima
    lcd.setCursor(0, 0);
    lcd.print("Bem vindo,");

    // Exibe o nome na linha de baixo
    lcd.setCursor(0, 1);
    lcd.print(nome);
    
    delay(5000);
    
    // Limpa o LCD
    lcd.clear();

    // Exibe "Bem vindo," na linha de cima
    lcd.setCursor(0, 0);
    lcd.print("Deposito de lixo");

    // Exibe o nome na linha de baixo
    lcd.setCursor(3, 1);
    lcd.print("LIBERADO!");
  }
  int distancia = sensor_distancia(TRIG,ECHO);
    if(distancia <= 10){
      digitalWrite(PrimeiroLedVerde,HIGH);
      digitalWrite(SegundoLedVerde,HIGH);
      digitalWrite(PrimeiroLedAmarelo,HIGH);
      digitalWrite(SegundoLedAmarelo,HIGH);
      digitalWrite(PrimeiroLedVermelho,HIGH);
      digitalWrite(SegundoLedVermelho,HIGH);
      
      //Serial.print("6/6 ");
      //Serial.print(distancia);
      //Serial.println("cm");
    }
    else if(distancia >= 11 && distancia <= 14){
      digitalWrite(PrimeiroLedVerde,HIGH);
      digitalWrite(SegundoLedVerde,HIGH);
      digitalWrite(PrimeiroLedAmarelo,HIGH);
      digitalWrite(SegundoLedAmarelo,HIGH);
      digitalWrite(PrimeiroLedVermelho,HIGH);
      digitalWrite(SegundoLedVermelho,LOW);
      
      //Serial.print("5/6 ");
      //Serial.print(distancia);
      //Serial.println("cm");
    }
   else if(distancia >= 15 && distancia <= 18){
      digitalWrite(PrimeiroLedVerde,HIGH);
      digitalWrite(SegundoLedVerde,HIGH);
      digitalWrite(PrimeiroLedAmarelo,HIGH);
      digitalWrite(SegundoLedAmarelo,HIGH);
      digitalWrite(PrimeiroLedVermelho,LOW);
      digitalWrite(SegundoLedVermelho,LOW);
      
      //Serial.print("4/6 ");
      //Serial.print(distancia);
      //Serial.println("cm");
    }
   else if(distancia >= 19 && distancia <= 22){
      digitalWrite(PrimeiroLedVerde,HIGH);
      digitalWrite(SegundoLedVerde,HIGH);
      digitalWrite(PrimeiroLedAmarelo,HIGH);
      digitalWrite(SegundoLedAmarelo,LOW);
      digitalWrite(PrimeiroLedVermelho,LOW);
      digitalWrite(SegundoLedVermelho,LOW);
      
      //Serial.print("3/6 ");
      //Serial.print(distancia);
      //Serial.println("cm");
    }
   else if(distancia >= 23 && distancia <= 26){
      digitalWrite(PrimeiroLedVerde,HIGH);
      digitalWrite(SegundoLedVerde,HIGH);
      digitalWrite(PrimeiroLedAmarelo,LOW);
      digitalWrite(SegundoLedAmarelo,LOW);
      digitalWrite(PrimeiroLedVermelho,LOW);
      digitalWrite(SegundoLedVermelho,LOW);
      
      //Serial.print("2/6 ");
      //Serial.print(distancia);
      //Serial.println("cm");
    }
  else{
     digitalWrite(PrimeiroLedVerde,HIGH);
      digitalWrite(SegundoLedVerde,LOW);
      digitalWrite(PrimeiroLedAmarelo,LOW);
      digitalWrite(SegundoLedAmarelo,LOW);
      digitalWrite(PrimeiroLedVermelho,LOW);
      digitalWrite(SegundoLedVermelho,LOW);
      
      //Serial.print("1/6 ");
      //Serial.print(distancia);
      //Serial.println("cm");
  }
  delay(100);
}

int sensor_distancia(int pinotrig,int pinoecho){
  digitalWrite(pinotrig,LOW);
  delayMicroseconds(2);
  digitalWrite(pinotrig,HIGH);
  delayMicroseconds(10);
  digitalWrite(pinotrig,LOW);

  return pulseIn(pinoecho,HIGH)/58;
}
