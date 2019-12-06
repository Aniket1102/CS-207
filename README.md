# CS-207 Project

## Automatic Water and Ice dispensing Machine

### Introduction

The project undertaken for this term was an automatic water dispensing machine. This was done so that people can easily get water and need not to turn on the taps. In this way it is very hygienic as the taps have germs on it. If this type of machine is applied in public places such as hospitals, schools it could prevent many diseases. This is comparatively very cheap as this type of machine can be setup in less than $ 30. The structure of the dispensing machine is the simple carboard structure where you put a glass and the water comes out from it. A simple modification which is done by me in this, as when the temperature is hot along with the water it also dispenses ice cubes into the glass.

The basic concept of this is as the ultrasonic sensor detects the glass which is placed less than 3 cm away from the sensor, it activates the relay which turn on the micro air pump, the micro air pump creates the pressure inside the tube so the water comes out from another tube and water falls in the glass. If the temperature is more than 26◦ C, which is detected by the temperature sensor, the servo motor activates, which releases the flap and ice cubes drop in.


### Materials Required
 
Arduino Uno

Relay 5V Low Level Trigger One 1 Channel Relay Module Interface Board Shield DC AC 220V

HC-SR04 Ultrasonic sensor

DC 6V 380mA 500mm Hg Micro Air pump

Servo motor

Temperature sensor

2 tubes

Glue gun

Carboard

jumper Wires (female to female, male to male and male to female)


### Wire Diagram

![Fritzing_bb](https://user-images.githubusercontent.com/56104171/70265329-c143cf00-175f-11ea-8cf7-0a8c1d708158.jpg)

### Procrdure 

1. With the help of cardboard make a structure which is shown in the picture.

#### Image 1 (Front) ![IMG_20191204_164316](https://user-images.githubusercontent.com/56104171/70272089-48e40a80-176d-11ea-92c5-5cc996317736.jpg)

#### Image 2 (Back) ![IMG_20191204_164324](https://user-images.githubusercontent.com/56104171/70272112-51d4dc00-176d-11ea-8a9f-3aa70cea20e7.jpg)

2. With the help of the circuit diagram make a circuit before assembling it into the machine.

Building guide :

2.A The main circuit is placed above the tank which consists of Arduino Uno, Relay (5V Low Level Trigger One 1 Channel Relay Module Interface Board Shield DC AC 220V), Micro Air pump (DC 6V 380mA 500mm Hg), tubes. The ultrasonic sensor has 4 pins namely Vcc, ground, echo and trigo.

2.B The echo and trigo are connected to Arduino to pins 4 and 8 respectively. The Vcc and the ground pin is connected to the 5 volts and ground.

2.C The relay is connected to Arduino via pin 7.

2.D The air pump’s positive terminal is connected to NO (normally open) pin of relay and the negative terminal is connected to COM (common) pin of relay.

2.E The Arduino is powered the battery case which provides 7.5 volts each with 1.5 volts cells.

2.F The ice dispensing is separately connected to the Arduino through servo motor and temperature sensor which are connected to pins 2 and A1 respectively. 

3. Attach one tube from the air pump inside the tank(bottle), keep it above the surface of water, than attach the main pipe from where water will flow in glass to the botton surface of the tank. look at image 3 for better understanding.

#### Image 3 (Air pump with tube)  <img width="948" alt="Untitled" src="https://user-images.githubusercontent.com/56104171/70274276-75018a80-1771-11ea-9ad2-eb6fdebc67ff.png">

4.Setup the circuit and all the parts on dispensing machine as shown in the image

#### Image 4 (Circuit setup on dispensing machine) ![IMG_20191206_115608](https://user-images.githubusercontent.com/56104171/70349960-6677a980-182b-11ea-8620-f21dfcfef896.jpg)

For more details click on the link :

For understanding what is the principle and concept behind it you can download my paper here : 














