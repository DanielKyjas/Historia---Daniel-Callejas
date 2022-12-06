// Historia - Daniel Callejas.cpp 
//Proyecto cuarto parcial
//Historia con diferentes finales.


#include<iostream>
#include <windows.h> 

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8); 
    int sel,sel2,sel3,sel4,rep;
    do {
        do {
            system("CLS");
            std::cout << "Eres la última persona en la faz de la tierra y estas descansando en tu casa. De repente alguien toca la puerta\n";
            std::cout << "¿Qué haces?\n";
            std::cout << "--------------------------------\n";
            std::cout << "|      1.- Abrir                |\n";
            std::cout << "|      2.-Ignorarlo             |\n";
            std::cout << "---------------------------------\n";
            std::cin >> sel;
            switch (sel)
            {
            case 1:
                std::cout << "Al abrir la puerta, te das cuenta de que quien toco a tu puerta es tu mejor amigo de la infancia. desconcertad@ lo dejas pasar, empiezan a hablar sobre cosas tan banales como";
                std::cout << " las veces que jugaban cerca del rio en su infancia o que fue de sus vidas después de la escuela, pero te pregunta ¿Que has hecho de tu vida?\n";
                do {
                    std::cout << "¿Qué haces?\n";
                    std::cout << "--------------------------------\n";
                    std::cout << "|      1.- Responder            |\n";
                    std::cout << "|      2.- Evitar la pregunta   |\n";
                    std::cout << "---------------------------------\n";
                    std::cin >> sel2;
                    system("CLS");
                    switch (sel2)
                    {
                    case 1:
                        std::cout << "Extrañado por la pregunta decides responder, le cuentas que después de que se dejaron de ver durante la niñez, lograste graduarte de la universidad, conseguiste trabajo y  ";
                        std::cout << "todo iba bien hasta que de repente ya no quedaba nadie en el mundo. El hecho de contar lo que fue de tu vida, te puso a reflexionar ¿Como llegaste a esta situación?. Lo ";
                        std::cout << "único que sabias es que de un día a otro, toda persona que sabias había desaparecido junto al resto del mundo. Y de repente tu amigo aparece en la puerta como si nada,  ";
                        std::cout << "así que le preguntas como es que el llego ahí.\n - No te preocupes por mi - dijo con una voz calmada -, después de todo, yo no soy la persona que esta siendo juzgada.\n";
                        std::cout << "Estas palabras resonaron durante unos segundos. ¿Juzgada?, a que se puede referir si es que en ese paramo no hay nadie capaz de siquiera cumplir la función de un juez.";
                        std::cout << "¿A que te refieres con que estoy siendo juzgado?- preguntas frenéticamente-. Pero el solo sonríe.\n";
                        do {
                            std::cout << "¿Qué haces?\n";
                            std::cout << "------------------------------------------------------------\n";
                            std::cout << "|      1.- Seguir preguntando acerca del mismo tema        |\n";
                            std::cout << "|      2.- Preguntar otra vez que ha hecho el de su vida   |\n";
                            std::cout << "------------------------------------------------------------\n";
                            std::cin >> sel3;
                            system("CLS");
                            switch (sel3)
                            {
                            case 1:
                                std::cout << "-Sinceramente disfruto mucho de estos momentos, pero si tanto ansias la verdad con gusto te revelaré la verdad-. Cuestionandote de que si la verdad te hara sentit mejor";
                                std::cout << ", meditas acerca de seguir con esta conversacion pero tu curiosidad se impone ante la preocupación, por lo que permites que siga.\n -¿Recuerdas esos dias los que nabamos  ";
                                std::cout << "en el rio, por supuesto que si, acabamos de hablar de ello. Pero posiblemente lo que no recuerdas es como yo mori en ese rio. Dejame me corrijo. ¡Tú permitiste que yo me ";
                                std::cout << "me ahogara en ese rio!-. atonito ante esas declaraciones, tratas de recordar el dia que el menciona sin embargo, tu mente se mantiene en blanco. -¡Por supuesto que no lo";
                                std::cout << " lo recuerdas!, para ti fui un misero y lamentable asaje de tu vida, pero eso ya se esta corrigiendo ¿no es asi?. De seguro te preguntas como es que llegate a ser la ultima";
                                std::cout << "persona en el mundo, pues un dia te morite y ahora estas siendo juzgado para ver si te vas al cielo o el infierno donde mereces estar-. Y de repento todo en tu cabeza se ";
                                std::cout << "se aclara, antes de que no hubiera nada en el mundo, en un asalto fallido terminaste herido y falleciendo. -Pero veras - dice tu amigo -, a mi solo me enviaron para dar mi ";
                                std::cout << "opinion acerca de tu destino.\n ";
                                do {
                                    std::cout << "¿Qué haces?\n";
                                    std::cout << "----------------------------------------\n";
                                    std::cout << "|      1.- Pedirle perdon              |\n";
                                    std::cout << "|      2.- Negar lo sucedido           |\n";
                                    std::cout << "----------------------------------------\n";
                                    std::cin >> sel4;
                                    system("CLS");
                                    switch (sel4)
                                    {
                                    case 1:
                                        std::cout << "-El perdón no me regresara a la vida ¿o si?, pero a lo menos tienes esos signo de arrepentimiento.- dice penando en tu respuesta. Pero tu estas seguro que tu destino ya ";
                                        std::cout << "esta marcado. Aunque en realidad sentias un lamento profundo por no recordar el evento, como el dijo nunca compensara la vida perdida. Después de unos segundo que parecían ";
                                        std::cout << "eternos (y seguramente así fue), el te responde. -No te voy a mentir, siento que tus disculpas aun falta un verdadero arrepentimiento. Así que por lo mientras te dejare en ";
                                        std::cout << "este limbo, volveré pronto o tal vez no, quiero que sufras hasta que hayas descubierto lo que en verdad sientes.\n";
                                        std::cout << "Ha quedado atrapado en limbo, de nuevo sin compañía y en una tierra vacía. Ahora solo te queda eperar hasta que tu viejo amigo vuelva a tomar tu decición\n Fin";
                                        break;
                                    case 2:
                                        std::cout << "-Me sorprende que aun sigas en negación, después de todo, siento que toda esta situación tiene que parecerte raro-. Por supuesto que te parece inverosímil esa situación, ";
                                        std::cout << "gran parte de tu vida te la has pasado negando cualquier religión, sin embargo aquí estas, siendo juzgado por alguien de tu pasado. ¿Acaso esto puede ser un mal sueño o en ";
                                        std::cout << "realidad esta pasando.- Podría pasar la eternidad esperando a que entres en razón, pero mejor te enviare un lugar donde confirmaras todas tus sospechas.\n";
                                        std::cout << "Despiertas en una cama sudando. Piensas que todo fue un sueño hasta que al ver a tu alrededor descubres columnas de fuego y unos seres deformes de color negro acercándoce ";
                                        std::cout << "a ti, quieres regresar a tu casa, pero eres incapaz de moverte. -Bienvenido al infierno- dicen los seres con voz de ultratumba. Sueño o no, deseas regresar a tu casa.\n Fin";
                                        break;
                                    default:
                                        break;
                                    }
                                } while (sel4 > 2);
                                break;
                            case 2:
                                std::cout << "-¿Yo?- pregunta desconcertado - Pense que te eria más importante la parte del juicio pero te complacere, despues de la niñez lo unico que he hecho con mi vida ha sido, no";
                                std::cout << "tener una-. Sorprendido con esta rspuesta le preguntas a que e refiere. -Me refiero a que un dia en el rio, tú dejaste que me ahogara- dijo afligido -.\n-Pero es impossible ";
                                std::cout << "-respondiste-. Aunque recuerdas a tu amigo, es remotamente imposible para ti reuperar el recuerdo de su mente.-La verdad es que no importa las circunstancias de mi muerte. ";
                                std::cout << "Ahora quiero que me mires a mi cara y saca tu mejor actuacion, porque de mi depende el resto de tu vida eterna.\n";
                                do {
                                    std::cout << "¿Qué haces?\n";
                                    std::cout << "-------------------------------------------------------------\n";
                                    std::cout << "|      1.- Actuar como si estuvieras arrepentido             |\n";
                                    std::cout << "|      2.- Decir la verdad                                   |\n";
                                    std::cout << "--------------------------------------------------------------\n";
                                    std::cin >> sel4;
                                    system("CLS");
                                    switch (sel4)
                                    {
                                    case 1:
                                        std::cout << "-Definitivamente te daré un 7 por el esfuerzo de esa actuación.- Decía aplaudiendo lentamente- Pero eso solo fue para ver que eras capaz de hacer solo para no ir al  ";
                                        std::cout << "infierno y realmente me tiene intrigado, que mas estas dispuesto a hacer.- Dice con una sonrisa maliciosa. ¿A qué se refiere con eso?, ¿Acaso me va a querer como esclavo";
                                        std::cout << "durante toda la eternidad?, ¿Eso seria igual o mejor que el infierno?, pero no estas dispuesto a averiguarlo.-¿Y que quieres que haga?-respondes preocupado-.\n -Por supuesto ";
                                        std::cout << "no se pueden tener esclavos en el cielo, pero estoy dispuesto a quedarme aquí si eso es necesario\n";
                                        std::cout << "No estas seguro de que pasar la vida sirviendo es la mejor opción, pero en algún momento esperas a que e compadezca de ti y te deje ir al cielo. Tal vez no recuerdes lo ";
                                        std::cout << "que paso en el rio, pero en el interior sientes que esta penitencia acabara pronto.\n Fin ";
                                        break;
                                    case 2:
                                        std::cout << "-¿Realmente no recuerdas lo que sucedió? \n- Tu asientes-\n- Okay, te lo mostrare. \n De repente todo empieza a temblar, tu casa desaparece y aparece un rio en frente de  ";
                                        std::cout << " ti. Conoces ese rio, pero en esta ocasión hay un cuerpo flotando en el rio. \n-¿Ves?, ahí estoy yo.\n De repente todo en tu cabeza se aclara. -¿Y sabes por que te culpo a ";
                                        std::cout << "ti de mi muerte?-. Ahora que las memorias regresaron a tu cabeza, le contestas - Porque yo vi como te ahogabas, pero al no saber que hacer, me quede en shock.- dices lamentándote-.\n";
                                        std::cout << "-Yo lo pondría como que me dejaste a mi suerte, estabas ahí para salvarme y porque NO LO HICISTE?- decía cada vez mas agresivo. No tenias la respuesta a esa pregunta, eras un niño";
                                        std::cout << "¿Como se supone que tenia que reaccionar ante ese evento?, así que te quedas callado. -¿Que tal si te dejo aquí para que hasta que respondas esa pregunta?\n ";
                                        std::cout << "Volteas y ya no hay nadie, solo esta el rio en un bucle repitiéndose, piensas que hubieras hecho diferente, sabes que tendrás tiempo para pensar. Repitiendo tu mayor eternamente a ";
                                        std::cout << "lo menos podrás descubrir cual fue el error de ese día.\n Fin.";
                                        break;
                                    default:
                                        break;
                                    }
                                } while (sel4 > 2);



                                break;
                            default:

                                break;
                            }
                        } while (sel3 > 2);
                        break;
                    case 2:
                        std::cout << "Cambias el tema, sabes que algo anda mal con tu vida ya que sabes que no puede haber nada bueno en tu vida si es que te quedaste solo, y en ese momento se te viene a la mente";
                        std::cout << "¿Como es que tu amigo este ahí, si e supone que ya no hay nadie en el mundo?. Te preguntas si ya empezaste a alucinar por la soledad pero como si te leyera la mente el te dice ";
                        std::cout << "-Tranquilo , no te estas volviendo loco ... aún. Pero se puede arreglar después-. Esas palabras no resultaron reconfortantes como esperabas, pero aun así decides preguntarle ";
                        std::cout << "Si no te vuelves loco ¡como es posible que este ahí?. -He venido a juzgarte - dice con una risa- Trataste de evitar la pregunta de que ha hecho con tu vida, pero afortunadamente ";
                        std::cout << "Yo estoy aquí para recapitular tu vida, veamos, primero te graduaste de la universidad y conseguiste el trabajo de tus sueños, curioso que hayas logrado todo eso.\n";
                        do {
                            std::cout << "¿Qué haces?\n";
                            std::cout << "-----------------------------------------------------\n";
                            std::cout << "|      1.- Preguntarle a que se refiere             |\n";
                            std::cout << "|      2.- Dejar que siga con su monologo           |\n";
                            std::cout << "-----------------------------------------------------\n";
                            std::cin >> sel3;
                            system("CLS");
                            switch (sel3)
                            {
                            case 1:
                                std::cout << "-Me refiero que en mi opinión, tu no merecías tener esa vida tan perfecta, pero por fortuna, para mí obviamente, estoy aquí para resolver ese asunto, veras existe el cielo ";
                                std::cout << "y el infierno, pero ahorita estas en el limbo esperando a que los seres celestiales decidan que hacer con el resto de tu existencia, yo estoy aquí para dar mi opinión y ";
                                std::cout << "si estan de acuerdo conmigo, podre decidir tu destino-. Eso te dejo con más dudas que respuestas, si es que existe un cielo y un infierno, porque tu amigo es el encargado ";
                                std::cout << "de decidir tu destino, estas seguro que eran grandes amigos durante la infancia, pero después de eso se separaron. ¿Qué lo hace tan especial para tomar la decisión?\n";
                                do {
                                    std::cout << "¿Qué haces?\n";
                                    std::cout << "------------------------------------------------------\n";
                                    std::cout << "|      1.- Cuestionarle porque el                     |\n";
                                    std::cout << "|      2.- Preguntarle si mas peronas te van a juzgar |\n";
                                    std::cout << "-------------------------------------------------------\n";
                                    std::cin >> sel4;
                                    system("CLS");
                                    switch (sel4)
                                    {
                                    case 1:
                                        std::cout << "-´Toda tu vida ha sido perfecta, pero hay una mancha que ni tu puedes limpiat. Mi muerte- Según tú, el seguia con vida (por lo menos lo seguia antes de quedarte solo";
                                        std::cout << " en el mundo), Ai que es imposible que tu seas culpable de algo parecido ¿o no?. Pero de algo etabas seguro, de que no ibas a permitir que alguien con obvio rencor ";
                                        std::cout << "hacia ti decidiera tu destino, asi que en un momento de oprtunidad, donde el te transporta hacia un rio, donde nadaban en la niñez, para motrarte el evento de su muerte, decides escapar.\n";
                                        std::cout << "Ahora despues de unos años, sigues encontrndote en el limbo, sabes que no podras huir para siempre, por lo menos estas lejos de entrar en el infierno y teambien del cielo.\n Fin";
                                        break;
                                    case 2:
                                        std::cout << "-Por lo que tengo entendido, solo la persona que le hiciste mas daño viene a juzgarte-.\n -¿Y yo que te hice? - preguntas. -Podría darte una larga explicación pero ";
                                        std::cout << "prefiero mostrarte. Todo a tu alrededor desparece para transformarse en el rio donde nadaban de chiquitos, pero con una gran diferencia, tu amigo esta flotando muerto ";
                                        std::cout << "en el rio. Desconcertado, tu mente te empieza a doler. Durante toda tu vida has bloqueado ese recuerdo, pero ahora esta mas claro que nunca. Toda tu vida hasta ahora ha sido";
                                        std::cout << " una mentira. -Ya recuerdo este momento, pero tienes que entender que yo era un niño y tu muerte fue lamentable, pero ahora etoy listo para el catigo que decidas. El sonríe sin embargo";
                                        std::cout << " lo decías para ganar tiempo y zambullirte en el rio.\n";
                                        std::cout << "Excelente intento de escape, pero yo controlo ese rio y me acabas de dar una idea perfecta, ahora sentirás lo que yo sentí ese dia. Empiezan a entrar agua a tus pulmones, eres incapaz";
                                        std::cout << "de respirar, ya estas muerto por lo que no te ahogas, solo estas desesperado por sentir la sensación de respirar. Esperando a que alguien te rescate.\n Fin";
                                    default:
                                        break;
                                    }
                                } while (sel4 > 2);
                                break;
                            case 2:
                                std::cout << "El monologo, continuo durante un rato, no necesitabas que alguien te contara tu vida, pues despues de todo tu fuiste el que la viviste, pero en un momento del monologo menciona algo sobre  ";
                                std::cout << " enviarte al infierno, eso tomo tu atención por lo que prestas más atención. Dice que en el infierno te torturaran durante toda la eternidad, consideras que definitivamente empiezas a alucinar ";
                                std::cout << "ya que la simple idea de la existencia de la otra vida, cuestionaria todos tus ideales. Lo interrumpes para que explique mejor el tema, pero te ignora.\n ";
                                do {
                                    std::cout << "¿Qué haces?\n";
                                    std::cout << "----------------------------------------------\n";
                                    std::cout << "|      1.- Interrumpirloo de nuevo           |\n";
                                    std::cout << "|      2.- Esperar                           |\n";
                                    std::cout << "----------------------------------------------\n";
                                    std::cin >> sel4;
                                    system("CLS");
                                    switch (sel4)
                                    {
                                    case 1:
                                        std::cout << "Siento que no me has hecho caso, porque durante toda la platica te he dicho que yo soy el que decide tu destino y yo pienso que no es buena idea interrumpirme. ¿Tu destino?, ahora";
                                        std::cout << "sientes que tuviste que haberle prestado mas atencón pero ya es demaiado tarde, el se dio cuenta que no escuchaste nada y se siente ofendido. -No puedo creer que me hayas ignorado, ";
                                        std::cout << "nunca volveras a ignorarme de nuevo.\n";
                                        std::cout << "despiertas, y apareces en el rio donde jugaban en la niñez. Ves que tu amigo se esta ahogando, entonces unas voces aparecen en tu cabeza con un volúmen alto, -¡Que alguien me ayude!";
                                        std::cout << " ¡Porfavor, no quiero morir aqui!, entonces te das cuenta que es la voz de tu amigo de niño que se esta ahogando, quieres salvarlo pero igual que aquel dia, no haces nada. Solo te queda ";
                                        std::cout << "escuchar sus gritos de auxilio\n Fin.";
                                        break;
                                    case 2:
                                        std::cout << "Al terminar tu amigo te pide que le pidas perdón, ¿Pero por que?, acaso hiciste un gesto groero mientras el etaba hablando. Pero no tardas en descubrir que tu amigo lo decia bastante en ";
                                        std::cout << "en serio, ya que al no recibir disculpas de tu parte dice -En realidad esperaba que durante tu vida hayas sentido arrepentimiento de tus errores, pero ya no depende de mi que sientas arrepentimiento";
                                        std::cout << " ¿Arrepentirme?, ¿Por qué?, si nunca has hecho nada muy grave para arrepentirte y luego te desmayas.\n";
                                        std::cout << "Pero de repente despierta y te das cuenta que unos seres deformes te estan torturando, deseando morir te preguntas que fue lo que te decia tu amigo y si tenia que ver";
                                        std::cout << "con la tortura que estas sufriendo. Pero ya es demasiado tarde para preguntarle\n Fin,";

                                        break;
                                    default:
                                        break;
                                    }
                                } while (sel4 > 2);



                                break;
                            default:

                                break;
                            }
                        } while (sel3 > 2);
                    }   break;
                } while (sel2 > 2);
                break;
            case 2:
                std::cout << "Despues de un tiempo logras ignorar el ruido y regresas a tus actividades, sin embargo despues de un rato empiezan a tocar la puerta aun mas fuerte. Estas decidio a ignorarlo,";
                std::cout << "Pero cualquier otro ruido ue hagas se ve opacado por el estruendoso ruido que hace cada golpeteo a la puerta. Eres incapaz de tan siquiera oir tus propios pensamientos, y los ";
                std::cout << "ruidos se vuelven cada vez mas fuertes.";
                do {
                    std::cout << "¿Qué haces?\n";
                    std::cout << "--------------------------------\n";
                    std::cout << "|      1.- Seguir ignorando     |\n";
                    std::cout << "|      2.- Abrir la puerta      |\n";
                    std::cout << "---------------------------------\n";
                    std::cin >> sel2;
                    system("CLS");
                    switch (sel2) {
                    case 1:
                        std::cout << "Intentas todo lo que puedes, pero el sonido se vuelve insorportable. Todos tus intentos de tapar el ruido son en vano, pero eres persistente y lo siguesignorando. Despues ";
                        std::cout << "de cierto tiempo el ruido e detiene, pero una voz empieza a dacir -No puedes ignorarme para siempre, yo al igual que tu, tengo todo el tiempo del mundo diponible. Y los golpes ";
                        std::cout << " a la puerta volvieron a empezar. No es posible que haya alguien haya afuera, pero si lo hubiera ya perdio la oportunidad de mostrar que fuera de confianza. Así que te esperas ";
                        std::cout << "a que se detenga el ruido. Pero parece que nunca lo va a hacer.\n";
                        do {
                            std::cout << "¿Qué haces?\n";
                            std::cout << "--------------------------------------\n";
                            std::cout << "|      1.- Seguir ignorando           |\n";
                            std::cout << "|      2.- Decirle que se callen      |\n";
                            std::cout << "--------------------------------------\n";
                            std::cin >> sel3;
                            system("CLS");
                            switch (sel3) {
                            case 1:
                                std::cout << "Por mas que lo inentes el ruido entra a cada lado de tu casa por lo que es imposible ignorarlo, decides ponerle fin al agarrar una pistola y disparar a la puerta. ";
                                std::cout << "Curiosamente funciono, los ruidos cesaron. Vuelves a la tranquilidad de tu hogar, quien fuera la persona que estaba tocando dejara de molestar\n";
                                std::cout << "Ya nunca vuelves a oir a nadie mas en tu casa, pero despues de un tiempo descubres que han pasado decadas y sigues vivo, eso ya dejo de ser el fin del mundo y ";
                                std::cout << "se tranformo a una cadena donde estaras solo durante toda la eternidad\n Fin";
                                break;
                            case 2:
                                std::cout << "El ruido se detiene para tu sorpresa, no obstante la puerta de tu casa se derrumba y entra un ser deforme y un er angelical. Austado intentas escapar, pero etos seres ";
                                std::cout << "son claramente más rapidos que tú. Te alcanzan y entre los dos te llevan hacia un cuarto vacio pero completamente gris. Entre ellos se susurran cosas pero no alcanzas ";
                                std::cout << " a entender ninguna palabra que dicen, te sientan en un banco y dicen -Bienvenido a tu juicio- decian al unisono- Has ignorado nuestros primeros intentos de dar contigo pero ahora nosotros";
                                std::cout << " tomaremos la decisión de tu destino.\n";
                                std::cout << "Aunque piensas que tuviste una buena vida, te acusan de permitir la muerte de tu mejor amigo, aun así despues de una larga deliberación, te encuentran inocente de esos ";
                                std::cout << "cargos, ya que no fue tu intención dejarlo morir, por lo que te dan acceso al cielo. Unas puertas se abren y todo lo que has soñado se encuentra ahí. Solo te preguntas si";
                                std::cout << "amigo que mencionaron se encuentra ahí\n Fin";
                                break;
                            default:
                                break;
                            }
                        } while (sel3 > 2);
                        break;
                    case 2:
                        std::cout << "Al abrir la puerta una luz intensa te ciega y de ahi sale una figura de forma angelical - Lamentamos las molestias pero no estas en libertad de ignorar a las peronas que tocan tu ";
                        std::cout << " puerta, una persona que conocias de chiquito era el que tocaba tu puerta, pero vimos que no iba a ser objetivo en tu juicio si es que seguia asustandote-.\n ¿A que te refieres con ";
                        std::cout << " juicio?- Preguntas asustado por la figura que se muestra ante ti-.\n - Estas muerto y ahora etamos viendo si eres digno de entrar al cielo o al infierno. Pero ahora yo tomare las rienda ";
                        std::cout << " de tu juicio\n";
                        do {
                            std::cout << "¿Qué haces?\n";
                            std::cout << "----------------------------------------------\n";
                            std::cout << "|      1.- Preguntarle quien es              |\n";
                            std::cout << "|      2.- Hacer caso a lo que te indica     |\n";
                            std::cout << "---------------------------------------------\n";
                            std::cin >> sel3;
                            system("CLS");
                            switch (sel3) {
                            case 1:
                                std::cout << "-Yo soy lo que ustedes llaman angeles, nosotros nos encargamos de guiar a las personas al cielo, pero en esta ocación tu eres un caso curioso, eres una buena persona pero ";
                                std::cout << "has cometido un grave error. Nosotros procuramos enviar a la persona que dañaste para decidir si mereces el perdón pero como veras, tu amigo de la infancia esta bastante";
                                std::cout << "enojado, así que sabemos que nunca te perdonara. En cambio estoy aqui para llevarte al tribunal celestial para que entre demonios y angeles decidamos tu destino.\n En un";
                                std::cout << " segundo el angel frente ti desaparece y atras de el esta un amigo tuyo de la niñez enojado. -Ellos no me quitaran mi venganza- dice con la voz cansada\n";
                                std::cout << "Un tiempo sufriste de las torturas de tu amigo pero despues de eso, un grupo de angeles y demonios lo detuvieron y se lo llevaron. Sabiendo que habian estado mal en enviarlo";
                                std::cout << " te recompensan con pase directo al cielo.\n";
                                std::cout << "Estas disfrutando del cielo pero no dejas de pensar en que mal le hiciste a tu amigo para que tuviera tanto rencor hacia ti, tratas de igorar esos penamientos pero después de ";
                                std::cout << "todo, tienes la eternidad para pensarlo\n Fin";
                                break;
                            case 2:
                                std::cout << "Sin perder el tiempo, te guia hacia un gran tribunal donde angeles y demonios, estan reunidos. Durante tu juicio entra una perona que esta siendo arrastrada, lo reconoces como";
                                std::cout << "tu amigo de la niñez. Pero a diferencia de ti el esta esposado. -¡Es inaudito que le den la oportunidad de entrar al cielo!, yo seguiria vivo si no fuera por el, no mereece esta";
                                std::cout << " oportunidad- decia mientras se alejaba. Te das cuenta que tu amigo lo estan llevando hacia unas puertas llena de fuego, por lo que asumes que es el camino hacia el infierno.";
                                std::cout << " así que pides una oportunidad para arreglar las cosas con tu amigo y ellos te la dan\n";
                                std::cout << "Ha paado tiempo desde el juicio, has descubierto porque tu amigo te odia, sin embargo, sabes que no eres culpable completamente de lo sucedido. Durante unas reuniones le dices a tú";
                                std::cout << " amigo como no tiene que sentir rencor, pero el sigue nodiandote. Piensas que esto es una perdida de tiempo pero no lo vas a abandonar como la última vez.\n Fin";
                                break;
                            default:
                                break;
                            }
                        } while (sel3 > 2);
                    default:
                        break;
                    }
                } while (sel2 > 2);


            }

        } while (sel > 2);
        std::cout << "¿Quieres repeti esta historia? (0 para no, 1 para si) ";
        std::cin >> rep; 
    }while (rep != 0);
    }
