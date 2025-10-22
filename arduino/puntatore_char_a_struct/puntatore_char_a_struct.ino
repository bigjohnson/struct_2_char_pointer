struct matita {
  char fabbricante;
  int durezza;
  int numero;
};

void setup() {
  // put your setup code here, to run once:
  struct matita m0;
  char *puntatore;
  int i = 0;

  m0.durezza = 10;
  m0.numero = 5;
  m0.fabbricante = 'C';

  puntatore = (char*)&m0;

  Serial.begin(9600);

  Serial.print("dimensione int=");
  Serial.print(sizeof(int));
  Serial.print("\n");

  Serial.print("dimensione char=");
  Serial.print(sizeof(char));
  Serial.print("\n");

  Serial.print("dimensione m0=");
  Serial.print(sizeof(m0));
  Serial.print("\n");

  Serial.print("dimensione puntatore=");
  Serial.print( sizeof(puntatore));
  Serial.print("\n\n");

  Serial.print("m0.fabbricante=");
  Serial.print( m0.fabbricante );
  Serial.print("\n");

  Serial.print("puntatore=");
  Serial.print( *puntatore );
  Serial.print("\n\n");
  
  while (i < sizeof(m0)) {
    Serial.print("i=");
    Serial.print(i);
    Serial.print("\n");

    Serial.print("puntatore=");
    Serial.print(*puntatore++, HEX);
    Serial.print("\n");
    i++;
  };
}

void loop() {
  // put your main code here, to run repeatedly:

}
