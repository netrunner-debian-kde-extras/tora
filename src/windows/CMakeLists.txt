INCLUDE_DIRECTORIES(
${CMAKE_SOURCE_DIR}/src/windows/
)

# SET(WINDOWS_MOC_CLASSES
# )

SET(WINDOWS_LIB_SOURCES
cregistry.h
resource.h

cregistry.cpp

tora.ico
tora.rc
)

# QT4_WRAP_CPP(WINDOWS_MOC_SOURCES ${WINDOWS_MOC_CLASSES})

SET(WINDOWS_LIB "windows_lib")
ADD_LIBRARY(${WINDOWS_LIB} STATIC ${WINDOWS_LIB_SOURCES} )#${WINDOWS_MOC_SOURCES})

