file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true src/*.cpp)
file(GLOB_RECURSE HEADERS LIST_DIRECTORIES true inc/*.h)

add_library(ucontrollerstm ${SOURCES})
set_target_properties(ucontrollerstm PROPERTIES PUBLIC_HEADER "${HEADERS}")
target_include_directories(ucontrollerstm PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/inc)

target_link_libraries(ucontrollerstm PUBLIC ucontrollerinterface)

install(TARGETS ucontrollerstm
        PUBLIC_HEADER DESTINATION include/ucontrollerstm/
)