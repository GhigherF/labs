#include <iostream>
#include <stack>
using namespace std;

void function(stack <char> steck)
{
	int place = 0, counter = 0, target = -1, trgt = 0;
	string Output;
	bool flag = false;
	stack <char> temp, temp2, output, temp3, temp4;
	while (steck.empty() == false)
	{
		if (steck.top() != ']' && steck.top() != ')' && steck.top() != '}') { cout << endl << "WRONG!"; exit(69); }
		switch (steck.top())
		{
		case ']':
		{
			while (steck.empty() != true)
			{
				temp.push(steck.top());
				temp2.push(steck.top());
				if (steck.top() == ']')target += 1;
				if (steck.top() != '[')
				{
					counter += 1;
					steck.pop();
				}
				else {
					flag = true;

					steck.pop();
					counter += 1;
					if (target == trgt)
					{
						place = counter;
						break;
					}
					trgt += 1;


				}
				
			}
			for (int i = 1; i < place - 1; i++)
			{
				temp2.pop();
				temp.push(temp2.top());
				temp3.push(temp2.top());

			}

			if (flag == true)
			{
				for (int i = 1; i < place - 1; i++)
				{
					temp4.push(temp.top());
					temp.pop();
				}
				Output = "";
				while (temp3.empty() != true)
				{
					Output = Output + temp3.top();
					temp3.pop();
				}
				while (temp4.empty() != true)
				{
					temp3.push(temp4.top());
					temp4.pop();
				}
				function(temp3);
			}
			else { cout << endl << "WRONG!"; exit(69); }
			break;
		}
		case '}':
		{
			while (steck.empty() != true)
			{
				temp.push(steck.top());
				temp2.push(steck.top());
				if (steck.top() == '}')target += 1;
				if (steck.top() != '{')
				{
					counter += 1;
					steck.pop();
				}
				else {
					flag = true;

					steck.pop();
					counter += 1;
					if (target == trgt)
					{
						place = counter;
						break;
					}
					trgt += 1;


				}

			}
			for (int i = 1; i < place - 1; i++)
			{
				temp2.pop();
				temp.push(temp2.top());
				temp3.push(temp2.top());

			}

			if (flag == true)
			{
				for (int i = 1; i < place - 1; i++)
				{
					temp4.push(temp.top());
					temp.pop();
				}
				Output = "";
				while (temp4.empty() != true)
				{
					temp3.push(temp4.top());
					temp4.pop();
				}
				function(temp3);
			}
			else { cout << endl << "WRONG!"; exit(69); }
			break;
		}
		case ')':
		{
			while (steck.empty() != true)
			{
				temp.push(steck.top());
				temp2.push(steck.top());
				if (steck.top() == ')')target += 1;
				if (steck.top() != '(')
				{
					counter += 1;
					steck.pop();
				}
				else {
					flag = true;

					steck.pop();
					counter += 1;
					if (target == trgt)
					{
						place = counter;
						break;
					}
					trgt += 1;


				}

			}
			for (int i = 1; i < place - 1; i++)
			{
				temp2.pop();
				temp.push(temp2.top());
				temp3.push(temp2.top());

			}

			if (flag == true)
			{
				for (int i = 1; i < place - 1; i++)
				{
					temp4.push(temp.top());
					temp.pop();
				}
				Output = "";
				while (temp4.empty() != true)
				{
					temp3.push(temp4.top());
					temp4.pop();
				}
				function(temp3);
			}
			else { cout << endl << "WRONG!"; exit(69); }
			break;
		}
		}
	}
}
void main()
{
	int counter=0,gg1=0,gg2=0,gg3=0,gg4=0,gg5=0,gg6=0;
	stack <char> stack,temp,output;
	string line,Output;
	cin >> line;
	for (int i = size(line); i >= 0; i--)
	{
		temp.push(line[i]);
	}

	for (int i =0;i<size(line);i++)
	{
		char a;
		a=temp.top();
		if (a == '{' || a=='}' || a=='[' || a == ']' || a == '(' || a == ')') { stack.push(a); output.push(a); counter += 1;};

		temp.pop();
	}	


	for (int i = 0; i <counter; i++)
	{
	Output=output.top()+Output;
		output.pop();
	}
	cout << Output;
	if (Output[0]!='('&&Output[0]!='{'&&Output[0]!='[') { cout << endl << "WRONG!"; exit(69); }
	//Самое интересное//Оформиьть рекурсией?
	for (int i = 0; i <=size(Output); i++)
	{
		if (Output[i] == '(') gg1 += 1;
		if (Output[i] == ')') gg2 += 1;
		if (Output[i] == '[') gg3 += 1;
		if (Output[i] == ']') gg4 += 1;
		if (Output[i] == '{') gg5 += 1;
		if (Output[i] == '}') gg6 += 1;
	}
	if (gg1!=gg2||gg3!=gg4||gg5!=gg6) { cout << endl << "WRONG!"; exit(69); }
	function(stack);
	cout << endl << "Right!";
}

