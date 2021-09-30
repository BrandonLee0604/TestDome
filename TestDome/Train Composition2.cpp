#include "stdio.h"
/*
class A {
public:
	A() :data(0) { SetData(); printf("data=%d", data); }
	virtual void SetData() { data = 1; }
protected:
	int data;
};

class B :public A {
public:
	B(){}
	virtual void SetData() { data = 2; }
};

int main(int argc, char* argv[]){
	B b;
	return 0;
	}


class TryConst {
public:
	TryConst() {};
private:
	static int aa;
};

int TryConst::aa = 0;


class TestSize1 {
public:
	TestSize1():a(0){}
	virtual void F() = 0;
private:
	int a;
};

class TestSize2 : public TestSize1 {
public:
	TestSize2():b(1){}
	virtual void F() { b = 3; }
private:
	int b;
};

int main(int argc, char* argv[]) {
	printf("size of TestSize2 = %d", sizeof(TestSize2));
	return 0;
}
*/

class P1 {
public:
	P1() { p = new char[10]; }
	~P1() { delete[] p; }
private:
	char* p;
};

class P2 : public P1 {
public:
	P2() { q = new char[20]; }
	~P2() { delete[] q; }
private:
	char* q;
};

int main(int argc, char* argv[]) {
	P1* pp = new P2;
	
	delete pp;
	return 0;
}