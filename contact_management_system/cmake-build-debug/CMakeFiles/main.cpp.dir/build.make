# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/giovanic/Descargas/novelas/clion-2023.3.3/bin/cmake/linux/x64/bin/cmake

# The command to remove a file.
RM = /home/giovanic/Descargas/novelas/clion-2023.3.3/bin/cmake/linux/x64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/giovanic/Documentos/Tareas/1S 2024/EDD/practica2EDD/contact_management_system"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/giovanic/Documentos/Tareas/1S 2024/EDD/practica2EDD/contact_management_system/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/main.cpp.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/main.cpp.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/main.cpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main.cpp.dir/flags.make

CMakeFiles/main.cpp.dir/util/Scan.cpp.o: CMakeFiles/main.cpp.dir/flags.make
CMakeFiles/main.cpp.dir/util/Scan.cpp.o: /home/giovanic/Documentos/Tareas/1S\ 2024/EDD/practica2EDD/contact_management_system/util/Scan.cpp
CMakeFiles/main.cpp.dir/util/Scan.cpp.o: CMakeFiles/main.cpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/giovanic/Documentos/Tareas/1S 2024/EDD/practica2EDD/contact_management_system/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/main.cpp.dir/util/Scan.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.cpp.dir/util/Scan.cpp.o -MF CMakeFiles/main.cpp.dir/util/Scan.cpp.o.d -o CMakeFiles/main.cpp.dir/util/Scan.cpp.o -c "/home/giovanic/Documentos/Tareas/1S 2024/EDD/practica2EDD/contact_management_system/util/Scan.cpp"

CMakeFiles/main.cpp.dir/util/Scan.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/main.cpp.dir/util/Scan.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/giovanic/Documentos/Tareas/1S 2024/EDD/practica2EDD/contact_management_system/util/Scan.cpp" > CMakeFiles/main.cpp.dir/util/Scan.cpp.i

CMakeFiles/main.cpp.dir/util/Scan.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/main.cpp.dir/util/Scan.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/giovanic/Documentos/Tareas/1S 2024/EDD/practica2EDD/contact_management_system/util/Scan.cpp" -o CMakeFiles/main.cpp.dir/util/Scan.cpp.s

CMakeFiles/main.cpp.dir/main.cpp.o: CMakeFiles/main.cpp.dir/flags.make
CMakeFiles/main.cpp.dir/main.cpp.o: /home/giovanic/Documentos/Tareas/1S\ 2024/EDD/practica2EDD/contact_management_system/main.cpp
CMakeFiles/main.cpp.dir/main.cpp.o: CMakeFiles/main.cpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/giovanic/Documentos/Tareas/1S 2024/EDD/practica2EDD/contact_management_system/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/main.cpp.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.cpp.dir/main.cpp.o -MF CMakeFiles/main.cpp.dir/main.cpp.o.d -o CMakeFiles/main.cpp.dir/main.cpp.o -c "/home/giovanic/Documentos/Tareas/1S 2024/EDD/practica2EDD/contact_management_system/main.cpp"

CMakeFiles/main.cpp.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/main.cpp.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/giovanic/Documentos/Tareas/1S 2024/EDD/practica2EDD/contact_management_system/main.cpp" > CMakeFiles/main.cpp.dir/main.cpp.i

CMakeFiles/main.cpp.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/main.cpp.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/giovanic/Documentos/Tareas/1S 2024/EDD/practica2EDD/contact_management_system/main.cpp" -o CMakeFiles/main.cpp.dir/main.cpp.s

CMakeFiles/main.cpp.dir/util/Token.cpp.o: CMakeFiles/main.cpp.dir/flags.make
CMakeFiles/main.cpp.dir/util/Token.cpp.o: /home/giovanic/Documentos/Tareas/1S\ 2024/EDD/practica2EDD/contact_management_system/util/Token.cpp
CMakeFiles/main.cpp.dir/util/Token.cpp.o: CMakeFiles/main.cpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/giovanic/Documentos/Tareas/1S 2024/EDD/practica2EDD/contact_management_system/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/main.cpp.dir/util/Token.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.cpp.dir/util/Token.cpp.o -MF CMakeFiles/main.cpp.dir/util/Token.cpp.o.d -o CMakeFiles/main.cpp.dir/util/Token.cpp.o -c "/home/giovanic/Documentos/Tareas/1S 2024/EDD/practica2EDD/contact_management_system/util/Token.cpp"

