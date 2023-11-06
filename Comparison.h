#pragma once

template <typename T1, typename T2>
class Comparison
{
public:
	Comparison(T1 num1, T2 num2) : num1_(num1), num2_(num2) {}
	~Comparison() = default;

	auto Min() -> typename std::common_type<T1, T2>::type
	{
		if (num1_ <= num2_) {
			return static_cast<typename std::common_type<T1, T2>::type>(num1_);
		}

		return static_cast<typename std::common_type<T1, T2>::type>(num2_);
	}

private:
	T1 num1_;
	T2 num2_;
};

