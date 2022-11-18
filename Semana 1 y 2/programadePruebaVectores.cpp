#include <iostream>
#include <vector>
#include <string>
//No se utuiliza "Using namespace std" para evitar sobrecargas y evitar cualquier problema de compilacion

//Se define el las expresiones para usarse en el case del menu
#define AGREGAR 1
#define MODIFICAR 2
#define ELIMINAR 3
#define REPORTE 4
#define SALIR 5


//Clase Granos
class GranosBasicos
{
public:
	
	//Constructor de la clase
    GranosBasicos(std::string nombre, int quintales, int precio, std::string medida, std::string procedencia)
    {
        this->nombre = nombre;
        this->quintales = quintales;
        this->precio = precio;
        this->medida = medida;
        this->procedencia = procedencia;
    }

    ~GranosBasicos() {}//Destructor

public:
    std::string nombre;
    int quintales;
    int precio;
    std::string medida;
    std::string procedencia;
};

class ProductosLimpieza
{
		//Constructor de la clase
public:
    ProductosLimpieza(std::string nombre, std::string tipo, std::string marca, std::string codigo, int precio, int inventario, std::string proveedor)
    {	
    	this->nombre = nombre;
        this->tipo = tipo;
        this->marca = marca;
        this->codigo = codigo;
        this->precio = precio;
        this->inventario = inventario;
        this->proveedor = proveedor;
    }

    ~ProductosLimpieza() {}//Destructor

public:
	std::string nombre;
    std::string tipo;
    std::string marca;
    std::string codigo;
    int precio;
    int inventario;
    std::string proveedor;
};

class Liquidos
{
		//Constructor de la clase
	public:		
	Liquidos(std::string categoria, std::string forma, std::string tamanio, std::string nombre, int precio, std::string fecha)
	{
			
		this->categoria=categoria;
		this->forma=forma;
		this->tamanio=tamanio;
		this->nombre=nombre;
		this->precio=precio;
		this->fecha=fecha;	
	}	
	~Liquidos() {}//Destructor
	
public:
	std::string categoria;
	std::string forma;
	std::string tamanio;
	std::string nombre;
	int precio;
	std::string fecha;
};

class Carnes
{
		//Constructor de la clase
	public:	
		Carnes(std::string nombre, std::string procedencia, int cantidad, std::string tipo, int precio)
	{
		this->nombre=nombre;
		this->procedencia=procedencia;
		this->cantidad=cantidad;
		this->tipo=tipo;
		this->precio=precio;	
		
	}
	~Carnes(){}//Destructor
	
public:
	std::string nombre;
	std::string procedencia;
	int cantidad;
	std::string tipo;
	int precio;
	
};

class frutasVerduras
{
		//Constructor de la clase
	public:
		frutasVerduras(std::string nombre, int precio, int cantidad, std::string categoria)
		{
			this->nombre=nombre;
			this->precio=precio;
			this->cantidad=cantidad;
			this->categoria=categoria;		
		}
		
		~frutasVerduras(){}//Destructor
	
public:
	std::string nombre;
	int precio;
	int cantidad;
	std::string categoria;	
};

//Objetos, se declaran como static.
static std::vector<GranosBasicos> granos_basicos;
static std::vector<ProductosLimpieza> productos_limpieza;
static std::vector<Liquidos> productos_liquidos;
static std::vector<Carnes>productos_carnes;
static std::vector<frutasVerduras>productos_frutas;

//Metodo para obtener el indice del arreglo del objeto
static int obtener_indice_grano(std::string nombre)
{
    int indice = -1;
    for (int i = 0; i < granos_basicos.size(); i++)
    {
        if (granos_basicos[i].nombre == nombre)
        {
            indice = i;
            break;
        }
    }
    return indice;
}

