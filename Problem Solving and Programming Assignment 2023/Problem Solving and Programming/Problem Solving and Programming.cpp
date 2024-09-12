//library fot this programme
#include <iostream>
#include <iomanip>
#include <string>

//to define each price of food and drink
#define priceA 5.00 //Price Nasi Lemak
#define priceB 6.50 //Price Chicken Rice
#define priceC 4.50 //Price Masala Dosa
#define priceD 7.00 //Price Hamburger
#define priceE 5.50 //Price Fish and Chip
#define priceF 1.50 //Price Mineral Water (Cold)
#define pricef 1.00 //Price Mineral Water (Hot)
#define priceG 3.50 //Price Milo (Cold)
#define priceg 3.00 //Price Milo (Hot)
#define priceH 6.50 //Price Nescafe (Cold)
#define priceh 6.00 //Price Nescafe (Hot)
#define priceI 4.00 //Price Soft Drink
#define priceJ 7.50 //Price Juice
#define SST 0.1 //Percentage SST

int order_quantity; //The order quantity for the customer
int num; //number choice for review and main menu
int very_bad; //One of the selection of the review
int bad; //One of the selection of the review
int normal; //One of the selection of the review
int good; //One of the selection of the review
int very_good; //One of the selection of the review

//the total order quantity for each food or drink on the day
int order_quantityA, order_quantityB, order_quantityC, order_quantityD, order_quantityE;
int order_quantityF, order_quantityf, order_quantityG, order_quantityg, order_quantityH, order_quantityh, order_quantityI, order_quantityJ;

double price_final; //The price of the food or drink including SST
double user_paid; //The payment value of the customer 
double priceSST; //The price SST for the food or drink

double total_amount_food; //The total amount for food on the day
double total_amount_drink; //The total amount for drink on the day

double total_SST_food; //The total amount SST for food on the day
double total_SST_drink; //The total amount SST for drink on the day

double final_amount_food; //The final amount for food including SST on the day
double final_amount_drink; //The final amount for drink including SST on the day


char order_code; //The order codefor food and drink when order


using namespace std;

//logo restaurant
void logo_restaurant()
{
	cout << "                      HHHHH             HHHHH       SSSSSSSSSSSSSSSSSS" << endl;
	cout << "                      HHHHH             HHHHH       SSSSSSSSSSSSSSSSSS" << endl;
	cout << "                      HHHHH             HHHHH      SSSSS             " << endl;
	cout << "                      HHHHH             HHHHH     SSSSS             " << endl;
	cout << "                      HHHHH             HHHHH     SSSSS             " << endl;
	cout << "                      HHHHH             HHHHH      SSSSS             " << endl;
	cout << "                      HHHHHHHHHHHHHHHHHHHHHHH       SSSSSSSSSSSSSSSSSS" << endl;
	cout << "                      HHHHHHHHHHHHHHHHHHHHHHH       SSSSSSSSSSSSSSSSSS" << endl;
	cout << "                      HHHHH             HHHHH                     SSSSS" << endl;
	cout << "                      HHHHH             HHHHH                      SSSSS" << endl;
	cout << "                      HHHHH             HHHHH                      SSSSS" << endl;
	cout << "                      HHHHH             HHHHH                     SSSSS" << endl;
	cout << "                      HHHHH             HHHHHHHSSSSSSSSSSSSSSSSSSSSSSS" << endl;
	cout << "                      HHHHH             HHHHHHHSSSSSSSSSSSSSSSSSSSSSSS" << endl;
}

