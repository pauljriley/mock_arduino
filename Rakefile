file "build_host"	do |t| mkdir t.name end
file "build_target"	do |t| mkdir t.name end

task :clean do
	puts "Clean build artifacts"
	FileUtils.rm_rf("build_host")
	FileUtils.rm_rf("build_target")
end

task :cleantest do
	puts "Clean test build artifacts"
	FileUtils.rm_rf("build_host/mock_arduino_test.dir")
end

task :test => [:cleantest,"build_host"] do
	puts "Building Tests"
	Dir.chdir("build_host") do
		sh "TEST=true cmake ../"
		sh "make all"
		sh "ctest --extra-verbose"
	end

end

task :build => [:clean,"build_target"] do
	puts "Building Target"
	Dir.chdir("build_target") do
		sh "cmake -D CMAKE_TOOLCHAIN_FILE=../arduino-cmake/cmake/ArduinoToolchain.cmake ../"
		sh "make"
	end
end

task :upload => [:clean,:build] do
	Dir.chdir("build_target") do
		sh "make mock_arduino -upload"
	end
end
