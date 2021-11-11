#include<bits/stdc++.h>
using namespace std;

class Box {
private:   
    int l, b, h;

public:
	// Poderia escrever também:
	// Box() : l(0), b(0), h(0) {}
    Box() {
        l = 0;
        b = 0;
        h = 0;
    }

    Box(int x, int y, int z) : l(x), b(y), h(z) {}

	// Agora, criarei um Construtor que irá copiar o conteúdo de uma Box para uma outra
	Box (const Box& B) {
		this->l = B.l;
		this->b = B.b;
		this->h = B.h;
	};


	// Getters

	// const significa que não estamos modificando variáveis da classe
    int getLength() const {
        return l;
    }
    int getBreadth() const{
        return b;
    }
    int getHeight() const{
        return h;
    }
    long long CalculateVolume() {
        long long volume = (long long) l * b * h;
        return volume;
    }
    

	// Overload operator
	// Para simplesmente usar Objeto < outro Objeto, preciso explicar o que fazer quando o programa se deparar com isso
	// operator < (Box& b2) ,  ou seja, quando eu utilizar b1 < b2, ele irá comparar o b1 (vai ser o objeto padrão, para acessá-lo basta utilizar l, b, h)
	// E tem também o b2, enviado para a função. Para acessá-lo, é necessário usar b2.l, b2.b, b2.h
    bool operator < (Box& b2) {
        if (l < b2.l)
            return true;
        if (b < b2.b && l == b2.l)
            return true;
        if (h < b2.h && b == b2.b && l == b2.l)
            return true;
        return false;
    }
    

	// Overloading o output stream (<<)
	// ostream& :  Referência para a output stream é o retorno da função
	// ostream& out :  Parâmetro, referência para a stream de saída (output stream)
	// Box& B :  Referência para o objeto

	// Friend, o que significa??
	// Essa função operator<< aceita apenas um parâmetro, mas estou com dois parâmetros
	// Para manter os dois parâmetros, adicionamos o "friend"
	// Uma função friend significa que podemos usar essa função de fora da minha classe, ou seja, podemos acessar os elementos "private" ou "protected"
    friend ostream& operator<<(ostream& out, Box& b){
        out << b.l << " " << b.b << " " << b.h;
        return out;
    }
};




void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}