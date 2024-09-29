# Automatic-Plant-Watering-System"#  

**ABSTRACT**
Irrigating fields is the most important and a very laborious task for the farmers, especially in the summer season. Manual watering increases the difficulty and is time consuming. Thus, we need effective technologies to overcome these problems. Auto-watering systems can be efficiently used to water plants when needed, which controls when and how much watering needs to be done. This system can be effectively used from small gardens to a large crop field, thus also conserving water. We can implement the above prototype using sprinklers or drip emitters for effective irrigation. For large scale implementation, we can use solar panels to conserve energy.

*1.	INTRODUCTION*

1.1	Introduction

Conventional Watering Methods use a lot of water, and a lot of it is wasted daily. With the help of advanced methods of watering, which should ideally use just the correct amount of water needed for the plants, we could save a considerable amount of water. This system uses Arduino and Moisture Sensor to provide adequate amount of water needed by plant. This system works automatically without any human intervention.

1.2	Motivation

Before we start with the project itself, let’s see what led us to take up this challenge to make this Automated Plant Watering System. In this 21st century, climate change and depletion of resources have become a major issue to deal with. With the ever-growing population and increased demand for natural resources we find we in the middle of a crisis, a crisis which calls for immediate action. Sustainable development must be adopted by each one of us, both on a personal level and socio-industrial level. Among the teeming natural resources which make life possible on earth, perhaps the most important is water. Water shortage has become a crucial issue in most parts of the world. Recently, the state of Maharashtra in India is facing a severe drought which has already claimed many lives. Hence, we see that water conservation is of utmost importance.

1.3	Problem Statement and Objective

(i) Problem statement : Knowing when and how much to water is two important aspects of irrigation. To do this automatically, sensors and methods are available to determine when plants may need water. 
(ii) Approach: This project involves the evolution of watering manually to watering automatically. The controlling of the automatic watering system is use in field of crops. Sensor used to control the watering system is humidity sensor. 
(iii) Result : After the development and completion of this project, it will then be evaluated in order to measure the effectiveness and to ensure whether it had met the objectives successfully. 
(iv) Conclusion/Recommendation : Student learn overall of theoretical and practical skill during develop this project. Besides, this product are useful in current form and offers solid basis together take the knowledge from the real field of engineering. The goals of this project were purposely kept within what was believed to be attainable within the allotted timeline. As such, many improvements can be made upon this initial design. It is felt that this design represents a functioning miniature scale model which could be replicated to a much larger scale. Recommendations are provided as ideas for future expansion of this project.

1.4 Organization of Report

The material presented in the project report is organized as follows:
Chapter 1 consists of an introduction, problem statement, and objective for our project
management system.
Chapter 2 consists of the survey of existing systems, the limitations of existing
systems, and our mini-project contribution.
Chapter 3 presents the proposed system and the characteristics of the proposed system, the
framework of the proposed system, er model, and details of the software and hardware components
used.
Chapter 4 contains the experimental results and discussions where all the screenshots of the inputs
and outputs are shared.
Chapter 5 concludes the project report, also discussing the future scope of our project, followed by
the citations and references of all research papers studied and analyzed to collect information for the
project.

*2.	LITERATURE SURVEY*

2.1	Survey of Existing System:

Irrigation systems have been in use for centuries, and the use of automated irrigation systems has become increasingly popular over the last few decades. These systems range from simple timer-based systems to sophisticated, sensor-based systems that adjust watering based on soil moisture levels, weather data, and plant needs.
The most common types of automated irrigation systems are weather-based and soil moisture-based. Weather-based systems use weather data to determine when and how much to water, while soil moisture-based systems use sensors to measure the moisture content of the soil and adjust watering accordingly. Other types of irrigation systems include drip irrigation, sprinkler systems, and subsurface irrigation systems.
Weather-based irrigation systems are commonly used in commercial agriculture, but they are also becoming more popular in residential settings. These systems use weather data to determine when and how much to water, taking into account factors such as temperature, humidity, wind speed, and rainfall. This type of system is typically more expensive than soil moisture-based systems, but it can be more precise and accurate.
Soil moisture-based irrigation systems are more commonly used in residential settings, particularly for home gardens and landscaping. These systems use sensors to measure the moisture content of the soil and adjust watering accordingly. This type of system is generally less expensive than weather-based systems and can be just as effective for small-scale irrigation.

2.2	 Limitation of Existing System

Despite the availability of various irrigation systems, there are still some limitations that need to be addressed. One of the main limitations of existing systems is their high cost, particularly for large-scale applications. Another limitation is the lack of adaptability to different soil and weather conditions, which can result in overwatering or underwatering. Additionally, some systems are difficult to install and require professional assistance, making them less accessible for individual users.
There is also a research gap in the development of affordable and user-friendly smart irrigation systems for small-scale applications. Most existing smart irrigation systems are designed for large-scale commercial agriculture and are too complex and expensive for individual users. Therefore, there is a need for simple and affordable smart irrigation systems that can be easily installed and used by individual users for home gardens and landscaping.

