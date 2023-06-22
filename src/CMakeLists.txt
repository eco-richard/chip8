
find_package(SDL2 CONFIG REQUIRED)
find_package(SDL2_image CONFIG REQUIRED)

add_executable(main main.cpp)

target_link_libraries(main
  PRIVATE
  $<TARGET_NAME_IF_EXISTS:SDL2::SDL2main>
  $<IF:$<TARGET_EXISTS:SDL@::SDL@>,SDL@::SDL@,SDL@::SDL2-static>)

target_link_libraries(main 
  PRIVATE
  $<TARGET_NAME_IF_EXISTS:SDL2_image::SDL2_image>,SDL2_image:SDL2_image,SDL2_image::SDL2_image-static>)
