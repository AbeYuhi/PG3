#pragma once

template <typename T1, typename T2>
class Comparison
{
public:
	Comparison(T1 num1, T2 num2);
	~Comparison();

	template <typename T1, typename T2>
	auto Min() const -> decltype(std::declval(T1));

private:
	T1 num1_;
	T2 num2_;
};

