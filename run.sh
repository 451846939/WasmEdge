mkdir cmakebuild
cd cmakebuild
cmake -DCMAKE_BUILD_TYPE=Release -DWASMEDGE_BUILD_AOT_RUNTIME=OFF -DWASMEDGE_BUILD_TESTS=OFF ..
make -j4
cd ..
# run it!
cd examples/wasmedge_hostfunctionexample_interface/example
cargo run