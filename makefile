all:
	g++ -O3 twinfrogs.cpp -o calc `pkg-config --cflags --libs gtk4` 

