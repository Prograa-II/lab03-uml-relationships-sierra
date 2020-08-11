cmake_minimum_required(VERSION 3.14)
project(basic-00-example)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp Universidad.cpp Universidad.h Persona.cpp Persona.h Profesor.cpp Profesor.h Estudiante.cpp Estudiante.h Escuela.cpp Escuela.h Curso.cpp Curso.h)

add_executable(basic-00-example ${SOURCE_FILES})