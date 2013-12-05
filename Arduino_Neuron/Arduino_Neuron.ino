#include "Neuron.h"

/*
 ** ARDUINO NEURON
 ** BY GUNTHER COX
 ** 09/15/2013
 */
  
// CREATE NEW NEURONS
Neuron neuron1(A4, 12);

void setup() {
  
  // SET DENDRITES AS INPUTS AND SYNAPTIC TERMINALS AS OUTPUT
  pinMode(neuron1.dendrite(), INPUT);
  pinMode(neuron1.terminal(), OUTPUT);
  
  Serial.begin(9600);
  Serial.println("Arduino Neuron Inilalized");
  delay(Neuron::neuronSpeed);
  
  // CALIBRATE NEURONS
  neuron1.calibrate();
}

void loop() {
  
  // dont forget to neuron.start!!!!
  neuron1.start();

}

