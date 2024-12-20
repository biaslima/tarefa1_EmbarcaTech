#include <stdio.h>


//Funções de Comprimento
float metros_para_centimetros(float metros) {return metros * 100;}
float metros_para_milimetros(float metros){return metros * 1000;}
float milimetros_para_metros(float milimetros){return milimetros / 1000;}
float centimetros_para_metros(float centimetros){return centimetros / 100;}

//Funções de Massa
float quilograma_para_grama(float quilograma){return quilograma * 1000;}
float quilograma_para_tonelada(float quilograma){return quilograma / 1000;}
float tonelada_para_quilograma(float tonelada){return tonelada * 1000;}
float grama_para_quilograma(float grama){return grama / 1000;}

// Funções de Área
float metrosquadrados_centimetrosquadrados (float metros) {return metros * 10000;}
float centimetrosquadrados_metrosquadrados (float centimetros) {return centimetros / 10000;}

// Funções de Tempo
float segundos_horas (float segundos) {return segundos / 3600;}
float segundos_minutos (float segundos) {return segundos / 60;}
float horas_segundos (float horas) {return horas * 3600;}
float horas_minutos (float horas) {return horas * 60;}
float minutos_segundos (float minutos) {return minutos * 60;}
float minutos_horas (float minutos) {return minutos / 60;}

// Definições das funções de conversão volumétrica
double litroParaMililitro(double valor){return valor * 1000.0;}
double litroParaMetrosCubicos(double valor){return valor / 1000.0;}
double mililitroParaLitro(double valor){return valor / 1000.0;}
double mililitroParaMetrosCubicos(double valor){return valor / 1e6;}
double metrosCubicosParaLitro(double valor){return valor * 1000.0;}
double metrosCubicosParaMililitro(double valor){return valor * 1e6;}

// Funções de conversão de temperatura
double celsiusParaFahrenheit(double valor) { return (valor * 9.0 / 5.0) + 32.0; }
double celsiusParaKelvin(double valor) { return valor + 273.15; }
double fahrenheitParaCelsius(double valor) { return (valor - 32.0) * 5.0 / 9.0; }
double fahrenheitParaKelvin(double valor) { return (valor - 32.0) * 5.0 / 9.0 + 273.15; }
double kelvinParaCelsius(double valor) { return valor - 273.15; }
double kelvinParaFahrenheit(double valor) { return (valor - 273.15) * 9.0 / 5.0 + 32.0; }


