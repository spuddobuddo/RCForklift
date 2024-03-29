import processing.serial.*;
import ketai.net.bluetooth.*;

Serial myPort;
String myText = "";

KetaiBluetooth bt;


void setup(){
  size(720, 480);
  myPort = new Serial(this, "COM4", 9600);
  myPort.bufferUntil('\n');
  
  bt = new KetaiBluetooth(this);
  bt.start();
}

void serialEvent (Serial myPort){
  myText = myPort.readStringUntil('\n');
}

void draw(){
  background(255,204,229);
  text(myText, 120, 120);
  //myText = bt.lookupAddressByName("HC-05");
  
  if (keyPressed) {
    if (key == 'w' || key == 'W') {
      myPort.write('1');
    }
    else if (key == 's' || key == 'S'){
      myPort.write('2');
    }
  }
}

//void btDeviceFound(KetaiBluetoothDevice device){
//}
