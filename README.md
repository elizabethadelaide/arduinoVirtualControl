## Monday 10/30/17

1. Download and unzip processing from this link: http://download.processing.org/processing-3.3.6-windows32.zip
2. Download the sonar library from the libraries section of this document

3. Get a usable value from a sensor. Check using the serial monitor.
4. Print any two values (can be based on sensor) in the format “x, y”


--   14,15
=-   5,16
--   17,18

4. Run the processing code to see the object change across the screen
5. Set up two sensors to independently control the x and y position of the circle on screen
6. Improve the interactivity of the code, suggestions:
a. Have a sensor control the speed and not the position directly.
b. Speed = (Change in sensor value) / (Time Between Sensing)
c. Using two sensors have the circle follow your hand:

d. Use photosensors to control the circle
e. Have an LED display the speed by sending the request:
    i. “Get Information”
    ii. Reading in the value using the parseInt function in arduino
      https://www.arduino.cc/en/Reference/ParseInt
    iv. Improve the processing script in anyway.


## Reference

https://www.arduino.cc/en/Reference/HomePage

Use the arduino website, examples in the arduino IDE (file->examples), each other, the instructors and us


# Libraries
The sonar library can be downloaded here: https://bitbucket.org/teckel12/arduino-new-ping/downloads/
The wiring of the sonar is as follows:

Arduino----Sensor

5V----Vcc

Echo----Any digital pin

Trig----Any other digital pin

Gnd----Gnd

The documentation can be found here: http://playground.arduino.cc/Code/NewPing

# Processing programs

Programs read from serial

1. Set the serial rate in arduino to 9600. (<b>Serial.begin(9600);</b> in setup)
2. Write serial information in the loop using <b>Serial.write</b>
3. Make sure entries are separated by commas, and end with new lines <b>'\n'</b>
4. To request information print the string "Get Information" to the serial port
5. Have your arduino read information using the "Serial.parseInt()" commands (https://www.arduino.cc/en/Reference/parseInt)
6. In processing it will list out the available serial ports in the console. If your serial port is not listed, try recononnecting the arduino. IF it is, set the function in processing "new Serial(this, Serial.list()[0], 9600);" to the correct port number. It will often be 0 the first time.
7. Processing and the serial plotter/monitor cannot run at the same time.

Basic control - Move an circle on the screen

Inputs: x, y

0<x<200, 0<y<200

Outputs: speed

Breakout - Simple video game

Inputs: x

0<x500

Outputs: score, level

Music generator - Generates tones

<b>Only use with headphones to respect your neightbors</b>

Inputs: x, y

0<x<512 0<y<200

Programs are built in processing3. processing.org. Feel free to edit these programs in any way. Use the  comments and the processing page for help.

