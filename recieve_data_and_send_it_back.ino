//====================================
// Welcome to cpu temparature monitor
// Equipments: 1> 16x2 lcd display
//             2> NodeMcu
//====================================

void setup(){
  Serial.begin(9600);
  }

void loop(){
  if (Serial.available() > 0){ // check if any data is available in serial port
    String data = Serial.readString();
    Serial.println(data);
  }
}
