#include <stdio.h>

#define GLUCOSE_THRESHOLD 99 // 99 mg/dL blood glucose is the screening threshold from Hng et al., 2016


typedef struct vitalsigns{
  int glucose;
  //other vital signs
} VitalSigns;

typedef struct orderlist{
  int size;
  int capacity;
  int *data; //order codes translated to integers
} OrderList;

typedef struct dialogbox {
  //whatever goes in a dialog box
} DialogBox;

DialogBox * create_box(string warning){
  //create and display a dialog box with the given warning
}

int box_accept(DialogBox *dialogbox){
  //1 if the user pressed "yes," 0 if "no?"
}

void orders_append(OrderList *orderlist, int code_int){
  //resize order list if necessary
  //append integer order code to order list
}

int code_translate(string code){
  //translate order code to integer
}

int orders_check(OrderList *orderlist, int code_int){
  //check order list for a particular integer order code
  //1 if code is present
}

typedef struct patient{
  VitalSigns vitals;
  OrderList *orders;
  //other patient info
  int screened; //0 if the patient has never been screened during the study timeframe, 1 otherwise
} Patient;

//call this function every time bloodwork orders are submitted for a new ED patient in Epic
void diabetes_bpa{Patient john_doe}{
  if (!john_doe.screened && john_doe.vitals.glucose >= GLUCOSE_THRESHOLD){ 
      int hba1c = code_translate("HbA1c");
      if (!orders_Check(john_doe->orders, hba1c)){ //complete screening only if HbA1c has not already been ordered for patient during visit
	DialogBox *bpa = create_box("This patient meets the minimum glucose threshold for diabetes screening. Would you like to add the HbA1c to their bloodwork?");
	if (box_accept(*bpa))
	  orders_append(john_doe->orders, hba1c);
      }
      john_doe.screened = 1; //do not re-screen the patient during their next presentation to the ED in the study timeframe
    }
}
   

