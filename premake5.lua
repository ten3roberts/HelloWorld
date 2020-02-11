workspace "HelloWorld"
    -- Only x64 architecture is supported
    architecture "x64"
    configurations { "Debug", "Release" }
    startproject "crescent"


project "HelloWorld"
    kind "ConsoleApp"

	language "C++"
	cppdialect "C++17"
    targetdir "bin"

	-- sets the compiler include directories for the source files and glfw
    includedirs { "src", "vendor/glfw/include" }
    includedirs { "src", "vendor/" }

    files {"src/**.h", "src/**.cpp"}
    
	-- links glfw with crescent

	-- specifies configuration specific options
    filter "configurations:Debug"
      defines { "DEBUG=1", "RELEASE=0" }
      symbols "On"

   filter "configurations:Release"
      defines { "DEBUG=0", "RELEASE=1" }
      optimize "On"

	-- sets platform specific includes

    
