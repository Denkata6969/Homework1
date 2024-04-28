day1:
	mkdir day1

files: 
	touch ./day1/file1 ./day1/file2 ./day1/file3


task1: 
	echo "Hello Bash"> ./day1/file1
task2: 
	cat ./day1/file1 > ./day1/file2
	pwd > ./day1/file3
task3: 
	mkdir ./day1/testDir
	
task3_1:
	cp ./day1/file* ./day1/testDir
task4 : 
	mkdir ./day1/testDir/testNested
	
task4_1:
	cp ./day1/testDir/file[1..2] ./day1/testDir/testNested
task5:
	rm ./day1/file*
task6:
	mkdir ./day1/testDirCopy
task6_1:
	cp -r ./day1/testDir ./day1/testDirCopy
task7:
	cd day1
task7_1:
	rm /testDirCopy/file1
task8:
	rm -i testDirCopy/*
exercise 5:
	sort < numbers.txt | head -n 1 && sort < numbers.txt | tail -n 1

clean:
	rm -rf day1