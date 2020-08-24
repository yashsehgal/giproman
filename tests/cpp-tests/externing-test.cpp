#include <iostream>

class SampleTest {
  public:
  void sampleMethod() {
    std::cout << "sample method from sample test is now running..." << std::endl;
  }
};


extern "C" {
  SampleTest * New_SampleTest() {
    return new SampleTest();
  }
  void SampleMethodTest(SampleTest * sampleObject) {
    sampleObject->sampleMethod();
  }
}