//menu restaurant (food and drink)
void menu_food()
{
	cout << "FFFFFFFFF    OOOO       OOOO    DDDDDD" << "               " << "DDDDDDD   RRRRRR   IIIIIII NN       N K      KK" << endl;
	cout << "F           O    O     O    O   D      D" << "             " << "D      D  R     R    II    N NN     N K    KK" << endl;
	cout << "F          O      O   O      O  D       D" << "            " << "D       D R     R    II    N  NN    N K  KK" << endl;
	cout << "FFFFFFFFF O        O O        O D       D" << "            " << "D       D RRRRRR     II    N   NN   N KKK" << endl;
	cout << "F          O      O   O      O  D       D" << "            " << "D       D R  R       II    N    NN  N K  KK" << endl;
	cout << "F           O    O     O    O   D      D" << "             " << "D      D  R    R     II    N     NN N K    KK" << endl;
	cout << "F            OOOO       OOOO    DDDDDD" << "               " << "DDDDDDD   R      R IIIIIII N       NN K      KK" << endl;
	cout << "               " << "                                                                              COLD           HOT" << endl;
	cout << "(A) Nasi Lemak----------------------RM" << fixed << setprecision(2) << priceA << "           " << "(F) Mineral Water----------------------RM" << fixed << setprecision(2) << priceF << "        " << "RM" << fixed << setprecision(2) << pricef << endl;
	cout << "(B) Chicken Rice--------------------RM" << fixed << setprecision(2) << priceB << "           " << "(G) Milo-------------------------------RM" << fixed << setprecision(2) << priceG << "        " << "RM" << fixed << setprecision(2) << priceg << endl;
	cout << "(C) Masala Dosa---------------------RM" << fixed << setprecision(2) << priceC << "           " << "(H) Nescafe----------------------------RM" << fixed << setprecision(2) << priceH << "        " << "RM" << fixed << setprecision(2) << priceh << endl;
	cout << "(D) Hamburger-----------------------RM" << fixed << setprecision(2) << priceD << "           " << "(I) Soft Drink-------------------------RM" << fixed << setprecision(2) << priceI << endl;
	cout << "(E) Fish And Chip-------------------RM" << fixed << setprecision(2) << priceE << "           " << "(J) Juice------------------------------RM" << fixed << setprecision(2) << priceJ << endl;
	cout << " " << endl;
	cout << "Example:" << "                                            " << "Example:(Cold is char upper case)  (Hot is char lower case)" << endl;
	cout << "If want Nasi Lemak press 'A'" << "                        " << "If want COLD Milo press 'G'" << endl;
	cout << "                                                    " << "If want HOT Milo press 'g'" << endl;

}

//logo thank you
void logo_thank()
{
	cout << "TTTTTTTTTT H       H       A       NN       N K      KK   SSSSSSSSS" << endl;
	cout << "    TT     H       H      A A      N NN     N K    KK   SS" << endl;
	cout << "    TT     H       H     A   A     N  NN    N K  KK     SS" << endl;
	cout << "    TT     HHHHHHHHH    AAAAAAA    N   NN   N KKK         SSSSSSS  " << endl;
	cout << "    TT     H       H   A       A   N    NN  N K  KK              SS" << endl;
	cout << "    TT     H       H  A         A  N     NN N K    KK            SS" << endl;
	cout << "    TT     H       H A           A N       NN K      KK SSSSSSSSS" << endl;
	cout << " " << endl;
	cout << "           FFFFFFFFF    OOOO    RRRRRRR" << endl;
	cout << "           F           O    O   R      R" << endl;
	cout << "           F          O      O  R      R" << endl;
	cout << "           FFFFFFFFF O        O RRRRRRR" << endl;
	cout << "           F          O      O  R  R" << endl;
	cout << "           F           O    O   R    R" << endl;
	cout << "           F            OOOO    R      R" << endl;
	cout << " " << endl;
	cout << "   CCCCCC    OOOO    MM         MM IIIIII NN       N    GGGGGGG      " << endl;
	cout << "  C         O    O   M MM     MM M   II   N NN     N   G            " << endl;
	cout << " C         O      O  M   MM MM   M   II   N  NN    N  G            " << endl;
	cout << "C         O        O M     M     M   II   N   NN   N G       GGGG         " << endl;
	cout << " C         O      O  M           M   II   N    NN  N  G        G G " << endl;
	cout << "  C         O    O   M           M   II   N     NN N   G      G  G      " << endl;
	cout << "   CCCCCC    OOOO    M           M IIIIII N       NN    GGGGGG   G        " << endl;

}

//Additional features (review)
int score_star(int num)
{
	switch (num)
	{
	case 5:
		very_bad += 1;
		break;

	case 6:
		bad += 1;
		break;

	case 7:
		normal += 1;
		break;

	case 8:
		good += 1;
		break;

	case 9:
		very_good += 1;
		break;

	default:
		cout << "Invalid number, please choose again." << endl;
		break;
	}
	return 0;
}

