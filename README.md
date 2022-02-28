# STM32-42StepMotor Control example
## Description
A simple tour example for the 42 Stepmotor control using STM32.  
The Keil5 project **BH-F103** is contained in file **Project**  

Video Link (in Chinese): https://www.bilibili.com/video/BV1ku411D7sc?spm_id_from=333.999.0.0
## Function
Press Key1: The motor rotates 90 deg **counter-clockwisely**  
Press Key2: The motor rotates 90 deg **clockwisely**  
## Here are the connections:  
KEY1 -> A0  KEY2 -> C13  
ENA- -> GND ENA+ -> C4  
DIR- -> GND DIR+ -> C6  
PUL- -> GND PUL+ -> C7  
The mircostep is set to 1600, and the current is set to 1A.  

![connections](https://user-images.githubusercontent.com/93332750/156009650-14ea09cc-3c1e-4cc9-a5b8-6b4981281222.png)  


## How it works
The stepmotor takes one step rotation each time one pulse is received.  
Then **400 pulses** are required for a **90 deg rotation** since one complete rotations necessates **1600 pulses**.  

To this end, C7 needs to **toggle 800** times

Why 800 toggles correspond to 400 pulses?  
Here are the answer.

![image](https://user-images.githubusercontent.com/93332750/156015411-737c0452-c4f8-48e5-981c-67d6adbd435a.png)

Note that only 5 pulses are achieved by the above 10 toggles.