2.3	 Mini Project Contribution

The smart irrigation system developed in this project aims to address the limitations of existing systems and fill the research gap by providing an affordable and user-friendly system for small-scale applications. The system uses a capacitive soil moisture sensor and an Arduino board to monitor soil moisture levels and control water flow to plants accordingly. The system is designed to be low-cost, easy to install, and accessible to individual users for home gardens and landscaping.
In summary, the development of an affordable and user-friendly smart irrigation system for small-scale applications is still a research gap in the field of irrigation systems. The smart irrigation system developed in this project aims to fill this gap by providing a low-cost and easy-to-use system for individual users.

*3.	PROPOSED SYSTEM*

3.1	 Introduction

The smart irrigation system is an automated system that uses an Arduino board to monitor the moisture levels of the soil and control the irrigation of plants accordingly. This system is designed to optimize water usage and increase plant growth, while minimizing wastage. In this chapter, we will discuss the architecture, algorithm and process design, and details of the hardware and software of our smart irrigation system.

3.2	Architecture/ Framework

The architecture of the system consists of three main components: the sensor module, the contro  module, and the communication module. The sensor module is responsible for measuring the moisture level of the soil using a capacitive soil moisture sensor. The control module processes the data from the sensor module and controls the water flow to the plants using a solenoid valve. The communication module enables the system to communicate with external devices, such as a smartphone or a computer, via Bluetooth or Wi-Fi. The sensor module is composed of a capacitive soil moisture sensor and an analog-to-digital converter (ADC) that reads the sensor's output voltage. The sensor is inserted into the soil, and its capacitance changes as the moisture level changes. The ADC converts the sensor's analog output voltage to a digital value that is sent to the control module. The control module consists of an Arduino board and a solenoid valve. The Arduino board receives the digital moisture data from the sensor module, compares it to a threshold value, and determines if the soil needs watering. If the moisture level is below the threshold, the control module opens the solenoid valve to allow water to flow to the plants. Once the moisture level reaches the threshold, the valve is closed to prevent overwatering. The system also includes a timer to prevent watering during certain times of the day when it is not necessary. The communication module enables the system to communicate with external devices via Bluetooth or Wi-Fi. This allows the user to remotely monitor and control the system using a smartphone or a computer.
            
3.3	Algorithm and Process Design

The algorithm used in the system is a simple control loop that compares the measured moisture level of the soil with a predefined threshold level. The threshold level is set by the user based on the plant's watering needs. If the moisture level is below the threshold, the control module opens the solenoid valve to allow water to flow to the plants. Once the moisture level reaches the threshold, the valve is closed to prevent overwatering. The timer function is used to prevent watering during certain times of the day, such as when the sun is at its peak or during rainy weather. The process design involves the use of a printed circuit board (PCB) to integrate the various components of the system. The PCB includes the Arduino board, the capacitive soil moisture sensor, the solenoid valve, and other necessary components, such as resistors and capacitors. The PCB is housed in a waterproof enclosure to protect it from the elements. The system is powered by a 12V DC power supply.
          
3.4	Details of Hardware &Software

The hardware components of the system include an Arduino Uno board, a capacitive soil moisture sensor, a 12V solenoid valve, a PCB, and various other components. The Arduino board is the brain of the system and runs the control loop algorithm. The capacitive soil moisture sensor is used to measure the moisture level of the soil by detecting the change in capacitance caused by the presence of water. The solenoid valve is used to control the flow of water to the plants. The PCB is used to integrate the various components of the system and to provide a stable platform for the system. The software used in the system includes the Arduino Integrated Development Environment (IDE), which is used to write and upload the code to the Arduino board. The code includes the control loop algorithm, as well as functions for reading the soil moisture sensor data, controlling the solenoid valve, and communicating with external devices via Bluetooth or Wi-Fi. The software also includes a smartphone application that allows the user to monitor and control the system remotely. The system is designed to be low-cost, easy to assemble, and user-friendly. The hardware components are readily available and can be easily sourced from electronic stores or online retailers. The software code is open-source and can be easily modified and adapted to suit different applications and requirements.


*4.	DESIGN AND METHODOLOGY*

4.1	Design

The proposed system mainly focuses on the units such as power supply, sensing unit,
control unit and motor unit. Soil moisture sensor is used to track the moisture level of
soil and a pumping system is used to supply water to the soil. Temperature and humidity
sensor is used to track the temperature and humidity of soil. Soil moisture sensor is
connected to Arduino Uno board for analog input, which helps in tracking the
temperature content present in soil. Motor driver module is also connected with Arduino board and it passes the current to the motor pump by monitoring the temperature. Humidity and temperature are common parameters to measure environmental conditions. In the proposed system, ambient
temperature and humidity are measured and displayed on a screen as mentioned 
by using a combined temperature and humidity sensor with Arduino uno.

4.2	Methodology

