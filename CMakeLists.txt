CMAKE_MINIMUM_REQUIRED(VERSION 2.8.2)

PROJECT(sample-proj)

# base files
SET(COMMON_FILES
  src/main.cpp
)

# if on OSX, these files are needed
IF(APPLE)
  SET(CMAKE_EXE_LINKER_FLAGS "-framework Foundation -w")

  SET(PLATFORM_FILES
    src/mac/func.m
  )
ELSEIF(UNIX)
  SET(PLATFORM_FILES
    src/linux/func.cpp
  )
ENDIF()

INCLUDE_DIRECTORIES(
  "src"
)

ADD_EXECUTABLE(sample
  ${PLATFORM_FILES}
  ${COMMON_FILES}
)