//Função Principal
int main(){
    int opcao = 0, conversao = 0;
    float valor = 0, resultado = 0;

    while (1){ // Menu de Tipos de Converções -- Foi criado um menu switch case para o usuário escolher a unidade de conversão. Esse while (assim como os próximo) permite que o menu fique em loop até que o usuário queira sair. 
    
        printf("Digite um numero correspondente ao tipo de conversao que voce deseja fazer:\n");
        printf("1. Unidades de Comprimento\n");
        printf("2. Unidades de Massa\n");
        printf("3. Unidades de Volume\n");
        printf("4. Unidades de Temperatura\n");
        printf("5. Unidades de Velocidade\n");
        printf("6. Unidades de Potencia\n");
        printf("7. Unidades de Area\n");
        printf("8. Unidades de Tempo\n");
        printf("0. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        if (opcao == 0){ //Opção que para o loop.
            printf("Saindo do programa. Ate a proxima");
            break;
        }

        switch (opcao){
            case 1:

                while(1){ //Esse é o primeiro menu que de fato converte os valores, aqui o usuário escolhe a conversão que quer fazer. Esse outro switch será espelhado nas outras conversões. 
                    printf("Escolha uma conversao:\n");
                    printf("1. Metros para Centimetros\n");
                    printf("2. Metros para Milimetros\n");
                    printf("3. Milimetros para Metros\n");
                    printf("4. Centimetros para Metros\n");
                    printf("0. Voltar ao Menu de Conversoes\n");
                    printf("Opcao: ");
                    scanf("%d", &conversao);

                    if (conversao == 0){
                        printf ("Voltando ao menu de conversoes...");
                        break;
                    }
            
                    printf("Digite o valor: ");
                    scanf("%f", &valor);

                    switch (conversao){
                    case 1:
                            resultado = metros_para_centimetros(valor);
                            printf("%.2f metros = %.2f centimetros\n", valor, resultado);
                        break;
                    case 2: 
                        resultado = metros_para_milimetros(valor);
                            printf("%.2f metros = %.2f milimetros\n", valor, resultado);
                        break;
                    case 3: 
                        resultado = milimetros_para_metros(valor);
                            printf("%.2f milimetros = %.2f metros\n", valor, resultado);
                        break;
                    case 4: 
                        resultado = centimetros_para_metros(valor);
                            printf("%.2f metros = %.2f centimetros\n", valor, resultado);
                        break;
                    default:
                        printf("Opcao invalida! Tente novamente.\n");
                        break;
                    }   
                }
             break;
            case 2:
                
                while(1){
                    printf("Escolha uma conversao:\n");
                    printf("1. Quilograma para Grama\n");
                    printf("2. Quilograma para Tonelada\n");
                    printf("3. Tonelada para Quilograma\n");
                    printf("4. Grama para Quilograma\n");
                    printf("0. Voltar ao Menu de Conversoes\n");
                    printf("Opçao: ");
                    scanf("%d", &conversao);

                    if (conversao == 0){
                        printf ("Voltando ao menu de conversoes...\n");
                        break;
                    }
            
                    printf("Digite o valor: ");
                    scanf("%f", &valor);

                    switch (conversao){
                    case 1:
                            resultado = quilograma_para_grama(valor);
                            printf("%.2f quilogramas = %.2f gramas\n", valor, resultado);
                        break;
                    case 2: 
                        resultado = quilograma_para_tonelada(valor);
                            printf("%.2f quilogramas = %.2f gramas\n", valor, resultado);
                        break;
                    case 3: 
                        resultado = tonelada_para_quilograma(valor);
                            printf("%.2f toneladas = %.2f quilogramas\n", valor, resultado);
                        break;
                    case 4: 
                        resultado = centimetros_para_metros(valor);
                            printf("%.2f grama = %.2f quiolograma\n", valor, resultado);
                        break;
                    default:
                        printf("Opcao invalida! Tente novamente.\n");
                        break;
                    }

            case 3:
                while (1) {
                    // Exibir o menu para o usuário
                    printf("Qual conversao volumetrica voce quer fazer?\n");
                    printf("1 - Litro para Mililitro\n");
                    printf("2 - Litro para Metros Cubicos\n");
                    printf("3 - Mililitro para Litro\n");
                    printf("4 - Mililitro para Metros Cubicos\n");
                    printf("5 - Metros Cubicos para Litro\n");
                    printf("6 - Metros Cubicos para Mililitro\n");
                    printf("0 - Sair do menu\n");
                    printf("Escolha uma opcao: ");
                    scanf("%d", &opcao);

                    if (opcao == 0) {
                        printf("Voltando ao menu de conversoes...\n");
                        break; // Sai do laço while
                    }

                    double valor, resultado;
                    switch (opcao) {
                        case 1:
                            printf("Indique o valor para ser convertido: ");
                            scanf("%lf", &valor);
                            resultado = litroParaMililitro(valor);
                            printf("Resultado: %.2lf mL\n", resultado);
                            break;
                        case 2:
                            printf("Indique o valor para ser convertido: ");
                            scanf("%lf", &valor);
                            resultado = litroParaMetrosCubicos(valor);
                            printf("Resultado: %.6lf m³\n", resultado);
                            break;
                        case 3:
                            printf("Indique o valor para ser convertido: ");
                            scanf("%lf", &valor);
                            resultado = mililitroParaLitro(valor);
                            printf("Resultado: %.2lf L\n", resultado);
                            break;
                        case 4:
                            printf("Indique o valor para ser convertido: ");
                            scanf("%lf", &valor);
                            resultado = mililitroParaMetrosCubicos(valor);
                            printf("Resultado: %.6lf m³\n", resultado);
                            break;
                        case 5:
                            printf("Indique o valor para ser convertido: ");
                            scanf("%lf", &valor);
                            resultado = metrosCubicosParaLitro(valor);
                            printf("Resultado: %.2lf L\n", resultado);
                            break;
                        case 6:
                            printf("Indique o valor para ser convertido: ");
                            scanf("%lf", &valor);
                            resultado = metrosCubicosParaMililitro(valor);
                            printf("Resultado: %.2lf mL\n", resultado);
                            break;
                        default:
                            printf("Opcao invalida! Tente novamente.\n");
                            break;
                }
            }

             case 4:
                while (1) {
                    // Exibir o menu para o usuário
                    printf("Qual conversao de temperatura voce quer fazer?\n");
                    printf("1 - Celsius para Fahrenheit\n");
                    printf("2 - Celsius para Kelvin\n");
                    printf("3 - Fahrenheit para Celsius\n");
                    printf("4 - Fahrenheit para Kelvin\n");
                    printf("5 - Kelvin para Celsius\n");
                    printf("6 - Kelvin para Fahrenheit\n");
                    printf("0 - Sair do menu\n");
                    printf("Escolha uma opcao: ");
                    scanf("%d", &opcao);

                    if (opcao == 0) {
                        printf("Voltando ao menu de conversoes...\n");
                        break; // Sai do laço while
                    }

                    double valor, resultado;
                    switch (opcao) {
                        case 1:
                            printf("Indique o valor para ser convertido: ");
                            scanf("%lf", &valor);
                            resultado = celsiusParaFahrenheit(valor);
                            printf("Resultado: %.2lf °F\n", resultado);
                            break;
                        case 2:
                            printf("Indique o valor para ser convertido: ");
                            scanf("%lf", &valor);
                            resultado = celsiusParaKelvin(valor);
                            printf("Resultado: %.2lf K\n", resultado);
                            break;
                        case 3:
                            printf("Indique o valor para ser convertido: ");
                            scanf("%lf", &valor);
                            resultado = fahrenheitParaCelsius(valor);
                            printf("Resultado: %.2lf °C\n", resultado);
                            break;
                        case 4:
                            printf("Indique o valor para ser convertido: ");
                            scanf("%lf", &valor);
                            resultado = fahrenheitParaKelvin(valor);
                            printf("Resultado: %.2lf K\n", resultado);
                            break;
                        case 5:
                            printf("Indique o valor para ser convertido: ");
                            scanf("%lf", &valor);
                            resultado = kelvinParaCelsius(valor);
                            printf("Resultado: %.2lf °C\n", resultado);
                            break;
                        case 6:
                            printf("Indique o valor para ser convertido: ");
                            scanf("%lf", &valor);
                            resultado = kelvinParaFahrenheit(valor);
                            printf("Resultado: %.2lf °F\n", resultado);
                            break;
                            default:
                            printf("Opcao invalida! Tente novamente.\n");
                            break;
                    }
                }


            case 7: 
                while (1){
                    printf("Escolha uma conversao:\n");
                    printf("1. Metros Quadrados para Centimetros Quadrados\n");
                    printf("2. Centimetros Quadrados para Metros Quadrados\n");
                    printf("Opçao: ");
                    scanf("%d", &conversao);

                    if (conversao == 0) {
                        printf ("Voltando ao menu de conversoes...\n");
                        break;
                    }

                    printf("Digite o valor: ");
                    scanf("%f", &valor);

                    switch (conversao){
                    case 1:
                            resultado = metrosquadrados_centimetrosquadrados(valor);
                            printf("%.2f metros quadrados = %.2f centimetros quadrados\n", valor, resultado);
                        break;
                    case 2: 
                        resultado = centimetrosquadrados_metrosquadrados(valor);
                            printf("%.2f centimetros quadrados = %.2f metros quadrados\n", valor, resultado);
                        break;
                    default:
                        printf("Opcao invalida! Tente novamente.\n");
                        break;

                    }
                }

            case 8:
                while (1){
                    printf("Escolha uma conversao:\n");
                    printf("1. Segundos para Horas\n");
                    printf("2. Segundos para Minutos\n");
                    printf("3. Horas para Segundos\n");
                    printf("4. Horas para Minutos\n");
                    printf("5. Minutos para Segundos\n");
                    printf("6. Minutos para Horas\n");
                    printf("Opçao: ");
                    scanf("%d", &conversao);

                    if (conversao == 0) {
                        printf ("Voltando ao menu de conversoes...\n");
                        break;
                    }

                    printf("Digite o valor: ");
                    scanf("%f", &valor);

                    switch (conversao){
                    case 1:
                            resultado = segundos_horas(valor);
                            printf("%.2f segundos = %.2f horas\n", valor, resultado);
                        break;
                    case 2: 
                        resultado = segundos_minutos(valor);
                            printf("%.2f segundos = %.2f minutos\n", valor, resultado);
                        break;
                    case 3: 
                        resultado = horas_segundos(valor);
                            printf("%.2f horas = %.2f segundos\n", valor, resultado);
                        break;
                    case 4: 
                        resultado = horas_minutos(valor);
                            printf("%.2f horas = %.2f minutos\n", valor, resultado);
                        break;
                    case 5: 
                        resultado = minutos_segundos(valor);
                            printf("%.2f minutos = %.2f segundos\n", valor, resultado);
                        break;
                    case 6: 
                        resultado = minutos_horas(valor);
                            printf("%.2f minutos = %.2f horas\n", valor, resultado);
                        break;
                    default:
                        printf("Opcao invalida! Tente novamente.\n");
                        break;
                    }
                }   
            }
            default:
                break;

             break; //Do case 2
            case 5: while(1){
                     printf("Escolha uma conversao:\n");
                     printf("1. km/h para m/s\n");
                     printf("2. m/s para km/h\n");
                     printf("3. km/h para mph\n");
                     printf("4. mph para km/h\n");
                     printf("5. m/s para mph\n");
                     printf("6. mph para m/s\n");
                     printf("0. Voltar ao Menu de Conversoes\n");
                     printf("Opcao: ");
                     while(scanf("%d", &conversao),conversao<0 || conversao>6)
                         printf("Opcao invalida! Tente novamente.\nOpcao: ");
                     if(conversao==0){puts("Voltando ao menu de conversoes..."); break;}
                     printf("Digite o valor: ");
                     scanf("%f",&valor);

                     switch(conversao){
                         case 1: resultado=valor/3.6; printf("%.2f km/h = %.2f m/s\n", valor, resultado); break;
                         case 2: resultado=valor*3.6; printf("%.2f m/s = %.2f km/h\n", valor, resultado); break;
                         case 3: resultado=valor*0.621371; printf("%.2f km/h = %.2f mph\n", valor, resultado); break;
                         case 4: resultado=valor/0.621371; printf("%.2f mph = %.2f km/h\n", valor, resultado); break;
                         case 5: resultado=valor*2.23694; printf("%.2f m/s = %.2f mph\n", valor, resultado); break;
                         default: resultado=valor/2.23694; printf("%.2f mph = %.2f m/s\n", valor, resultado);
                        }
                    }
             break;//Do case 5
            case 6: while(1){
                     printf("Escolha uma conversao:\n");
                     printf("1. W para kW\n");
                     printf("2. kW para W\n");
                     printf("3. W para cv\n");
                     printf("4. cv para W\n");
                     printf("5. kW para cv\n");
                     printf("6. cv para kW\n");
                     printf("0. Voltar ao Menu de Conversoes\n");
                     printf("Opcao: ");
                     while(scanf("%d", &conversao),conversao<0 || conversao>6)
                         printf("Opcao invalida! Tente novamente.\nOpcao: ");
                     if(conversao==0){puts("Voltando ao menu de conversoes..."); break;}
                     printf("Digite o valor: ");
                     scanf("%f",&valor);

                     switch(conversao){
                         case 1: resultado=valor/1000; printf("%.2f W = %.2f kW\n", valor, resultado); break;
                         case 2: resultado=valor*1000; printf("%.2f kW = %.2f W\n", valor, resultado); break;
                         case 3: resultado=valor*0.0013596; printf("%.2f W = %.2f cv\n", valor, resultado); break;
                         case 4: resultado=valor/0.0013596; printf("%.2f cv = %.2f W\n", valor, resultado); break;
                         case 5: resultado=valor*1.35962; printf("%.2f kW = %.2f cv\n", valor, resultado); break;
                         default: resultado=valor/1.35962; printf("%.2f cv = %.2f kW\n", valor, resultado);
                        }
                    }
             break;//Do case 6
            default: puts("\nErro, selecionou algo invalido\n");
        }
    }
 return 0;
}