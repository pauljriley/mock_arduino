
cmake_minimum_required(VERSION 2.8)

if(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
  # Mac OS X specific code here.
  set(ARDUINO_SDK_PATH /Applications/Arduino.app/Contents/Resources/Java)
endif()

if(${CMAKE_SYSTEM_NAME} MATCHES "Windows")
  # Windows specific code here.
  set(BINDIR32_ENV_NAME "ProgramFiles(x86)")
  set(BINDIR32 $ENV{${BINDIR32_ENV_NAME}})
  set(ARDUINO_SDK_PATH ${BINDIR32}/Arduino)
endif()

set(ARDUINO_SDK_VERSION 1.0)

if(NOT DEFINED BOARDPORT)
  set(BOARDPORT "/dev/tty.usbmodem1411")
endif()

set(PROJECT_NAME mock_arduino)
project(${PROJECT_NAME})

if(DEFINED ENV{TEST})
  enable_testing()
  add_subdirectory(gmock)
  include_directories(
      ${gmock_SOURCE_DIR}/include
      ${CMAKE_SOURCE_DIR}
      ${CMAKE_SOURCE_DIR}/include
      ${CMAKE_BINARY_DIR})

  add_executable(mock_arduino_test
      include/hardwareSerial.h
      include/Stream.h
      include/Print.h
      )

  target_link_libraries(mock_arduino_test gmock gmock_main)
  add_test(AllTestsForArduino mock_arduino_test --gtest_color=on --gtest_output=xml)

endif()