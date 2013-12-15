#include <stdio.h>

#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>

int c_add(int a, int b) {
	int c = a + b;
	return c;
}

luaL_Reg c_lib [] = {
	{"c_add", c_add},
	{NULL, NULL}
};


int main(int argc, char *argv[]) {
	printf("--> call lua script from C...\n");

// 1. init lua env
	lua_State * L;
	L = lua_open();

// 2. load script
	if (luaL_loadfile(L, "script/test.lua")) {
		printf("--> [Error] load script failed.\n");
		return;
	}

// 3. register C function
	lua_register(L, "clib", c_lib);

	lua_getglobal(L, "foo");
	lua_pushnumber(L, 3);
	lua_pushnumber(L, 5);

// 4. close lua env
	lua_close(L);

	printf("Please enter to exit...\n");
	getchar();

	return 0;
}