Basically, this system senses the condition of soil and compares the moisture with the
referred moisture If the moisture of soil is less than the referred moisture, then it sends the signal to the Arduino and it starts the motor until the moisture of soil gains it’s preferred value. When it comes to its peak value, then it sends the signal and the motor stop pumping the water. This process is performed automatically. The proposed system monitors the soil moisture content from time to time.


*5.	RESULTS AND DISCUSSIONS*

5.1	 Implementation 

This project consists of two sections: the external sensor unit, and the inbuilt processing unit. In the external sensor unit, the basic requirement of sensing the moistness of the sand or soil through capacitive reactance is performed, the arms of the sensor are able to detect resistance and provide input to the IC. When the soil becomes dry, it produces large voltage drop due to high resistance, and this is sensed by the soil moisture sensor, and this resistance causes the operational amplifier to produce an output that is above the threshold value required. This causes the relay to change from normally open to closed condition – The relay becomes on. When the relay is turned on, the valve opens and water through the pipes rushes to the crops. When the water content in the soil increases, the soil resistance gets decreases and the transmission of the probes gets starts to make the operational amplifier stop the triggering of the relay. Finally the valve which is connected to the relay is stopped. Op-amp is configured here as a comparator. The comparator monitors the sensors and when sensors sense the dry condition then the project will switch on the motor and it will switch off the motor when the sensors are in wet. The comparator does the above job it receives the signals from the sensors. A transistor is used to drive the relay during the soil wet condition. 7.2 V double pole– double through relay is used to control the water pump. LED indication is provided for visual identification of the relay / load status. A switching diode is connected across the relay to neutralize the reverse EMF. This project works with 7.2 V regulated power supply for the internal blocks and uses regulated 7.2V power supply for the relay board. Power on LED is connected for visual identification of power status. First, the sensor probes are inserted in the soil at specific locations in the field, at a depth of 5cm from the soil surface at regular intervals in the field. The wiring is made with protective covering so that it is not harmed by any unexpected factors like rocks in the field. Since wet soil is more conductive than dry soil, the soil moisture sensor module has a comparator in it. The voltage from the prongs and the predefined voltage are compared and the output of the comparator is high only when the soil condition is dry. When the moisture in the soil is above the threshold, the relay will be turned on. The relay coil gets energized and turns on the motor. The LED is also turned on as an indicator. The soil begins to get supplied with water, and the water content of the soil increases. When the moisture content of the soil increases and reaches the threshold value, the output of the soil moisture sensor is low and the motor is turned off. This prevents a case of over-watering.

5.2	 Result and Discussions

From this work, we can control the moisture content of the soil of cultivated land. According to soil moisture, water pumping motor turned on or off via the relay automatically. This saves water, while the water level can be obtained in a preferred aspect of the plant, thereby increasing productivity of crops. Servo motor from vegetation water uniformly dispersed in water, in order to ensure the maximum utilization of absorption through. Thus, there is minimal waste of water. The system also allows the delivery to the plant when needed based on the type of plant, soil moisture, and observed temperature. The proposed work minimize the efforts of major agricultural regions. Many aspects of the system can be customized and used software to fine-tune the requirements of the plant. The result is a scalable, supporting technology. Using this sensor, we can see that the soil is wet or dry. If it is dry, the motor will automatically start pumping water.


*6.	CONCLUSION AND FUTURE SCOPE*


6.1	 Conclusion

Automatic system using a microcontroller, moisture sensor and other electronic tools were been developed. It was observed that the proposed methodology controls the moisture content of the soil of cultivated land. The motor automatically start pumping water if the soil is dry and need water and stops when the moisture content of the soil is maintained as required.

6.2	 Future Scope

            In the future work, we plan to add more sensors for N-P-K, pH, and fertilizer controller, as well as to 
            add a number of soil moisture sensors according to the plant bucket size. Furthermore, data in the 
             Firebase system will be further analyzed to predict plant growth rates and find appropriate water 
            level according to each plant type and age.              

*REFERENCES*

(i)	Tasneem Khan Shifa, “~~ Moisture Sensing Automatic Plant Watering System Using Arduino Uno “ American Journal of Engineering Research (AJER), vol. 7, pp.326-330, July 2018.
(ii)	Mitesh Sarode , Dr. Y.S Rao , Ahmed Shaikh , Y Automatic Plant Watering System.”M Asha Jerlin, Nithya Sampath, A. Anitha, “Smart Irrigation system using Internet of Things”
(iii)	Kalyan Kumar Jena, Sourav Kumar Bhoi, Mahesh Kumar Nayak , Chandan Kumar Baral, D.Manoj Kumar Patro , Sudhansu Sekhar Mohanty,” A Smart Watering System Using loT
(iv)	Syed Musthak Ahmed, B. Kovela and Vinit Kumar Gunjan,” IoT Based Automatic Plant Watering System Through Soil Moisture Sensing — A Technique to Support Farmers’ Cultivation in Rural India 
(v)	Jacquline M.S. Waworundeng, Novian Chandra Suseno , Roberth Ricky Y Manaha,” AutomaticWatering System for Plants with IoT Monitoring and Notification.
(vi)	Web References
