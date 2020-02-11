class Solution {
public:
	string addBinary(string a, string b) {
		string res;
		int carry = 0, tmp = 0;
		int na = a.size();
		int nb = b.size();
		int n = max(na, nb);
		if (na>nb)
		{
			for (int i = 0; i<na - nb; i++)
				b.insert(b.begin(), '0');
		}
		else if (nb > na)
		{
			for (int i = 0; i<nb - na; i++)
				a.insert(a.begin(), '0');
		}
		for (int i = n - 1; i >= 0; i--){
			tmp = (a[i] - '0') + (b[i] - '0') + carry;
			if (tmp == 0)
			{
				res.insert(res.begin(), '0');
				carry = 0;
			}
			else if (tmp == 1)
			{
				res.insert(res.begin(), '1');
				carry = 0;
			}
			else if (tmp == 2)
			{
				res.insert(res.begin(), '0');
				carry = 1;
			}
			else if (tmp == 3)
			{
				res.insert(res.begin(), '1');
				carry = 1;
			}
		}
		if (carry == 1)
			res.insert(res.begin(), '1');
		return res;
	}
};