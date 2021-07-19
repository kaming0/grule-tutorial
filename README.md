# grule-tutorial
https://github.com/hyperjumptech/grule-rule-engine/blob/master/docs/Tutorial_en.md
https://github.com/hyperjumptech/grule-rule-engine/blob/master/examples/TutorialExample_test.go

To build the shared library and the c header file:
go build -o tutorial-example.so -buildmode=c-shared tutorial-example.go


To compile main.cpp:
g++ -o main main.cpp ./tutorial-example.so

