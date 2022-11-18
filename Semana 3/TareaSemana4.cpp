#include<iostream>
#include<vector>

using namespace std;

class churros{
 public:
  string nombre,ingre1,ingre2,tamano;
  double precio;
 
 public:
  churros(string,string,string,string,double);
  
  void mostrarCh();
  void agregarCh();
};
class ingrediente:public churros{
 public:
  double calorias1,calorias2;
  
 public:
  ingrediente(string,string,string,string,double,double,double);
  
  void mostrarIngre();
};
 
churros::churros(string _nombre,string _ingre1,string _ingre2,string _tamano,double _precio){
 nombre=_nombre;
 ingre1=_ingre1;
 ingre2= _ingre2;
 tamano=_tamano;
 precio=_precio;
}
ingrediente::ingrediente(string _nombre, string _ingre1, string _ingre2,string _tamano,double _precio, double _calorias1, double _calorias2):
 churros(_nombre,_ingre1,_ingre2,_tamano,_precio){
  
  calorias1= _calorias1;
  calorias2=_calorias2;
}

static vector <ingrediente> v_churros;

static void mostrarCh(){
 
 
 for(int i=0;i<v_churros.size();i++){
  
 printf("-----DATOS DEL CHURRO A INTEGRAR-----\n");
 
 
 cout<<"Nombre del churro: "<<v_churros[i].nombre<<endl;
 cout<<"Ingrediente 1: "<<v_churros[i].ingre1<<endl;
 cout<<"Ingrediente 2: "<<v_churros[i].ingre2<<endl;
 cout<<"Tamanio del churro: "<<v_churros[i].tamano<<endl;
 cout<<"Precio del churro: "<<v_churros[i].precio<<endl;
  
 }
}
static void agregarCh(){
 string nombre,ingre1,ingre2,tamano;
 double precio,calorias1,calorias2;
 
 
 printf("-----DATOS DEL NUEVO CHURRO-----\n");
 
 
 cout<<"Ingrese el Nombre: "<<endl;
 cin>>nombre;
 cout<<"Ingrese el Tamanio: "<<endl;
 cin>>tamano;
 cout<<"Ingrese el Precio: "<<endl;
 cin>>precio;
 printf("\n-----DATOS DE LOS INGREDIENTES-----\n");
 cout<<"Ingrese 1 Ingredientes: "<<endl;
 cin>>ingre1;
 cout<<"\nCalorias 1: "<<endl;
 cin>>calorias1;
 cout<<"\nIngrese 2 Ingredientes: "<<endl;
 cin>>ingre2;
 cout<<"\nCalorias 2: "<<endl;
 cin>>calorias2;

 
 ingrediente ch=ingrediente(nombre,ingre1,ingre2,tamano,precio,calorias1,calorias2);
 v_churros.push_back(ch); 
 
}
static void mostrarDieta(){
 
 for (int i=0;i<v_churros.size();i++){
  
  if (v_churros[i].calorias1+v_churros[i].calorias2<500){
   cout<<"Nombre: "<<v_churros[i].nombre<<endl;
  }
 }
}
int main(){
 char opcionLetra; 

ingrediente ch1= ingrediente("Zibas","Papa","Sal","Grande",24.50,234.89,50.00);
v_churros.push_back(ch1);

ingrediente ch2= ingrediente("Yummix","Chicharron "," Yuca","Mediano",7.50,769.00,467.00);
v_churros.push_back(ch2);

ingrediente ch3= ingrediente("Ranchita","Papa ","Sal","Pequeno",4.80,356.90,146.87);
v_churros.push_back(ch3);

ingrediente ch4= ingrediente("Taqueritos","Maiz ","Chile","Pequeno",5.30,206.90,234.8);
v_churros.push_back(ch4);

ingrediente ch5= ingrediente("Cappy","Harina ", " Queso","Grande",15.00,150.00,151.90);
v_churros.push_back(ch5);

 
while (opcionLetra != 'a'){
 
 printf("-**********Y U M M I E S SABOR DE MI TIERRA**********\n");
 
 
 printf("    -----M E N U-----\n");
 cout<<"a. Salir del programa"<<endl;
 cout<<"b. Agregar nuevo Churro a la lista de existencias"<<endl;
 cout<<"c. Listar churros"<<endl; 
 cout<<"Ingrese la opcion que desea accionar: ";
 cin>>opcionLetra;

 
 switch(opcionLetra){
  case 'a':
   printf("\nHasta luego");
   return 0;
  break;
  
  case 'b':
   agregarCh();
   
   return main();
   break;
  
  case 'c':{
   
   int opcionNum;
   
   printf("-----LISTAR-----\n");
   
   
   cout<<"1. Lista de Churros existentes"<<endl;
   cout<<"2. Lista de Churros que son de dieta"<<endl;
   cout<<"3. Regresar al Menu principal"<<endl;
   cout<<"Ingrese la opcion que desea: ";
   cin>>opcionNum;
   
   
   switch(opcionNum){
    
    case 1:{
     mostrarCh();
    cout<<"\n";
    break;
     
    }break;
    
    case 2:{
  
     printf("-----CHURROS DIETETICOS-----\n");
     mostrarDieta();
     
     cout<<"\n"; 
     break;
     }
    break;
    
    case 3:
     return main();
     break;
   }break;
 } 
  } 
}
}
