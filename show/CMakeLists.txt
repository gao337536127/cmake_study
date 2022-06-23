aux_source_directory(. SHOW_SRCS)

set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
add_library(show SHARED ${SHOW_SRCS})