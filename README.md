# Vixen-Motor-Focus
Motor focuser system for Vixen 2.7" Focuser
3d files, Arduino C++ code, Schematic and reference images included in this repository.


Motor focuser system for Vixen 2.7" Focuser using easily available and 3d printed components.

 

Integrated red light torch to aid in setting up your equiptment whilst in dark conditions.

 

Nema 17 Bipolar 0.8A 26Ncm stepper motor has been used as it boasts enough torque to drive shaft without it spinning back.

 

TMC2209 as these enable the motor to run silently with no vibration. The EN pin is the enabler pin, the arduino can turn the TMC2209 on and off with it. Step and Dir pins allow you to step the motor and change direction.

 

12v 2A PSU has enough power to run the motor efficiently. Be sure to disconnect your programmer before plugging in the power!

 

100uf 50v Capacitor to protect parts from voltage drops and noise caused by the driver and supply power for short peaks in demand, so effectively enabling the 12V power source supply much more current for short time.

 

Arduino Nano is compact, incorporates a 5v voltage regulator and ample analogue / digital inputs and outputs to meet the requirement.

 

Push buttons for fast motion and slow motion enable simple and accurate focusing.

 

A potentiometer allows us to adjust the motor speed for the slow motion buttons.

 

The motor cannot be turned by hand when the TMC2209 is enabled, so an On/Off button for the Arduino and TMC2209 enable us to turn it off and move it by hand.

 

Strip board with copper tape applied to make required tracks and a drill bit to cut the required tracks makes a perfect PCB.

 

Programmer pins enable us to reliably program cheaper chinese Arduino's with an FTDI interface. You will have to manually press the reset button at point of upload.

 

Flexible Shaft Coupling (5mm to 6mm) enables you to join the motor to the focuser shaft with a little flex to account for any misalignment. Mine probably is about 1mm out so flexes a tad.

 

I used rubber washers to mount the motor to the bracket to soak up any vibration.

 

3D printed mounting bracket in 15% carbon fibre PLA to provide suitable strength. It should grip the screws for the focuser enabling you to turn them back a turn or so to allow the focuser to move freely. Be careful when taking apart the focuser, there are some washers underneath the metal plate that can easily drop into the telescope.

 

3D printed handset, top in 15% carbon fibre and bottom in a softer more flexible material.

 


In terms of licensing, Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International (CC BY-NC-ND 4.0), as I'm happy for people to redistribute it, so long as they credit myself. 