//a coding for an ordering process
int process_order(char order_code)
{
	switch (order_code)
	{
	case 'A':
		cout << "Nasi Lemak= " << priceA << endl;
		cout << "Quantity: " << endl; \
			cin >> order_quantity;
		order_quantityA += order_quantity;
		cout << "The price is    = RM" << fixed << setprecision(2) << priceA * order_quantity << endl;
		priceSST = ((priceA * order_quantity) * SST);
		price_final = (((priceA * order_quantity) * SST) + priceA * order_quantity);
		cout << "Add on SST (10%)= RM" << priceSST << endl;
		cout << "Total price     = RM" << price_final << endl;
		cout << "----------------------------" << endl;
		cin >> user_paid;
		cout << "Amount Paid= " << user_paid << endl;
		if (user_paid >= price_final)
		{
			cout << "Your change= " << user_paid - price_final << endl;
			cout << " " << endl;
		}
		cout << "Please give us some review. Mark= 5-9" << endl;
		cin >> num;
		score_star(num);
		cout << "Thank for your review." << endl;
		cout << " " << endl;
		break;

	case 'B':
		cout << "Chicken Rice= " << priceB << endl;
		cout << "Quantity: " << endl;
		cin >> order_quantity;
		order_quantityB += order_quantity;
		cout << "The price is    = RM" << fixed << setprecision(2) << priceB * order_quantity << endl;
		priceSST = ((priceB * order_quantity) * SST);
		price_final = (((priceB * order_quantity) * SST) + priceB * order_quantity);
		cout << "Add on SST (10%)= RM" << priceSST << endl;
		cout << "Total price     = RM" << price_final << endl;
		cout << "----------------------------" << endl;
		cin >> user_paid;
		cout << "Amount Paid= " << user_paid << endl;
		if (user_paid >= price_final)
		{
			cout << "Your change= " << user_paid - price_final << endl;
			cout << " " << endl;
		}
		cout << "Please give us some review. Mark= 5-9" << endl;
		cin >> num;
		score_star(num);
		cout << "Thank for your review." << endl;
		cout << " " << endl;
		break;

	case 'C':
		cout << "Masala Dosa= " << priceC << endl;
		cout << "Quantity: " << endl;
		cin >> order_quantity;
		order_quantityC += order_quantity;
		cout << "The price is    = RM" << fixed << setprecision(2) << priceC * order_quantity << endl;
		priceSST = ((priceC * order_quantity) * SST);
		price_final = (((priceC * order_quantity) * SST) + priceC * order_quantity);
		cout << "Add on SST (10%)= RM" << priceSST << endl;
		cout << "Total price     = RM" << price_final << endl;
		cout << "----------------------------" << endl;
		cin >> user_paid;
		cout << "Amount Paid= " << user_paid << endl;
		if (user_paid >= price_final)
		{
			cout << "Your change= " << user_paid - price_final << endl;
			cout << " " << endl;
		}
		cout << "Please give us some review. Mark= 5-9" << endl;
		cin >> num;
		score_star(num);
		cout << "Thank for your review." << endl;
		cout << " " << endl;
		break;

	case 'D':
		cout << "Hamburger= " << priceD << endl;
		cout << "Quantity: " << endl;
		cin >> order_quantity;
		order_quantityD += order_quantity;
		cout << "The price is    = RM" << fixed << setprecision(2) << priceD * order_quantity << endl;
		priceSST = ((priceD * order_quantity) * SST);
		price_final = (((priceD * order_quantity) * SST) + priceD * order_quantity);
		cout << "Add on SST (10%)= RM" << priceSST << endl;
		cout << "Total price     = RM" << price_final << endl;
		cout << "----------------------------" << endl;
		cin >> user_paid;
		cout << "Amount Paid= " << user_paid << endl;
		if (user_paid >= price_final)
		{
			cout << "Your change= " << user_paid - price_final << endl;
			cout << " " << endl;
		}
		cout << "Please give us some review. Mark= 5-9" << endl;
		cin >> num;
		score_star(num);
		cout << "Thank for your review." << endl;
		cout << " " << endl;
		break;

	case 'E':
		cout << "Fish And Chip= " << priceE << endl;
		cout << "Quantity: " << endl;
		cin >> order_quantity;
		order_quantityE += order_quantity;
		cout << "The price is    = RM" << fixed << setprecision(2) << priceE * order_quantity << endl;
		priceSST = ((priceE * order_quantity) * SST);
		price_final = (((priceE * order_quantity) * SST) + priceE * order_quantity);
		cout << "Add on SST (10%)= RM" << priceSST << endl;
		cout << "Total price     = RM" << price_final << endl;
		cout << "----------------------------" << endl;
		cin >> user_paid;
		cout << "Amount Paid= " << user_paid << endl;
		if (user_paid >= price_final)
		{
			cout << "Your change= " << user_paid - price_final << endl;
			cout << " " << endl;
		}
		cout << "Please give us some review. Mark= 5-9" << endl;
		cin >> num;
		score_star(num);
		cout << "Thank for your review." << endl;
		cout << " " << endl;
		break;

	case 'F':
		cout << "Mineral Water (COLD)= " << priceF << endl;
		cout << "Quantity: " << endl;
		cin >> order_quantity;
		order_quantityF += order_quantity;
		cout << "The price is    = RM" << fixed << setprecision(2) << priceF * order_quantity << endl;
		priceSST = ((priceF * order_quantity) * SST);
		price_final = (((priceF * order_quantity) * SST) + priceF * order_quantity);
		cout << "Add on SST (10%)= RM" << priceSST << endl;
		cout << "Total price     = RM" << price_final << endl;
		cout << "----------------------------" << endl;
		cin >> user_paid;
		cout << "Amount Paid= " << user_paid << endl;
		if (user_paid >= price_final)
		{
			cout << "Your change= " << user_paid - price_final << endl;
			cout << " " << endl;
		}
		cout << "Please give us some review. Mark= 5-9" << endl;
		cin >> num;
		score_star(num);
		cout << "Thank for your review." << endl;
		cout << " " << endl;
		break;

	case 'f':
		cout << "Mineral Water (HOT)= " << pricef << endl;
		cout << "Quantity: " << endl;
		cin >> order_quantity;
		order_quantityf += order_quantity;
		cout << "The price is    = RM" << fixed << setprecision(2) << pricef * order_quantity << endl;
		priceSST = ((pricef * order_quantity) * SST);
		price_final = (((pricef * order_quantity) * SST) + pricef * order_quantity);
		cout << "Add on SST (10%)= RM" << priceSST << endl;
		cout << "Total price     = RM" << price_final << endl;
		cout << "----------------------------" << endl;
		cin >> user_paid;
		cout << "Amount Paid= " << user_paid << endl;
		if (user_paid >= price_final)
		{
			cout << "Your change= " << user_paid - price_final << endl;
			cout << " " << endl;
		}
		cout << "Please give us some review. Mark= 5-9" << endl;
		cin >> num;
		score_star(num);
		cout << "Thank for your review." << endl;
		cout << " " << endl;
		break;

	case 'G':
		cout << "Milo (COLD)= " << priceG << endl;
		cout << "Quantity: " << endl;
		cin >> order_quantity;
		order_quantityG += order_quantity;
		cout << "The price is    = RM" << fixed << setprecision(2) << priceG * order_quantity << endl;
		priceSST = ((priceG * order_quantity) * SST);
		price_final = (((priceG * order_quantity) * SST) + priceG * order_quantity);
		cout << "Add on SST (10%)= RM" << priceSST << endl;
		cout << "Total price     = RM" << price_final << endl;
		cout << "----------------------------" << endl;
		cin >> user_paid;
		cout << "Amount Paid= " << user_paid << endl;
		if (user_paid >= price_final)
		{
			cout << "Your change= " << user_paid - price_final << endl;
			cout << " " << endl;
		}
		cout << "Please give us some review. Mark= 5-9" << endl;
		cin >> num;
		score_star(num);
		cout << "Thank for your review." << endl;
		cout << " " << endl;
		break;

	case 'g':
		cout << "Milo (HOT)= " << priceg << endl;
		cout << "Quantity: " << endl;
		cin >> order_quantity;
		order_quantityg += order_quantity;
		cout << "The price is    = RM" << fixed << setprecision(2) << priceg * order_quantity << endl;
		priceSST = ((priceg * order_quantity) * SST);
		price_final = (((priceg * order_quantity) * SST) + priceg * order_quantity);
		cout << "Add on SST (10%)= RM" << priceSST << endl;
		cout << "Total price     = RM" << price_final << endl;
		cout << "----------------------------" << endl;
		cin >> user_paid;
		cout << "Amount Paid= " << user_paid << endl;
		if (user_paid >= price_final)
		{
			cout << "Your change= " << user_paid - price_final << endl;
			cout << " " << endl;
		}
		cout << "Please give us some review. Mark= 5-9" << endl;
		cin >> num;
		score_star(num);
		cout << "Thank for your review." << endl;
		cout << " " << endl;
		break;

	case 'H':
		cout << "Nescafe (COLD)= " << priceH << endl;
		cout << "Quantity: " << endl;
		cin >> order_quantity;
		order_quantityH += order_quantity;
		cout << "The price is    = RM" << fixed << setprecision(2) << priceH * order_quantity << endl;
		priceSST = ((priceH * order_quantity) * SST);
		price_final = (((priceH * order_quantity) * SST) + priceH * order_quantity);
		cout << "Add on SST (10%)= RM" << priceSST << endl;
		cout << "Total price     = RM" << price_final << endl;
		cout << "----------------------------" << endl;
		cin >> user_paid;
		cout << "Amount Paid= " << user_paid << endl;
		if (user_paid >= price_final)
		{
			cout << "Your change= " << user_paid - price_final << endl;
			cout << " " << endl;
		}
		cout << "Please give us some review. Mark= 5-9" << endl;
		cin >> num;
		score_star(num);
		cout << "Thank for your review." << endl;
		cout << " " << endl;
		break;

	case 'h':
		cout << "Nescafe (HOT)= " << priceh << endl;
		cout << "Quantity: " << endl;
		cin >> order_quantity;
		order_quantityh += order_quantity;
		cout << "The price is    = RM" << fixed << setprecision(2) << priceh * order_quantity << endl;
		priceSST = ((priceh * order_quantity) * SST);
		price_final = (((priceh * order_quantity) * SST) + priceh * order_quantity);
		cout << "Add on SST (10%)= RM" << priceSST << endl;
		cout << "Total price     = RM" << price_final << endl;
		cout << "----------------------------" << endl;
		cin >> user_paid;
		cout << "Amount Paid= " << user_paid << endl;
		if (user_paid >= price_final)
		{
			cout << "Your change= " << user_paid - price_final << endl;
			cout << " " << endl;
		}
		cout << "Please give us some review. Mark= 5-9" << endl;
		cin >> num;
		score_star(num);
		cout << "Thank for your review." << endl;
		cout << " " << endl;
		break;

	case 'I':
		cout << "Soft Drink= " << priceI << endl;
		cout << "Quantity: " << endl;
		cin >> order_quantity;
		order_quantityI += order_quantity;
		cout << "The price is    = RM" << fixed << setprecision(2) << priceI * order_quantity << endl;
		priceSST = ((priceI * order_quantity) * SST);
		price_final = (((priceI * order_quantity) * SST) + priceI * order_quantity);
		cout << "Add on SST (10%)= RM" << priceSST << endl;
		cout << "Total price     = RM" << price_final << endl;
		cout << "----------------------------" << endl;
		cin >> user_paid;
		cout << "Amount Paid= " << user_paid << endl;
		if (user_paid >= price_final)
		{
			cout << "Your change= " << user_paid - price_final << endl;
			cout << " " << endl;
		}
		cout << "Please give us some review. Mark= 5-9" << endl;
		cin >> num;
		score_star(num);
		cout << "Thank for your review." << endl;
		cout << " " << endl;
		break;

	case 'J':
		cout << "Juice= " << priceJ << endl;
		cout << "Quantity: " << endl;
		cin >> order_quantity;
		order_quantityJ += order_quantity;
		cout << "The price is    = RM" << fixed << setprecision(2) << priceJ * order_quantity << endl;
		priceSST = ((priceJ * order_quantity) * SST);
		price_final = (((priceJ * order_quantity) * SST) + priceJ * order_quantity);
		cout << "Add on SST (10%)= RM" << priceSST << endl;
		cout << "Total price     = RM" << price_final << endl;
		cout << "----------------------------" << endl;
		cin >> user_paid;
		cout << "Amount Paid= " << user_paid << endl;
		if (user_paid >= price_final)
		{
			cout << "Your change= " << user_paid - price_final << endl;
			cout << " " << endl;
		}
		cout << "Please give us some review. Mark= 5-9" << endl;
		cin >> num;
		score_star(num);
		cout << "Thank for your review." << endl;
		cout << " " << endl;
		break;

	default:
		cout << "Invalid order code, please choose again." << endl;
		break;

	}
	return 0;
}

