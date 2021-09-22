file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true src/*.cpp)
file(GLOB_RECURSE HEADERS LIST_DIRECTORIES true inc/*.h)

add_executable(emulator_executable ${SOURCES})
target_include_directories(emulator_executable PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/inc)

target_link_libraries(emulator_executable PUBLIC ucontrollerinterface)
target_link_libraries(emulator_executable PUBLIC ucontrolleremulator)
target_link_libraries(emulator_executable PUBLIC ucontrollerstm)

install(TARGETS emulator_executable)