//Metodo para agregar el objeto en el arreglo
static void agregar_granos()
{
    std::string nombre;
    int quintales;
    int precio;
    std::string medida;
    std::string procedencia;
	
	std::cout<<"Escriba sin espacios"<<std::endl;
	std::cout<<"GRANOS"<<std::endl;
	std::cout<<""<<std::endl;
    std::cout << "Ingrese el nombre: " << std::endl;
    std::cin >> nombre;
    std::cout << "Ingrese cantidad de quintales: " << std::endl;
    std::cin >> quintales;
    std::cout << "Ingrese precio: " << std::endl;
    std::cin >> precio;
    std::cout << "Ingrese medida(Quintal, Libra, Kilo): " << std::endl;
    std::cin >> medida;
    std::cout << "Ingrese procedencia: " << std::endl;
    std::cin >> procedencia;
    system("cls");//Limpia la pantalla después de ejecutarse

    GranosBasicos nuevosGranos = GranosBasicos(nombre, quintales, precio, medida, procedencia);
    granos_basicos.push_back(nuevosGranos);//Agrega un nuevo elemento al vector
}

//Funcion para eliominar un producto usando como referencia el nombre
static void eliminar_grano(std::string nombre)
{
    int indice = obtener_indice_grano(nombre);
    if (indice == -1)
    {
        std::cout << "Objeto no encontrado" << std::endl;
        return;
    }
    granos_basicos.erase(granos_basicos.begin() + indice);
    std::cout << "Objecto Borrado" << std::endl;
}
//Metodo para modificar un objeto (se modifican todas las caracteristicas del obejto) a partir del nombre
static void modificar_grano(int indice, std::string nombre, int quintales, int precio, std::string medida, std::string procedencia)
{
    if (indice == -1)//Si el objeto no existe, dará como indice menos uno lo que retorna la inexistencia del objeto
    {
        std::cout << "Objeto no encontrado" << std::endl;
        return;
    }

    GranosBasicos granosModificacion = GranosBasicos(nombre, quintales, precio, medida, procedencia);
    granos_basicos[indice] = granosModificacion;

    std::cout << "Objecto Modificado" << std::endl;
}

static int obtener_indice_limpieza(std::string nombre)
{
    int indice = -1;
    for (int i = 0; i < productos_limpieza.size(); i++)
    {
        if (productos_limpieza[i].nombre == nombre)
        {
            indice = i;
            break;
        }
    }
    return indice;
}

static void agregar_limpieza()
{	
	std::string nombre;
    std::string tipo;
    std::string marca;
    std::string codigo;
    int precio;
    int inventario;
    std::string proveedor;
    
    std::cout<<"Escriba sin espacios"<<std::endl;
    std::cout<<"LIMPIEZA"<<std::endl;
	std::cout<<""<<std::endl;
	std::cout<<"Ingrese nombre del producto: "<<std::endl;
	std::cin>>nombre;
    std::cout << "Ingrese el tipo(liquido/polvo): " << std::endl;
    std::cin>>tipo;
    std::cout << "Ingrese la marca: " << std::endl;
    std::cin>>marca;
    std::cout << "Ingrese codigo: " << std::endl;
    std::cin>>codigo;
    std::cout << "Ingrese precio: " << std::endl;
    std::cin>>precio;
    std::cout << "Ingrese cantidad en inventario: " << std::endl;
    std::cin >> inventario;
    std::cout << "Ingrese el proveedor: " << std::endl;
    std::cin>>proveedor;
    system("cls");
    ProductosLimpieza nuevaLimpieza = ProductosLimpieza(nombre,tipo, marca, codigo, precio, inventario, proveedor);
    productos_limpieza.push_back(nuevaLimpieza);
}

static void eliminar_limpieza(std::string nombre)
{
    int indice = obtener_indice_limpieza(nombre);
    if (indice == -1)
    {
        std::cout << "Objeto no encontrado" << std::endl;
        return;
    }
    productos_limpieza.erase(productos_limpieza.begin() + indice);
    std::cout << "Objecto Borrado" << std::endl;
}

static void modificar_limpieza(int indice, std::string nombre, std::string tipo, std::string marca, std::string codigo, int precio, int inventario, std::string proveedor)
{
    if (indice == -1)
    {
        std::cout << "Objeto no encontrado" << std::endl;
        return;
    }

    ProductosLimpieza limpiezaModificacion = ProductosLimpieza(nombre, tipo, marca, codigo, precio, inventario, proveedor);
    productos_limpieza[indice] = limpiezaModificacion;

    std::cout << "Objecto Modificado" << std::endl;
}


