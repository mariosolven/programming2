### Team:
+ Saul Alberto Barrera García - [GitHub](https://github.com/saulbg/Programming2)  
+ Mario Solórzano Ventura - [GitHub](https://github.com/mariosolven/programming2)

Structured Programming
======

## Programming Paradigms

It is a technological proposal that is adopted by a community of programmers whose central nucleus is questionable as to what it univocally tries to solve one or several clearly defined problems.  

## Classification of Programming Paradigms  

The declarative programming language always describe the desired end result, instead of showing all the steps of the work. 

Now imperative programming (instruction-oriented paradigm), in this case the developer determines with precisition in the source code the steps the computer must take to achieve the result. Is better described as "how" of the solution.  

### Declarative

+ Functional: 
 
 When we use this paradigm we will be working mainly on functions, as it is a declarative paradigm we will focus on what we are doing.

+ Data flow: 
 
 Define applications as "black box" process networks, which exchange data through predefined connections by message steps, where the connections are specified externally to the processes.

+ Logic: 
 
 Studies the use of logic for problem solving and control over the rules of inference to achieve automatic solution. Unifies terms, uses automatic inference mechanisms and has a logical vision of computing.

+ Templated: 

 This paradigm is based on solving a problem dividing it into smaller problems. By dividing into simpler problems, the aim is to obtain an easier solution.

+ Based: 
 
 It is aimed at improving the clarity, quality and development time of a computer program, using subroutines and three.

+ Structures: 

 Sequence, selection (if and switch) and iteration (for and while).  

### Imperative  

* Von Neumann: 
 
 Describes a design architecture for an electronic digital computer with parts consisting of a processing unit containing a logical arithmetic unit and processor registers, a control unit containing an instruction register and a program counter, a memory for storing both data and instructions, external mass storage, and input and output mechanisms.
 
 In summary is the programming which storage the data in a common memory, each memory cell of the machine is identified with a unique number and each program runs sequentually.  

* Interpreted: 
 
 In this programming paradigm, an interpreter is required and unlike other programming languages in the interpreted language, the source code is not compiled once, but every time an instruction is compiled.  

* Object-oriented:

 It is used to design applications and computer programs, it is based on various techniques including inheritance, abstraction, polymorphism and encapsulation.

 Some examples of object-oriented programming are *C++, C#, Java, Perl, Ruby... etc.*  

## Methods of Programming Paradigms

- Interpreted Programming: 
 
 Unlike compiling, it does not need to be preprocessed by a compiler, that is, it executes the sequence of instructions without the need to read and translate everything.  
   
- Compiled programming:
 
 It is a programming language whose implementations are normally compilers (translators that generate machine code from the source code). The keyword that describes a compiled pogramming is the compiled do like a step else (first you write te code and after that code is translated to bytecode and after a language that the machine can understand. 

## Source Code

It is a set of lines of text with the steps the computer must follow to run a program. Is wrote in a programming language but is not ready to execute, it needs to be translated by a compiler.  

## Data Representation in Structured Programming Language

It refers to the form in which data is stored, processed, and transmitted.

**Characteristics**

- Identifiers
 
 An identifier is a string of alphanumeric characters that begins with an alphabetic character or an underscore character that are used to represent various programming elements such as variables, functions, arrays, structures, unions and so on. Actually, an identifier is a user-defined word. Example: 

 ```c
 int money;
 double accountBalance;
 ```

- Variables
 
 Variables are the names you give to computer memory locations which are used to store values in a computer program. For example, assume you want to store two values 10 and 20 in your program and at a later stage, you want to use these two values. Example:

 ```c
 /* variable to store long value */
 long a;

 /* variable to store float value */
 float b;
 ```

- Constants

 Constants are a type of variable that don’t change. They should be used for anything that should not be allowed to change while the program is running. Example:

Language | Constant
--- | --- 
C++ | `#define PI 3.1415` or `const double PI = 3.14159;` 
C# | `const double PI = 3.14159`
Java | `const double PI = 3.14159;`
JavaScript | `const PI = 3.14159;`
Phyton | `PI = 3.14159`
Swift | `let pi = 3.14159`

- Reserved Words: 

 They are words that are reserved by a program because the word has a special meaning, it can be commands or parameters. Every programming language has a set of keywords that cannot be used as variable names.

- Types of Data:

 *Primitives*
 
 Are predefined types of data, which are supported by the programming language. Programmers can use these data types when creating variables in their programs. Primitive data types can hold text messages, numbers and so on, but they don't readily accommodate higher levels of complexity.  For example, a programmer may create a variable called "name" and define it as a string data type. The variable will then store data as a string of characters.

 The primitive data types are:

      1. Boolean (e.g. True or False)
      2. Character (e.g. abc)
      3. Date (e.g. 03/01/2017)
      4. Double (e.g. 1.87651234355743E308)
      5. Floating-point number (e.g. 1.23)
      6. Integer (e.g. 123)
      7. Long (e.g. 123456789)
      8. Short (e.g. 0)
      9. String (e.g. abc)
      10. Void (e.g. no data)

 *Composites*
 
 For more elaborate data handling—such as simulating the physics of a dozen bouncing balls or managing a quiz with 500 questions and answers—we turn to composite datatypes. Using composite data, we can manage multiple pieces of related data as a single datum. 
 
Some examples:

      1. Array
      2. Object
      3. Movie clip
      4. Functions
 
 Functions are technically a type of object and are therefore considered composite data, but we rarely manipulate them as such.

- Data type conversion:

 Type conversion or typecasting refers to changing an entity of one datatype into another. There are two types of conversion: 

  * Implicit: also known as coercion, is an automatic type conversion by the compiler. Some languages allow, or even require compilers to provide coercion.

  * Explicit: in some specific way is known as casting. Can also be achieved with separately defined conversion routines such as an overloaded object constructor.

## Operators of Structured Programming Language

**Conditional**
 
 Are used to evaluate a condition that's applied to one or two boolean expressions. The result of the evaluation is either true or false. Example:

 ```c
 if (Condition)
    First expression 
 else
    Second expression
```

**Logical**
 
 Is a symbol or word used to connect two or more expressions such that the value of the compound expression produced depends only on that of the original expressions and on the meaning of the operator. They are:
  
 * `&&` the logical AND operator.
 * `||`   the logical OR operator.
 * `?:`   the logical NOT operator.

 Only on Phyton the operators change: 

  * `and` the logical AND operator.
  * `or` the logical OR operator.
  * `not` the logical NOT operator.


**Relationship**

 A relational operator is a programming language construct or operator that tests or defines some kind of relation between two entities. These include numerical equality (e.g., 5 = 5) and inequalities (e.g., 4 ≥ 3). They are:
 
 
 * `<` Less than
 * `>` Greater than
 * `<=` Less than or equal
 * `>=` Greater than or equal
 * `==` Equal
 * `!=` Not equal


## Basic fuctions of input/output (I/O)

* `scanf` reads formatted input from stdin.
* `printf` sends formatted output to stdout.
* `getchar`and `putchar` are used to transfer single characters.
* `puts` is used to output strings.

## Distributed Version Control

A distributed version control system (DVCS) is a type of version control where the complete codebase — including its full version history — is mirrored on every developer's computer. It's abbreviated DVCS.

Changes to files are tracked between computers. For example, my workstation and yours. In the beginning, this required specific coordination strategies to maintain consistency in projects, so all the developers could keep track of what was happening to files at any given time.

### References

+ https://www.ecured.cu/Paradigmas_de_programacion
+ https://www.ecured.cu/Paradigmas_de_programacion  
+ https://codigofacilito.com/articulos/programacion-funcional  
+ https://es.wikipedia.org/wiki/Programacion_basada_en_flujo  
+ https://ferestrepoca.github.io/paradigmas-de-programacion/proglogica/logica_teoria/lang.html  
+ https://www.ecured.cu/Programacion_Modular  
+ https://www.ecured.cu/Programacion_estructuradahttps://www.ecured.cu/Programacion_estructurada  
+ https://es.wikipedia.org/wiki/Arquitectura_de_Von_Neumann  
+ https://www.ecured.cu/Programacion_Orientada_a_Objetos
+ https://es.wikipedia.org/wiki/Lenguaje_de_programacion_compilado
+ https://www.ecured.cu/Lenguaje_interpretado
+ https://www.perforce.com/blog/vcs/what-dvcs-anyway
+ https://www.sitepoint.com/data-input-and-output-in-c-part-1/
+ http://archive.oreilly.com/oreillyschool/courses/csharp2/csharp204.html
+ http://aboutc.weebly.com/identifiers.html
+ https://www.tutorialspoint.com/computer_programming/computer_programming_variables.htm
+ https://www.bbc.co.uk/bitesize/guides/zc6s4wx/revision/5