CMakeFiles/main.cpp.dir/util/Token.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/main.cpp.dir/util/Token.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/giovanic/Documentos/Tareas/1S 2024/EDD/practica2EDD/contact_management_system/util/Token.cpp" > CMakeFiles/main.cpp.dir/util/Token.cpp.i

CMakeFiles/main.cpp.dir/util/Token.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/main.cpp.dir/util/Token.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/giovanic/Documentos/Tareas/1S 2024/EDD/practica2EDD/contact_management_system/util/Token.cpp" -o CMakeFiles/main.cpp.dir/util/Token.cpp.s

CMakeFiles/main.cpp.dir/grupo/Contacto.cpp.o: CMakeFiles/main.cpp.dir/flags.make
CMakeFiles/main.cpp.dir/grupo/Contacto.cpp.o: /home/giovanic/Documentos/Tareas/1S\ 2024/EDD/practica2EDD/contact_management_system/grupo/Contacto.cpp
CMakeFiles/main.cpp.dir/grupo/Contacto.cpp.o: CMakeFiles/main.cpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/giovanic/Documentos/Tareas/1S 2024/EDD/practica2EDD/contact_management_system/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/main.cpp.dir/grupo/Contacto.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.cpp.dir/grupo/Contacto.cpp.o -MF CMakeFiles/main.cpp.dir/grupo/Contacto.cpp.o.d -o CMakeFiles/main.cpp.dir/grupo/Contacto.cpp.o -c "/home/giovanic/Documentos/Tareas/1S 2024/EDD/practica2EDD/contact_management_system/grupo/Contacto.cpp"

CMakeFiles/main.cpp.dir/grupo/Contacto.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/main.cpp.dir/grupo/Contacto.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/giovanic/Documentos/Tareas/1S 2024/EDD/practica2EDD/contact_management_system/grupo/Contacto.cpp" > CMakeFiles/main.cpp.dir/grupo/Contacto.cpp.i

CMakeFiles/main.cpp.dir/grupo/Contacto.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/main.cpp.dir/grupo/Contacto.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/giovanic/Documentos/Tareas/1S 2024/EDD/practica2EDD/contact_management_system/grupo/Contacto.cpp" -o CMakeFiles/main.cpp.dir/grupo/Contacto.cpp.s

# Object files for target main.cpp
main_cpp_OBJECTS = \
"CMakeFiles/main.cpp.dir/util/Scan.cpp.o" \
"CMakeFiles/main.cpp.dir/main.cpp.o" \
"CMakeFiles/main.cpp.dir/util/Token.cpp.o" \
"CMakeFiles/main.cpp.dir/grupo/Contacto.cpp.o"

# External object files for target main.cpp
main_cpp_EXTERNAL_OBJECTS =

main.cpp: CMakeFiles/main.cpp.dir/util/Scan.cpp.o
main.cpp: CMakeFiles/main.cpp.dir/main.cpp.o
main.cpp: CMakeFiles/main.cpp.dir/util/Token.cpp.o
main.cpp: CMakeFiles/main.cpp.dir/grupo/Contacto.cpp.o
main.cpp: CMakeFiles/main.cpp.dir/build.make
main.cpp: CMakeFiles/main.cpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="/home/giovanic/Documentos/Tareas/1S 2024/EDD/practica2EDD/contact_management_system/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable main.cpp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main.cpp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main.cpp.dir/build: main.cpp
.PHONY : CMakeFiles/main.cpp.dir/build

CMakeFiles/main.cpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/main.cpp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/main.cpp.dir/clean

CMakeFiles/main.cpp.dir/depend:
	cd "/home/giovanic/Documentos/Tareas/1S 2024/EDD/practica2EDD/contact_management_system/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/giovanic/Documentos/Tareas/1S 2024/EDD/practica2EDD/contact_management_system" "/home/giovanic/Documentos/Tareas/1S 2024/EDD/practica2EDD/contact_management_system" "/home/giovanic/Documentos/Tareas/1S 2024/EDD/practica2EDD/contact_management_system/cmake-build-debug" "/home/giovanic/Documentos/Tareas/1S 2024/EDD/practica2EDD/contact_management_system/cmake-build-debug" "/home/giovanic/Documentos/Tareas/1S 2024/EDD/practica2EDD/contact_management_system/cmake-build-debug/CMakeFiles/main.cpp.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/main.cpp.dir/depend
