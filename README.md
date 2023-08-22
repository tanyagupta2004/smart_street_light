# Smart Street Light and Traffic Prediction System
## Abstarct
The project involves a smart street light system which switches ON the street lights at night on detecting the presence of any human or vehicle otherwise, the street lights are turned OFF. Also to visualize the traffic pattern.
## Hardware Requirements
1. Node MCU: It is based on the ESP8266 Wi-Fi module. It allows developers to easily create Wi-Fi enabled IoT (Internet of Things) projects. Sensors and actuators have been integrated with NodeMCU. The NodeMCU takes in sensor values, processes them and the actions to be performed (by actuators-LED) based on the sensor data have been coded on Arduino IDE and then loaded into NodeMCU. The NodeMCU being WiFi enabled, enables us to easily connect with cloud platforms. Here, ThingSpeak has been used.

2. IR Sensor: An IR (infrared) sensor is a device that detects and responds to the infrared radiation emitted or reflected by objects. It is used to detect the presence of any person or vehicle in the area to switch on or off the lights accordingly and followed by calculating the traffic pattern using the same sensor.

3. LDR (Light Dependent Resistor): It is a sensor that detects changes in light levels. It is also known as a photoresistor or photocell. It is used to detect the presence or absence of light to smartly switch on or off the street lights.

4. LED (Light Emitting Diode): It is a semiconductor device that emits light when an electric current is passed through it. Here LED is used to represent the street lights in this project.
## Flowchart
<img width="238" alt="image" src="https://github.com/tanyagupta2004/smart_street_light/assets/82495563/46aa3d12-073b-4552-adb9-206dc21df9bf">

1. Sensors Required: Light Dependent Resistor (LDR) to detect the presence of light in streets and Infrared (IR) sensor to detect presence of people and vehicles in street.

2. Microcontroller: ESP8266 has been used to facilitate integration with all sensors, obtaining the sensor data and processing them, send them to the Cloud platform. The Actuator – LED is made to perform action (glow or not glow) according to the code and requirement.

3. IoT Cloud: ThingSpeak has been used to Visualize the each of the processed data from the microcontroller.

4. LED (Light Emitting Diode): It represents the street lights which work as:

   - Glow when people are present and its dark outside

   - Off when street is empty

   - Off during day time
## Hardware Connections
![image](https://github.com/tanyagupta2004/smart_street_light/assets/82495563/f2035cbe-cdea-441b-9eba-9a237f81170f)

![image](https://github.com/tanyagupta2004/smart_street_light/assets/82495563/6185efba-0b7a-4c38-b66c-7db49861f33b)

## Demonstartion
1. During day, irrespective of vehicles are present or absent, street lights are kept OFF
![image](https://github.com/tanyagupta2004/smart_street_light/assets/82495563/9730ae7b-0354-4354-9f9e-588f8567de1e)
   
2. During the night, when light is not detected and vehicles are detected so street lights are kept ON
 ![image](https://github.com/tanyagupta2004/smart_street_light/assets/82495563/9bf640c7-6899-4124-9e01-f198dd4a9f20)

3. During the night, but vehicles are absent so street lights are kept OFF
![image](https://github.com/tanyagupta2004/smart_street_light/assets/82495563/9762860a-28df-4e69-911a-24e89514316d)
### ThingsSpeak Visualization
![image](https://github.com/tanyagupta2004/smart_street_light/assets/82495563/197f80e4-1cac-4747-b67d-ad74873909c7)
## Traffic Pattern
![image](https://github.com/tanyagupta2004/smart_street_light/assets/82495563/f29ffde1-25c0-4e73-a489-12651efa5a22)

### Matlab Code
![image](https://github.com/tanyagupta2004/smart_street_light/assets/82495563/fdb53283-3ba0-4265-898f-0eb2a58a06c9)

![image](https://github.com/tanyagupta2004/smart_street_light/assets/82495563/bc4661d3-399a-4b04-914c-5f5c047bd32e)

