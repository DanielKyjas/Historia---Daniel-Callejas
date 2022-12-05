// Historia - Daniel Callejas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//


#include<iostream>
#include <windows.h> 

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8); 
    int sel;
    do {
    system("CLS");
    std::cout << "Eres la última persona en la faz de la tierra y estas descansando en tu casa. De repente alguien toca la puerta\n";
        std::cout << "¿Qué haces?\n";
        std::cout << "--------------------------------\n";
        std::cout << "|      1.- Abrir                |\n";
        std::cout << "|      2.- Preguntar quien es   |\n";
        std::cout << "|      3.-Ignorarlo             |\n";
        std::cout << "---------------------------------\n";
        std::cin >> sel;
        switch (sel)
        {
        case 1:
            std::cout << "Al abrir la puerta, te das cuenta de que quien toco a tu puerta es tu mejor amigo de la infancia. desconcertad@ lo dejas pasar, empiezan a hablar sobre cosas tan banales como";
            std::cout << " las veces que jugaban cerca del rio en su infancia o que fue de sus vidas después de la escuela, pero te pregunta ¿Que has hecho de tu vida?\n";
            std::cout << "¿Qué haces?\n";
            std::cout << "--------------------------------\n";
            std::cout << "|      1.- Responder            |\n";
            std::cout << "|      2.- Evitar la pregunta   |\n";
            std::cout << "---------------------------------\n";
            std::cin >> sel;
            switch (sel)
            {
            case 1:
                std::cout << "Extrañado por la pregunta decides responder, le cuentas que después de que se dejaron de ver durante la niñez, lograste graduarte de la universidad, conseguiste trabajo y  ";
                std::cout << "todo iba bien hasta que de repente ya no quedaba nadie en el mundo. El hecho de contar lo que fue de tu vida, te puso a reflexionar ¿Como llegaste a esta situación?. Lo ";
                std::cout << "único que sabias es que de un día a otro, toda persona que sabias había desaparecido junto al resto del mundo. Y de repente tu amigo aparece en la puerta como si nada,  ";
                std::cout << "así que le preguntas como es que el llego ahí.\n - No te preocupes por mi - dijo con una voz calmada -, después de todo, yo no soy la persona que esta siendo juzgada.\n";
                std::cout << "Estas palabras resonaron durante unos segundos. ¿Juzgada?, a que se puede referir si es que en ese paramo no hay nadie capaz de siquiera cumplir la función de un juez.";
                std::cout << "¿A que te refieres con que estoy siendo juzgado?- preguntas frenéticamente-. Pero el solo sonríe.\n";
                std::cout << "¿Qué haces?\n";
                std::cout << "------------------------------------------------------------\n";
                std::cout << "|      1.- Seguir preguntando acerca del mismo tema        |\n";
                std::cout << "|      2.- Preguntar otra vez que ha hecho el de su vida   |\n";
                std::cout << "------------------------------------------------------------\n";
                std::cin >> sel;
                switch (sel)
                {
                case 1:
                    std::cout << "-Sinceramente disfruto mucho de estos momentos, pero si tanto ansias la verdad con gusto te revelaré la verdad-. Cuestionandote de que si la verdad te hara sentit mejor";
                    std::cout << ", meditas acerca de seguir con esta conversacion pero tu curiosidad se impone ante la preocupación, por lo que permites que siga.\n -¿Recuerdas esos dias los que nabamos  ";
                    std::cout << "en el rio, por supuesto que si, acabamos de hablar de ello. Pero posiblemente lo que no recuerdas es como yo mori en ese rio. Dejame me corrijo. ¡Tú permitiste que yo me ";
                    std::cout << "me ahogara en ese rio!-. atonito ante esas declaraciones, tratas de recordar el dia que el menciona sin embargo, tu mente se mantiene en blanco. -¡Por supuesto que no lo";
                    std::cout << " lo recuerdas!, para ti fui un misero y lamentable asaje de tu vida, pero eso ya se esta corrigiendo ¿no es asi?. De seguro te preguntas como es que llegate a ser la ultima";
                    std::cout << "persona en el mundo, pues un dia te morite y ahora estas siendo juzgado para ver si te vas al cielo o el infierno donde mereces estar-. Y de repento todo en tu cabeza se ";
                    std::cout << "se aclara, antes de que no hubiera nada en el mundo, en un asalto fallido terminaste herido y falleciendo. -Pero veras - dice tu amigo -, a mi solo me enviaron para dar mi ";
                    std::cout << "opinion acerca de tu destino. ";
                }
                switch (sel)
                {
                case 2:
                    std::cout << "-¿Yo?- pregunta desconcertado - Pense que te eria más importante la parte del juicio pero te complacere, despues de la niñez lo unico que he hecho con mi vida ha sido, no";
                    std::cout << "tener una-. Sorprendido con esta rspuesta le preguntas a que e refiere. -Me refiero a que un dia en el rio, tú dejaste que me ahogara, te pedi ";
                    
                break;
            default:
                break;
            }
            break;
        case 2:
            std::cout << "Al preguntar nadie contesta, estas segur@ de que estas empezando a tener alucinaciones por estar tanto tiempo solo, pero con esperanza decides abrir la puerta para averiguar";
            std::cout << " quien podría ser, pero al hacerlo no hay nadie. Cierras la puerta, volteas y aparece tu mejor amigo de la infancia. Lo ves con la cabeza sangrando y le preguntas -¿Qué te ";
            std::cout << " paso?. El te responde que la herida es de hace mucho tiempo y que no te preocupes.\n";
            break;
        case 3:
            std::cout << "Despues de un tiempo logras ignorar el ruido y regresas a tus actividades, sin embargo despues de un rato empiezan a tocar la puerta aun mas fuerte. Estas decidio a ignorarlo,";
            std::cout << "Pero cualquier otro ruido ue hagas se ve opacado por el estruendoso ruido que hace cada golpeteo a la puerta. Eres incapaz de tan siquiera oir tus propios pensamientos, y los ";
            std::cout << "ruidos se vuelven cada vez mas fuertes.";
        default:
            break;
        }
    } while (sel > 3);
}

