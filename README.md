Project structure:
NetworkingInCpp/           # Root folder
├── CMakeLists.txt          # Root CMake file
├── main.cpp                # Main entry point of the project
├── Class1_CMake/           # Subproject folder
│   ├── CMakeLists.txt      # CMake file for Class1_CMake
│   ├── inc/                # Header files for Class1_CMake
│   │   └── logger.h        # Header file for the Logger class
│   └── src/                # Source files for Class1_CMake
│       └── logger.cpp      # Implementation of the Logger class
└── third_party/            # Third-party libraries
    └── spdlogger/          # spdlog library folder
        └── install/        # Installation folder for spdlog
            ├── include/    # spdlog header files
            └── libs/       # spdlog library files (e.g., libspdlog.a, .so)
