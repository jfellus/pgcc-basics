#include <pgcc-module.h>


class Solo {
public:
	Solo() {}

	void init() {}
	void deinit() { DBG("deinit solo");}

	void process() {
		static int i = 0;
		DBGV(i++);
	}
};
