MODULE=pgcc-basics

all: install

install:
	~/.pgcc/pgcc-declare-mod $(MODULE)

deinstall:
	~/.pgcc/pgcc-declare-mod -d $(MODULE)
