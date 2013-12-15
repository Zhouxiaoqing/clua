co = coroutine.create(function()
	for i = 0, 10, 1 do
		print(coroutine.status(co));
		print("will yield : " .. i);
		coroutine.yield();
	end
end)

print(coroutine.status(co));
print(coroutine.resume(co));

print(coroutine.status(co));
print(coroutine.resume(co));

print(coroutine.status(co));
print(coroutine.resume(co));

print(coroutine.status(co));
print(coroutine.resume(co));

print(coroutine.status(co));
print(coroutine.resume(co));

print(coroutine.status(co));
print(coroutine.resume(co));

print(coroutine.status(co));
print(coroutine.resume(co));

print(coroutine.status(co));
print(coroutine.resume(co));

print(coroutine.status(co));
print(coroutine.resume(co));

print(coroutine.status(co));
print(coroutine.resume(co));

print(coroutine.status(co));
print(coroutine.resume(co));

print(coroutine.status(co));
print(coroutine.resume(co));
