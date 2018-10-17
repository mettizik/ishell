ishell: distdir
	g++ src/*.cpp common/*.c -fpermissive -Iinclude -I. -lplist -lpthread -lusbmuxd -limobiledevice -lgnutls -ltasn1 -lgcrypt -o dist/ishell

distdir:
	mkdir -p dist

clean:
	rm -rdf dist

all: ishell
