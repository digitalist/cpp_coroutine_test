Corutines test example with cppcoro and clang 

for ubuntu 18.04:
```
sudo apt install clang libc++-dev libc++abi-dev
git clone https://github.com/lewissbaker/cppcoro.git
mkdir -p build && cd build
cmake ..
make
./coroutines_test
```
