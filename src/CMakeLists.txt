set(SOURCES 
	main.cpp
)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_executable(travis_homework ${SOURCES})

target_link_libraries(travis_homework Qt5::Core)
