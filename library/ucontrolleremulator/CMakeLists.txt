file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true src/*.cpp)
file(GLOB_RECURSE HEADERS LIST_DIRECTORIES true inc/*.h)

add_library(ucontrolleremulator ${SOURCES})
set_target_properties(ucontrolleremulator PROPERTIES PUBLIC_HEADER "${HEADERS}")
target_include_directories(ucontrolleremulator PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/inc)

target_link_libraries(ucontrolleremulator PUBLIC ucontrollerinterface)

install(TARGETS ucontrolleremulator
        PUBLIC_HEADER DESTINATION include/ucontrolleremulator/
)