static void agregar_liquidos()
{
		std::string categoria;
		std::string forma;
		std::string tamanio;
		std::string nombre;
		int precio;
		std::string fecha;
		
		std::cout<<"Escriba sin espacios"<<std::endl;
		std::cout<<"LIQUIDOS"<<std::endl;
		std::cout<<""<<std::endl;
		std::cout<<"Ingrese la categoria del producto(Lacteos, gaseosas, jugos, agua): "<<std::endl;
		std::cin>>categoria;
	    std::cout << "Ingrese forma del empaque(Botella/bote, caja, lata): " << std::endl;
	    std::cin>>forma;
	    std::cout << "Ingrese el tamanio del producto(Pequenio, mediano, grande): " << std::endl;
	    std::cin>>tamanio;
	    std::cout << "Ingrese el nombre del producto: " << std::endl;
	    std::cin>>nombre;
	    std::cout << "Ingrese precio: " << std::endl;
	    std::cin>>precio;
	    std::cout << "Ingrese fecha de vencimiento(solo mes): " << std::endl;
	    std::cin>>fecha;
	    system("cls");
	    
	    Liquidos nuevosLiquidos = Liquidos(categoria, forma, tamanio, nombre, precio, fecha);
	    productos_liquidos.push_back(nuevosLiquidos);		
}

static int obtener_indice_liquidos(std::string nombre)
{
    int indice = -1;
    for (int i = 0; i < productos_liquidos.size(); i++)
    {
        if (productos_liquidos[i].nombre == nombre)
        {
            indice = i;
            break;
        }
    }
    return indice;
}

static void modificar_liquidos(int indice, std::string categoria, std::string forma, std::string tamanio, std::string nombre, int precio, std::string fecha)
{
    if (indice == -1)
    {
        std::cout << "Objeto no encontrado" << std::endl;
        return;
    }

    Liquidos liquidosModificacion = Liquidos(categoria, forma, tamanio, nombre, precio, fecha);
    productos_liquidos[indice] = liquidosModificacion;

    std::cout << "Objecto Modificado" << std::endl;
}

static void eliminar_liquidos(std::string nombre)
{
    int indice = obtener_indice_liquidos(nombre);
    if (indice == -1)
    {
        std::cout << "Objeto no encontrado" << std::endl;
        return;
    }
    productos_liquidos.erase(productos_liquidos.begin() + indice);
    std::cout << "Objecto Borrado" << std::endl;
}

static void agregar_carnes()
{
	std::string procedencia;
	int cantidad;
	std::string tipo;
	int precio;
	std::string nombre;
	
	std::cout<<"Escriba sin espacios"<<std::endl;
	std::cout<<"CARNES/EMBUTIDOS"<<std::endl;
	std::cout<<""<<std::endl;
	std::cout<<"Ingrese nombre: "<<std::endl;
	std::cin>>nombre;
	std::cout<< "Ingrese procedencia"<<std::endl;
	std::cin>>procedencia;
	std::cout<< "Ingrese cantidad"<<std::endl;
	std::cin>>cantidad;
	std::cout<<"Ingrese tipo de carne(res, blanca, cerdo): "<<std::endl;
	std::cin>>tipo;
	std::cout<<"Ingrese precio"<<std::endl;
	std::cin>>precio;
	system("cls");
	
	Carnes nuevasCarnes = Carnes(nombre, procedencia, cantidad, tipo, precio);
	productos_carnes.push_back(nuevasCarnes);	
}

static int obtener_indice_carnes(std::string nombre)
{
    int indice = -1;
    for (int i = 0; i < productos_carnes.size(); i++)
    {
        if (productos_carnes[i].nombre == nombre)
        {
            indice = i;
            break;
        }
    }
    return indice;
}

static void modificar_carnes(int indice, std::string nombre, std::string procedencia, int cantidad, std::string tipo, int precio)
{
    if (indice == -1)
    {
        std::cout << "Objeto no encontrado" << std::endl;
        return;
    }

    Carnes carnesModificacion = Carnes(nombre, procedencia, cantidad, tipo, precio);
    productos_carnes[indice] = carnesModificacion;

    std::cout << "Objecto Modificado" << std::endl;
}

