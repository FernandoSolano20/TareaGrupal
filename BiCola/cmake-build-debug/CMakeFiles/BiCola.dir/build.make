# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.19

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


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

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\fersolano\Documents\Universidad\Estructura de datos\TareaGrupal\BiCola"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\fersolano\Documents\Universidad\Estructura de datos\TareaGrupal\BiCola\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles\BiCola.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\BiCola.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\BiCola.dir\flags.make

CMakeFiles\BiCola.dir\main.cpp.obj: CMakeFiles\BiCola.dir\flags.make
CMakeFiles\BiCola.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\fersolano\Documents\Universidad\Estructura de datos\TareaGrupal\BiCola\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/BiCola.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\PROFES~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\BiCola.dir\main.cpp.obj /FdCMakeFiles\BiCola.dir\ /FS -c "C:\Users\fersolano\Documents\Universidad\Estructura de datos\TareaGrupal\BiCola\main.cpp"
<<

CMakeFiles\BiCola.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BiCola.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\PROFES~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\cl.exe > CMakeFiles\BiCola.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\fersolano\Documents\Universidad\Estructura de datos\TareaGrupal\BiCola\main.cpp"
<<

CMakeFiles\BiCola.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BiCola.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\PROFES~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\BiCola.dir\main.cpp.s /c "C:\Users\fersolano\Documents\Universidad\Estructura de datos\TareaGrupal\BiCola\main.cpp"
<<

CMakeFiles\BiCola.dir\structures\List.cpp.obj: CMakeFiles\BiCola.dir\flags.make
CMakeFiles\BiCola.dir\structures\List.cpp.obj: ..\structures\List.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\fersolano\Documents\Universidad\Estructura de datos\TareaGrupal\BiCola\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/BiCola.dir/structures/List.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\PROFES~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\BiCola.dir\structures\List.cpp.obj /FdCMakeFiles\BiCola.dir\ /FS -c "C:\Users\fersolano\Documents\Universidad\Estructura de datos\TareaGrupal\BiCola\structures\List.cpp"
<<

CMakeFiles\BiCola.dir\structures\List.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BiCola.dir/structures/List.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\PROFES~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\cl.exe > CMakeFiles\BiCola.dir\structures\List.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\fersolano\Documents\Universidad\Estructura de datos\TareaGrupal\BiCola\structures\List.cpp"
<<

CMakeFiles\BiCola.dir\structures\List.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BiCola.dir/structures/List.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\PROFES~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\BiCola.dir\structures\List.cpp.s /c "C:\Users\fersolano\Documents\Universidad\Estructura de datos\TareaGrupal\BiCola\structures\List.cpp"
<<

CMakeFiles\BiCola.dir\structures\Node.cpp.obj: CMakeFiles\BiCola.dir\flags.make
CMakeFiles\BiCola.dir\structures\Node.cpp.obj: ..\structures\Node.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\fersolano\Documents\Universidad\Estructura de datos\TareaGrupal\BiCola\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/BiCola.dir/structures/Node.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\PROFES~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\BiCola.dir\structures\Node.cpp.obj /FdCMakeFiles\BiCola.dir\ /FS -c "C:\Users\fersolano\Documents\Universidad\Estructura de datos\TareaGrupal\BiCola\structures\Node.cpp"
<<

CMakeFiles\BiCola.dir\structures\Node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BiCola.dir/structures/Node.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\PROFES~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\cl.exe > CMakeFiles\BiCola.dir\structures\Node.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\fersolano\Documents\Universidad\Estructura de datos\TareaGrupal\BiCola\structures\Node.cpp"
<<

CMakeFiles\BiCola.dir\structures\Node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BiCola.dir/structures/Node.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\PROFES~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\BiCola.dir\structures\Node.cpp.s /c "C:\Users\fersolano\Documents\Universidad\Estructura de datos\TareaGrupal\BiCola\structures\Node.cpp"
<<

CMakeFiles\BiCola.dir\Controller\Controller.cpp.obj: CMakeFiles\BiCola.dir\flags.make
CMakeFiles\BiCola.dir\Controller\Controller.cpp.obj: ..\Controller\Controller.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\fersolano\Documents\Universidad\Estructura de datos\TareaGrupal\BiCola\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/BiCola.dir/Controller/Controller.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\PROFES~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\BiCola.dir\Controller\Controller.cpp.obj /FdCMakeFiles\BiCola.dir\ /FS -c "C:\Users\fersolano\Documents\Universidad\Estructura de datos\TareaGrupal\BiCola\Controller\Controller.cpp"
<<

CMakeFiles\BiCola.dir\Controller\Controller.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BiCola.dir/Controller/Controller.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\PROFES~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\cl.exe > CMakeFiles\BiCola.dir\Controller\Controller.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\fersolano\Documents\Universidad\Estructura de datos\TareaGrupal\BiCola\Controller\Controller.cpp"
<<

CMakeFiles\BiCola.dir\Controller\Controller.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BiCola.dir/Controller/Controller.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\PROFES~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\BiCola.dir\Controller\Controller.cpp.s /c "C:\Users\fersolano\Documents\Universidad\Estructura de datos\TareaGrupal\BiCola\Controller\Controller.cpp"
<<

# Object files for target BiCola
BiCola_OBJECTS = \
"CMakeFiles\BiCola.dir\main.cpp.obj" \
"CMakeFiles\BiCola.dir\structures\List.cpp.obj" \
"CMakeFiles\BiCola.dir\structures\Node.cpp.obj" \
"CMakeFiles\BiCola.dir\Controller\Controller.cpp.obj"

# External object files for target BiCola
BiCola_EXTERNAL_OBJECTS =

BiCola.exe: CMakeFiles\BiCola.dir\main.cpp.obj
BiCola.exe: CMakeFiles\BiCola.dir\structures\List.cpp.obj
BiCola.exe: CMakeFiles\BiCola.dir\structures\Node.cpp.obj
BiCola.exe: CMakeFiles\BiCola.dir\Controller\Controller.cpp.obj
BiCola.exe: CMakeFiles\BiCola.dir\build.make
BiCola.exe: CMakeFiles\BiCola.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\fersolano\Documents\Universidad\Estructura de datos\TareaGrupal\BiCola\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable BiCola.exe"
	"C:\Program Files\JetBrains\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\BiCola.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests -- C:\PROGRA~2\MICROS~2\2019\PROFES~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\BiCola.dir\objects1.rsp @<<
 /out:BiCola.exe /implib:BiCola.lib /pdb:"C:\Users\fersolano\Documents\Universidad\Estructura de datos\TareaGrupal\BiCola\cmake-build-debug\BiCola.pdb" /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\BiCola.dir\build: BiCola.exe

.PHONY : CMakeFiles\BiCola.dir\build

CMakeFiles\BiCola.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\BiCola.dir\cmake_clean.cmake
.PHONY : CMakeFiles\BiCola.dir\clean

CMakeFiles\BiCola.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" "C:\Users\fersolano\Documents\Universidad\Estructura de datos\TareaGrupal\BiCola" "C:\Users\fersolano\Documents\Universidad\Estructura de datos\TareaGrupal\BiCola" "C:\Users\fersolano\Documents\Universidad\Estructura de datos\TareaGrupal\BiCola\cmake-build-debug" "C:\Users\fersolano\Documents\Universidad\Estructura de datos\TareaGrupal\BiCola\cmake-build-debug" "C:\Users\fersolano\Documents\Universidad\Estructura de datos\TareaGrupal\BiCola\cmake-build-debug\CMakeFiles\BiCola.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles\BiCola.dir\depend

