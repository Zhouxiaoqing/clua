#include <stdio.h>

#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>

int main(int argc, char *argv[]) {
	printf("--> call lua script from C...\n");

// 1. init lua env
	lua_State * L;
	L = lua_open();

// 2. run script
	if (luaL_loadfile(L, "script/test.lua") || lua_pcall(L, 0, 0, 0)) {
		// error...
	}

// 3. close lua env
	lua_close(L);

	printf("Please enter to exit...\n");
	getchar();

	return 0;
}