static void eliminar_carnes(std::string nombre)
{
    int indice = obtener_indice_carnes(nombre);
    if (indice == -1)
    {
        std::cout << "Objeto no encontrado" << std::endl;
        return;
    }
    productos_carnes.erase(productos_carnes.begin() + indice);
    std::cout << "Objecto Borrado" << std::endl;
}
	
static void agregar_frutas()
{
	std::string nombre;
	int precio;
	int cantidad;
	std::string categoria;
	
	std::cout<<"Escriba sin espacios"<<std::endl;
	std::cout<<"FRUTAS/VERDURAS"<<std::endl;
	std::cout<<""<<std::endl;
	std::cout<<"Nombre: "<<std::endl;
	std::cin>>nombre;
	std::cout<<"Ingrese precio"<<std::endl;
	std::cin>>precio;
	std::cout<<"Ingrese cantidad de inventario"<<std::endl;
	std::cin>>cantidad;
	std::cout<<"Ingrese Categoria (Fruta==> Citrico, tropical, grano, fibra) / (Verdura==> Tuberculos, Legumbre, Hoja): "<<std::endl;
	std::cin>>categoria;
	system("cls");
	
	frutasVerduras nuevasFrutas = frutasVerduras(nombre, precio, cantidad, categoria);
	productos_frutas.push_back(nuevasFrutas);
}

static void modificar_frutas(int indice, std::string nombre, int precio, int cantidad, std::string categoria)
{
    if (indice == -1)
    {
        std::cout << "Objeto no encontrado" << std::endl;
        return;
    }

    frutasVerduras frutasModificacion = frutasVerduras(nombre, precio, cantidad, categoria);
    productos_frutas[indice] = frutasModificacion;

    std::cout << "Objecto Modificado" << std::endl;
}

static int obtener_indice_frutas(std::string nombre)
{
    int indice = -1;
    for (int i = 0; i < productos_frutas.size(); i++)
    {
        if (productos_frutas[i].nombre == nombre)
        {
            indice = i;
            break;
        }
    }
    return indice;
}

static void eliminar_frutas(std::string nombre)
{
    int indice = obtener_indice_frutas(nombre);
    if (indice == -1)
    {
        std::cout << "Objeto no encontrado" << std::endl;
        return;
    }
    productos_frutas.erase(productos_frutas.begin() + indice);
    std::cout << "Objecto Borrado" << std::endl;
}

