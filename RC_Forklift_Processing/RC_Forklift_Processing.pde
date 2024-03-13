import processing.serial.*;

Serial myPort;
String myText = "";

void setup(){
  size(300, 300);
  myPort = new Serial(this, "COM3", 9600);
  myPort.bufferUntil('\n');
}

void serialEvent (Serial myPort){
  myText = myPort.readStringUntil('\n');
}

void draw(){
  background(255,204,229);
  text(myText, 120, 120);
  myText = "";
  
  if(keyPressed
}
