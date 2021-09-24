file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true src/*.cpp)
file(GLOB_RECURSE HEADERS LIST_DIRECTORIES true inc/*.h)

add_executable(app_emulator ${SOURCES})
target_include_directories(app_emulator PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/inc)

target_link_libraries( app_emulator PUBLIC
    ucontrollerinterface
    ucontrolleremulator
    ucontrollerst
)
target_compile_definitions(app_emulator PUBLIC EMULATOR)

add_executable(app_stm ${SOURCES})
target_include_directories(app_stm PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/inc)

target_link_libraries( app_stm PUBLIC
    ucontrollerinterface
    ucontrolleremulator
    ucontrollerstm
)
target_compile_definitions(app_stm PUBLIC STM)

install(TARGETS app_emulator)
install(TARGETS app_stm)