//Daily sales report including review
int Daily_Sales_Report()
{
	total_amount_food = ((priceA * order_quantityA) + (priceB * order_quantityB) + (priceC * order_quantityC) + (priceD * order_quantityD) + (priceE * order_quantityE));

	total_amount_drink = ((priceF * order_quantityF) + (pricef * order_quantityf) + (priceG * order_quantityG) + (priceg * order_quantityg)
		+ (priceH * order_quantityH) + (priceh * order_quantityh) + (priceI * order_quantityI) + (priceJ * order_quantityJ));

	total_SST_food = total_amount_food * SST;
	total_SST_drink = total_amount_drink * SST;

	final_amount_food = total_amount_food + total_SST_food;
	final_amount_drink = total_amount_drink + total_SST_drink;



	cout << "---------------------------Daily Sales Report-----------------------------" << endl;
	cout << "         Menu                 Price(RM)     Quantity       Total Sales(RM)        " << endl;
	cout << "Food" << endl;
	cout << "      Nasi Lemak" << "\t\t" << fixed << setprecision(2) << priceA << "\t\t" << order_quantityA << "\t\t" << priceA * order_quantityA << endl;
	cout << "      Chicken Rice" << "\t\t" << fixed << setprecision(2) << priceB << "\t\t" << order_quantityB << "\t\t" << priceB * order_quantityB << endl;
	cout << "      Masala Dosa" << "\t\t" << fixed << setprecision(2) << priceC << "\t\t" << order_quantityC << "\t\t" << priceC * order_quantityC << endl;
	cout << "      Hamburger" << "\t\t\t" << fixed << setprecision(2) << priceD << "\t\t" << order_quantityD << "\t\t" << priceD * order_quantityD << endl;
	cout << "      Fish and Chip" << "\t\t" << fixed << setprecision(2) << priceE << "\t\t" << order_quantityE << "\t\t" << priceE * order_quantityE << endl;
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "\t\t\t\t\t\t   " << "Total Amount:" << total_amount_food << endl;
	cout << "\t\t\t\t\t\t   " << "   Total SST:" << total_SST_food << endl;
	cout << "\t\t\t\t\t\t   " << "Final Amount:" << final_amount_food << endl;
	cout << " " << endl;
	cout << "Drink" << endl;
	cout << "      Mineral Water (COLD)" << "\t" << fixed << setprecision(2) << priceF << "\t\t" << order_quantityF << "\t\t" << priceF * order_quantityF << endl;
	cout << "      Mineral Water (HOT)" << "\t" << fixed << setprecision(2) << pricef << "\t\t" << order_quantityf << "\t\t" << pricef * order_quantityf << endl;
	cout << "      Milo (COLD)" << "\t\t" << fixed << setprecision(2) << priceG << "\t\t" << order_quantityG << "\t\t" << priceG * order_quantityG << endl;
	cout << "      Milo (HOT)" << "\t\t" << fixed << setprecision(2) << priceg << "\t\t" << order_quantityg << "\t\t" << priceg * order_quantityg << endl;
	cout << "      Nescafe (COLD)" << "\t\t" << fixed << setprecision(2) << priceH << "\t\t" << order_quantityH << "\t\t" << priceH * order_quantityH << endl;
	cout << "      Nescafe (HOT)" << "\t\t" << fixed << setprecision(2) << priceh << "\t\t" << order_quantityh << "\t\t" << priceh * order_quantityh << endl;
	cout << "      Soft Drink" << "\t\t" << fixed << setprecision(2) << priceI << "\t\t" << order_quantityI << "\t\t" << priceI * order_quantityI << endl;
	cout << "      Juice" << "\t\t\t" << fixed << setprecision(2) << priceJ << "\t\t" << order_quantityJ << "\t\t" << priceJ * order_quantityJ << endl;
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "\t\t\t\t\t\t   " << "Total Amount:" << total_amount_drink << endl;
	cout << "\t\t\t\t\t\t   " << "   Total SST:" << total_SST_drink << endl;
	cout << "\t\t\t\t\t\t   " << "Final Amount:" << final_amount_drink << endl;
	cout << "\n\n" << endl;
	cout << "    *= " << very_bad << endl;
	cout << "   **= " << bad << endl;
	cout << "  ***= " << normal << endl;
	cout << " ****= " << good << endl;
	cout << "*****= " << very_good << endl;

	return 0;
}


//main function
int main()
{
	system("cls");
	logo_restaurant();
	do {
		cout << "Please press 1 or 2 or 3" << endl;
		cout << "1= Making order" << endl;
		cout << "2= Exit" << endl;
		cout << "3= Daily Sales Report" << endl;

		cin >> num;

		switch (num)
		{
		case 1:
			system("cls");
			menu_food();
			cout << "Press the char that you want to order or press any buttern to exit: " << endl;
			cin >> order_code;
			if (order_code == 1 || order_code != 2)
			{
				process_order(order_code);

			}

			break;

		case 2:
			system("cls");
			logo_thank();
			break;

		case 3:
			system("cls");
			Daily_Sales_Report();
			cout << " " << endl;
			break;

		default:
			cout << "Invalid choice, please choose again." << endl;
			break;
		}


	} while (num != 2);


	return 0;
}