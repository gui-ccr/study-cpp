#include <iostream>

// using namespace std;

/*
namespace é uma solução para previnir conflitos de nomes em projetos maiores 
cada entidade necessita de um nome unico 
namespace permite identificar entidades nomeadas quando os NAMESPACE's forem diferentes
*/

namespace Um{
    int x = 1;
}
namespace Dois{
    int x = 2;
}

main()
{
// using namespace std; da pra usar dentro ou fora do main()
// não é recomendado usar por causa que posso perder o habito de usar o std::
// ja que o std:: possui varias funções como std::distance, porem da pra limitar 
// utilizando "using std::cout | using std::string"

using std::string;
using std::cout;

    int x = 10;
    std::string name = "Guilherme";
    std::cout << x ;

// ou então da pra criar funções usando o namespace 
    std::cout << Um::x ;
    std::cout << Dois::x ;

    return 0;
}