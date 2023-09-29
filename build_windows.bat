mkdir build

cd build
mkdir windows

cd ..

cmake -S . -B ./build/windows -G"Visual Studio 17 2022" -A"x64" 
cd build
cd windows

msbuild learn_sorting.sln /t:Rebuild /p:Configuration=Debug

cd ..
cd ..
pause