int main()
{
    int opcion_menu = -1;
    while (opcion_menu != 5)//ciclo while para controlar la iteración dentro del programa
    {
        std::cout << "1. Agregar Producto" << std::endl;
        std::cout << "2. Modificar Producto" << std::endl;
        std::cout << "3. Eliminar Producto" << std::endl;
        std::cout << "4. Reporte" << std::endl;
        std::cout << "5. Salir" << std::endl;
        std::cin >> opcion_menu;
        system("cls");

        switch (opcion_menu)//switch para controlar el menu principal
        {
        case AGREGAR://Agregar fue definifo como 1
        {

            char opcion_submenu;
            std::cout << "a. Agregar grano" << std::endl;
            std::cout << "b. Agregar Limpieza" << std::endl;
            std::cout << "c. Agregar Liquido" << std::endl;
            std::cout << "d. Agregar embutido" << std::endl;
            std::cout << "e. Agregar fruta y verdura" << std::endl;
            std::cin >> opcion_submenu;
            system("cls");
            switch (opcion_submenu)//switch para conrtrolar el submenu
            {
            case 'a':
                agregar_granos();//Llamado del metodo para agregar el grano
                break;
            case 'b':
                agregar_limpieza();
                break;
            case 'c':
                agregar_liquidos();
                break;
            case 'd':
                agregar_carnes();
                break;
            case 'e':
                agregar_frutas();
                break;
                
            default:
                break;
            }
            continue;//Continueo para no cerrar el ciclo
        }
        case MODIFICAR://MODIFICAR se definio como 2
        {
            char opcion_submenu;
            std::cout << "a. Modificar grano" << std::endl;
            std::cout << "b. Modificar Limpieza" << std::endl;
            std::cout << "c. Modificar Liquido" << std::endl;
            std::cout << "d. Modificar embutido" << std::endl;
            std::cout << "e. Modificar fruta y verdura" << std::endl;
            std::cin >> opcion_submenu;
            system("cls");//Instruccion para limpiar la pantalla
            switch (opcion_submenu)
            {
            case 'a':
            {
                std::string nombre_grano;//Variable declarada para obtener el nombre del producto a modificar
                std::string nombre;
                int quintales;
                int precio;
                std::string medida;
                std::string procedencia;

                std::cout << "Ingrese el nombre del grano a modificar" << std::endl;
                std::cin >> nombre_grano;

                int indice = obtener_indice_grano(nombre_grano);
                if (indice == -1)
                {
                    std::cout << "Objeto no encontrado" << std::endl;
                    break;
                }
                std::cout << "Ingrese el nombre" << std::endl;
                std::cin >> nombre;
                std::cout << "Ingrese cantidad de quintales" << std::endl;
                std::cin >> quintales;
                std::cout << "Ingrese precio" << std::endl;
                std::cin >> precio;
                std::cout << "Ingrese medida(Quintal, Libra, Kilo)" << std::endl;
                std::cin >> medida;
                std::cout << "Ingrese procedencia" << std::endl;
                std::cin >> procedencia;
                modificar_grano(indice, nombre, quintales, precio, medida, procedencia);
                system("cls");
                break;
            }
            case 'b':
			{	
				std::string nombre_limpieza;
				std::string nombre;
			    std::string tipo;
			    std::string marca;
			    std::string codigo;
			    int precio;
			    int inventario;
			    std::string proveedor;
			    
			    std::cout << "Ingrese el nombre del grano a modificar"<< std::endl;
			    std::cin>> nombre_limpieza;
			    
			    int indice = obtener_indice_limpieza(nombre_limpieza);
			    if (indice == -1)
				{
					std::cout << "Objeto no encontrado"<<std::endl;
						break;		
				}				
				std::cout<<"Ingrese nombre del producto: "<<std::endl;
				std::cin>>nombre;
			    std::cout << "Ingrese el tipo(liquido/polvo): " << std::endl;
			    std::cin>>tipo;
			    std::cout << "Ingrese la marca: " << std::endl;
			    std::cin>>marca;
			    std::cout << "Ingrese codigo: " << std::endl;
			    std::cin>>codigo;
			    std::cout << "Ingrese precio: " << std::endl;
			    std::cin>>precio;
			    std::cout << "Ingrese cantidad en inventario: " << std::endl;
			    std::cin >> inventario;
			    std::cout << "Ingrese el proveedor: " << std::endl;
			    std::cin>>proveedor;
			    system("cls");
			    modificar_limpieza(indice, nombre, tipo, marca, codigo, precio, inventario, proveedor);
                break;
            }
            case 'c':
                {
                std::string nombre_liquidos;
		        std::string categoria;
				std::string forma;
				std::string tamanio;
				std::string nombre;
				int precio;
				std::string fecha;
				
				std::cout<<"Ingrese el nombre del liquido a modificar"<<std::endl;
				std::cin>> nombre_liquidos;
				
				int indice = obtener_indice_liquidos(nombre_liquidos);
				if(indice == -1)
				{
					std::cout << "Objeto no encontrado"<<std::endl;
						break;
				}
				
				std::cout<<"Ingrese la categoria del producto(Lacteos, gaseosas, jugos, agua): "<<std::endl;
				std::cin>>categoria;
			    std::cout << "Ingrese forma del empaque(Botella/bote, caja, lata): " << std::endl;
			    std::cin>>forma;
			    std::cout << "Ingrese el tamanio del producto(Pequenio, mediano, grande): " << std::endl;
			    std::cin>>tamanio;
			    std::cout << "Ingrese el nombre del producto: " << std::endl;
			    std::cin>>nombre;
			    std::cout << "Ingrese precio: " << std::endl;
			    std::cin>>precio;
			    std::cout << "Ingrese fecha de vencimiento(solo mes): " << std::endl;
			    std::cin>>fecha;
				modificar_liquidos(indice, categoria, forma, tamanio, nombre, precio, fecha);	
				system("cls");
				    break;
				}
            
            case 'd':
            	{
				std::string nombre_carnes;
                std::string procedencia;
				int cantidad;
				std::string tipo;
				int precio;
				std::string nombre;
				
				std::cout<<"Ingrese el nombre de la carne a modificar: "<<std::endl;
				std::cin>>nombre_carnes;
				
				int indice = obtener_indice_carnes(nombre_carnes);
				if (indice == -1)
				{
					std::cout<<"Objeto no encontrado"<<std::endl;
					break;
				}
				
				std::cout<<"Ingrese nombre: "<<std::endl;
				std::cin>>nombre;
				std::cout<< "Ingrese procedencia"<<std::endl;
				std::cin>>procedencia;
				std::cout<< "Ingrese cantidad"<<std::endl;
				std::cin>>cantidad;
				std::cout<<"Ingrese tipo de carne(res, blanca, cerdo): "<<std::endl;
				std::cin>>tipo;
				std::cout<<"Ingrese precio"<<std::endl;
				std::cin>>precio;
				modificar_carnes(indice, nombre, procedencia, cantidad, tipo, precio);
				system("cls");
                break;
                }
            case 'e':
                {
                std::string nombre_frutas;
			    std::string nombre;
				int precio;
				int cantidad;
				std::string categoria;
                
				std::cout<<"Ingrese el nombre de la carne a modificar: "<<std::endl;
				std::cin>>nombre_frutas;
				
				int indice = obtener_indice_frutas(nombre_frutas);
				if (indice == -1)
				{
					std::cout<<"Objeto no encontrado"<<std::endl;
					break;
				}
				
				std::cout<<"Nombre: "<<std::endl;
				std::cin>>nombre;
				std::cout<<"Ingrese precio"<<std::endl;
				std::cin>>precio;
				std::cout<<"Ingrese cantidad de inventario"<<std::endl;
				std::cin>>cantidad;
				std::cout<<"Ingrese Categoria (Fruta==> Citrico, tropical, grano, fibra) / (Verdura==> Tuberculos, Legumbre, Hoja): "<<std::endl;
				std::cin>>categoria;
				modificar_frutas(indice,nombre, precio, cantidad, categoria);
				system("cls");
				
				break;
					
				}
                
            default:
                break;
            }
            continue;//continue para no cerrar el ciclo
        }
        case ELIMINAR://ELIMINAR se definio como 3
        {
            char opcion_submenu;
            std::cout << "a. Eliminar grano" << std::endl;
            std::cout << "b. Eliminar Limpieza" << std::endl;
            std::cout << "c. Eliminar Liquido" << std::endl;
            std::cout << "d. Eliminar embutido" << std::endl;
            std::cout << "e. Eliminar fruta y verdura" << std::endl;
            std::cin >> opcion_submenu;
            switch (opcion_submenu)
            {
            case 'a':
            {
                std::string nombre_grano;
                std::cout << "Ingrese nombre del grano a borrar" << std::endl;
                std::cin >> nombre_grano;
                eliminar_grano(nombre_grano);//Se aplica el metodo de eliminar usando como referencia el nombre dle producto obtebnido
              
            }
            break;
            case 'b':
			{         	
            	std::string nombre_limpieza;
                std::cout << "Ingrese nombre del producto de limpieza a borrar" << std::endl;
                std::cin >> nombre_limpieza;
                eliminar_limpieza(nombre_limpieza);
            }
            break;
            case 'c':
            	{
            	std::string nombre_liquidos;
                std::cout << "Ingrese nombre del producto de limpieza a borrar" << std::endl;
                std::cin >> nombre_liquidos;
                eliminar_liquidos(nombre_liquidos);
            		
				}
              
                break;
            case 'd':
                {
                std::string nombre_carnes;
                std::cout << "Ingrese nombre del producto de limpieza a borrar" << std::endl;
                std::cin >> nombre_carnes;
                eliminar_carnes(nombre_carnes);
				}
                break;
            case 'e':
                {
                std::string nombre_frutas;
                std::cout << "Ingrese nombre del producto de limpieza a borrar" << std::endl;
                std::cin >> nombre_frutas;
                eliminar_frutas(nombre_frutas);
				}
				
                break;
            default:
                break;
            }
            continue;
        }
        case REPORTE://REPORTE se definio como 4
        {//Ciclos for para mostrar los productos ingresados en pantalla
        	//Se establece el nombre dle arreglo.size para definir el tamaño específico que tiene cada objeto según sus parámetros establecidos
             for (int i = 0; i < granos_basicos.size(); i++)
            {
            	//Se llama acada objeto en la posición i llamando a cada atributo del objeto
            	std::cout <<"Nombre: " << granos_basicos[i].nombre << std::endl;
            	std::cout <<"Cantidad de quintales: "<< granos_basicos[i].quintales << std::endl;
            	std::cout <<"Precio: "<<granos_basicos[i].precio << std::endl;
                std::cout <<"Medida: "<< granos_basicos[i].medida << std::endl;
                std::cout << "Procedencia: "<<granos_basicos[i].procedencia << std::endl;
                std::cout<<""<<std::endl;
            } 
            for(int i = 0; i < productos_limpieza.size(); i++){
            	
            	std::cout<<"Tipo: "<< productos_limpieza[i].tipo <<  std::endl;
            	std::cout<<"Nombre: "<< productos_limpieza[i].nombre <<  std::endl;
            	std::cout<<"Codigo: "<< productos_limpieza[i].codigo <<  std::endl;
            	std::cout<<"Precio: "<< productos_limpieza[i].precio <<  std::endl;
            	std::cout<<"Inventario: "<< productos_limpieza[i].inventario <<  std::endl;           	
            	std::cout<<"Proveedor: "<< productos_limpieza[i].proveedor <<  std::endl;
            	std::cout<< " "<<std::endl;
			}
			
			for	(int i = 0; i < productos_liquidos.size(); i++)
			{
				std::cout<<"Categoria: "<<productos_liquidos[i].categoria<<std::endl;
				std::cout<<"Forma: "<<productos_liquidos[i].forma<<std::endl;
				std::cout<<"Tamanio: "<<productos_liquidos[i].tamanio<<std::endl;
				std::cout<<"Nombre: "<<productos_liquidos[i].nombre<<std::endl;
				std::cout<<"Precio: "<<productos_liquidos[i].precio<<std::endl;
				std::cout<<"Fecha de Vencimiento: "<<productos_liquidos[i].fecha<<std::endl;
				std::cout<< " "<<std::endl;
				
			}
			
			for(int i = 0; i < productos_carnes.size(); i++)
			{
				std::cout<<"Nombre: "<<productos_carnes[i].nombre<<std::endl;
				std::cout<<"Procedencia: "<<productos_carnes[i].procedencia<<std::endl;
				std::cout<<"Cantidad: "<<productos_carnes[i].cantidad<<std::endl;
				std::cout<<"Tipo de carne: "<<productos_carnes[i].tipo<<std::endl;
				std::cout<<"Precio: "<<productos_carnes[i].precio<<std::endl;
				std::cout<< " "<<std::endl;
			}
			
			for (int i = 0; i < productos_frutas.size();i++)
			{
				std::cout<<"Nombre: "<<productos_frutas[i].nombre<<std::endl;
				std::cout<<"Precio: "<<productos_frutas[i].precio<<std::endl;
				std::cout<<"Cantidad: "<<productos_frutas[i].cantidad<<std::endl;
				std::cout<<"Categoria: "<<productos_frutas[i].categoria<<std::endl;
				std::cout<< " "<<std::endl;
			}

            continue;
        }
        case SALIR://Salir se definio como 5
            break;
        default:
        {
            std::cout << "Opcion Invalida" << std::endl;
            continue;//Continue para no terminar el ciclo
        }
        }
    }

    return 0;
}
