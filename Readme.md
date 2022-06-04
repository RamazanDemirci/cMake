
# configure and build with cmake using gui

./confugure.sh
./build/sh
./run.sh


mkdir -p out/build

cmake -S . -B out/build/




Lesson 1 : https://www.youtube.com/watch?v=nlKcXPUJGwA&list=PLalVdRk2RC6o5GHu618ARWh0VO0bFlif4
Lesson 2 : https://www.youtube.com/watch?v=kEGQKzhciKc&list=PLalVdRk2RC6o5GHu618ARWh0VO0bFlif4&index=2
Lesson 3 : https://www.youtube.com/watch?v=ED-WUk440qc&list=PLalVdRk2RC6o5GHu618ARWh0VO0bFlif4&index=3


# git submodules

git submodule add https://github.com/glfw/glfw.git external/glfw