auto add(int i1, double d2) ->
	decltype(i1 + d2)
{
	return i1 + d2;
}

template<typename T1, typename T2>
auto add1(T1 a, T2 b) -> decltype(a + b)
{
	return a + b;
}

int main(int argc, char **argv)
{
	add(1, 2.1);

	add1(1, 2.1);
	return 0;
}
