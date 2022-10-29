[![Coverage Status](https://coveralls.io/repos/github/shantanuparabumd/Valgrind/badge.svg?branch=main)](https://coveralls.io/github/shantanuparabumd/Valgrind?branch=main)
# Valgrind Exercise
Author- Shantanu Parab sparab@umd.edu
***

### Errors
1. **Uninitialized identifier used:**  
terminator was used without initialization
2. **Memory leak:**  
Objects AnalogSensor **lightSensor** and vector **readings** created were not deleted.

***
### Solutions
1. Initialized terminator.
2. Called Destructor for Analog Sensor
Deleted the object vector after use.

***
### File Structure for Submission  

<pre>├── <font color="#3465A4"><b>valgrind</b></font>
│   ├── <font color="#75507B"><b>Kcachegrind.png</b></font>
│   ├── result_before_solving.txt
│   └── results_after_solving.txt
</pre>
***
### Kcachegrind Output  
<img src='valgrind/Kcachegrind.png'></img>
