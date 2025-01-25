//using namespace std;
//#include <iostream>
//
//
//int max_pos(int n)
//{
//	int pos = 0; 
//	while (n > 0)
//	{
//		pos++; 
//		n >>= 1;
//	}
//	return pos;
//}
//
//
//bool is_on(int n, int pos)
//{
//	return ((n >> (pos - 1)) & 1);
//}
//
//
//int get_c(int a,int b)
//{
//
//	int mexx_pos_b = max_pos(b);
//	int mexx_pos_a = max_pos(a);
//	int c = 0;
//
//	for (int pos = mexx_pos_a + 1; pos <= mexx_pos_b; pos++)
//	{
//		if (is_on(b,pos))
//		{
//			c |= (1 << (pos - 1));
//		}
//	}
//
//
//
//	if (c == 0)
//	{
//		int can_increase = 0;
//		for (int pos = mexx_pos_a; pos >= 1; pos--)
//		{
//			if (!is_on(a, pos) and !is_on(b, pos))
//			{
//				can_increase |= (1LL << (pos - 1));
//			}
//		}
//		if (!can_increase)
//		{
//			int mask = ~a;
//			int pos = 0; 
//			while (true)
//			{
//				if ((mask >> pos) & 1)
//				{
//					return a | (1 << pos);
//				}
//			}
//		}
//	}
//
//
//	if (max_pos(c) == mexx_pos_b)
//	{
//		int mask = 0;
//		for (int pos = 1; pos <=  mexx_pos_a; pos++)
//		{
//			if (not is_on(a, pos) and not is_on(b, pos))
//			{
//				mask |= (1LL << (pos - 1));
//			}
//			int new_c = c | mask;
//			if (new_c >= b)
//				break;
//			c = new_c;
//		}
//		return c;
//	}
//
//
//		
//	int mask = 0;
//	for (int pos = mexx_pos_a; pos >= 1; pos--)
//	{
//		if (not is_on(a, pos) and not is_on(b, pos))
//		{
//			mask |= (1LL << (pos - 1));
//		}
//	}
//	return c | mask;	
//
//}
//
//
//int main()
//{
//	int t; cin >> t;
//
//
//
//	while (t--)
//	{
//		int a; int b; cin >> a >> b;
//		int c = 0;
//		int mexx_pos_b = max_pos(b);
//		int mexx_pos_a = max_pos(a);
//
//		for (int pos = mexx_pos_b; pos >= 1; pos--)
//		{
//			if (not is_on(a, pos) and not is_on(b, pos))
//			{
//				c |= (1LL << (pos - 1));
//			}
//		}
//
//		if (c <= a)
//			c = get_c(a,b);
//
//		cout << a << " " << b << " " << c << endl;
//	}
//	
//}
//
//
//
