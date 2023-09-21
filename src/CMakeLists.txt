set(exe_name ${MAIN_PROJECT})

set(src_files
	main.cpp
	Sorter.cpp
	SortTester.cpp
)

source_group("Main" FILES ${src_files})
add_executable(${exe_name} 
	${src_files}
)