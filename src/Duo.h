#include <pgcc-module.h>


class Duo {
public:
	Duo() {}

	void init() {}
	void deinit() { DBG("deinit duo");}

	void process(Solo& s) {}
};
