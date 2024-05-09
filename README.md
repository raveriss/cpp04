# **Project CPP04 - École 42**

## Introduction
CPP04 dives into advanced C++ concepts such as subtype polymorphism, abstract classes, and interfaces. The exercises are designed to provide practical experience in using these object-oriented programming techniques in compliance with the C++98 standard.

## Project Structure
This module consists of a series of exercises that build on each other, illustrating different aspects of C++ inheritance and polymorphism:

### Exercise 00: Polymorphism
- **Directory:** `ex00/`
- **Files to submit:**
  - `Makefile`
  - `main.cpp`
  - Various class implementations (`*.cpp`, `*.h`, `*.hpp`)

#### Functionality
Introduces basic polymorphism through the implementation of `Animal`, `Dog`, and `Cat` classes, with animals exhibiting behavior (making sounds) specific to their types.

### Exercise 01: I Don't Want to Set the World on Fire
- **Directory:** `ex01/`
- **Files to submit:**
  - All files from Exercise 00 plus
  - Extended classes (`*.cpp`, `*.h`, `*.hpp`)

#### Functionality
Expands upon the base classes by introducing a `Brain` class, exploring deep copying and dynamic memory management.

### Exercise 02: Abstract Class
- **Directory:** `ex02/`
- **Files to submit:**
  - All files from Exercise 01 plus
  - Modifications to make `Animal` an abstract class

#### Functionality
Transforms the `Animal` class into a true abstract class to prevent instantiation and ensures that subclasses provide specific implementations for virtual functions.

### Exercise 03: Interfaces and Recap
- **Directory:** `ex03/`
- **Files to submit:**
  - `Makefile`
  - `main.cpp`
  - Comprehensive implementations (`*.cpp`, `*.h`, `*.hpp`)

#### Functionality
Implementation of purely abstract classes known as interfaces in C++, using them to enforce class structures and behaviors in derived classes.

## Compilation and Execution
Navigate to the specific exercise directory and use the `make` command to compile the projects. Each executable can be run directly to demonstrate the functionalities implemented.

## Ressources Utilisées
- [Apprenez à programmer en C++ sur OpenClassrooms](https://openclassrooms.com/fr/courses/1894236-apprenez-a-programmer-en-c)
- [Programmez en orienté objet avec C++ sur OpenClassrooms](https://openclassrooms.com/fr/courses/7137751-programmez-en-oriente-objet-avec-c)
