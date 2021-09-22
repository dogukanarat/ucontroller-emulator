file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true src/*.cpp)
file(GLOB_RECURSE HEADERS LIST_DIRECTORIES true inc/*.h)

add_library(ucontrollerinterface ${SOURCES})
set_target_properties(ucontrollerinterface PROPERTIES PUBLIC_HEADER "${HEADERS}")
target_include_directories(ucontrollerinterface PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/inc)

install(TARGETS ucontrollerinterface
        PUBLIC_HEADER DESTINATION include/ucontrollerinterface/
)