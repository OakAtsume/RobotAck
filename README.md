
<h1 style="text-align: center;">RobotACK</h1> 


<h2>About</h2>
<p>
    RobotACK, is a collection of Libraries and Examples for the RobotC IDE from VEX </br>
    It is designed to be used with the VEX Cortex Microcontroller and the VEX Robotics Competition </br>
    This Project is under the MIT License, and is free to use and modify </br>
</p> 

<h2>Documentation</h2>
<p>
    Documentation for RobotACK can be found at Docs/, and is written in MarkDown </br>
    This documentation contains information on how to use the Libraries, Wraps, and how to configure the libs. </br>
    Along side some basic information on how to use RobotC, and how to use the VEX Cortex Microcontroller </br>
</p>

<h2>I'm a student as Davis and I want to contribute.</h2>
<p>
    If you wish to contribute to RobotACK, speak to me during class or after school. </br>
    I will be happy to add you to the project, and you can start contributing. </br>

</p>

<h3>Keep in mind</h3>
<p>
    I will check your code before I add it to the project, so make sure it works. </br>
    I will also be checking your code for style, and will ask you to change it if it is not up to par. </br>
    I will also be checking your code for bugs, and will ask you to fix them if they are found. </br>
</p>




<h1 style="text-align: center;">Getting started</h1>

<h2>Importing to project.</h2>

<p>
    RobotC is built in C-lang, therefore importing and using the libraries will need to follow the C standard. </br>
    To use a library, you will need to move the lib .c file to the same folder as your project. </br>
</p>

<code>
    #include "robotackMovement.c" </br>
    task main() { </br>
        // Your code here </br>
    } </br>
</code>

<p>
    Wish to use the entire framework?</br>
    Simply move the entire RobotACK folder to the same folder as your project. </br>
    and import a lib file called robotack.c </br>
    This will import all the libs, and allow you to use them. </br>
</p> 

<code>
    #include "robotack.c" </br>
    task main() { </br>
        // Your code here </br>
    } </br>
</code>


<h1 style="text-align: center;">Libraries</h1>

<a url="Docs/Movement.md">Movement</a>