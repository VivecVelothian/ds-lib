test_mem_map: tests/mem_map_tests.c src/mem_map.c tests/munit.c
	gcc $^ -o test_mem_map

clean:
	rm -f test_mem_map