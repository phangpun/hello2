# 요구 CMake 최소 버전
CMAKE_MINIMUM_REQUIRED ( VERSION 2.8 )
 
# 프로젝트 이름 및 버전
PROJECT ( "hello2" )
 
# 빌드 형상(Configuration)
SET ( CMAKE_CONFIGURATION_TYPES "Debug;Release" )
 
SET ( Sources
    HelloMain.cpp
)

SET ( Headers
	Hello.h
)
 

# 빌드 대상 바이너리 추가
ADD_EXECUTABLE( ${PROJECT_NAME}
	WIN32 
	${Sources}
	${Headers}
)

set_target_properties( ${PROJECT_NAME}
	PROPERTIES LINK_FLAGS_DEBUG "/SUBSYSTEM:CONSOLE"
)

add_library (HelloLibrary 
	SHARED 
	Hello.cpp
)