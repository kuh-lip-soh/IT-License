float addition (float a,float b) {
    float r;
    r=a+b;
    return r; }

float soustraction (float a,float b) {
    float r;
    r=a-b;
    return r; }

float multiplication (float a,float b) {
    float r;
    r=a*b;
    return r; }

float division (float a,float b) {
    float r;
    r=a/b;
    return r; }



void main()
{ int choix;
float a,b,r;
printf("**********Menu***********\n");
printf("1--------->addition---------\n");
printf("2---------> soustraction--------\n");
printf("3--------->multiplication--------\n");
printf("4---------> division--------\n");
do{
printf("\nentrez la valeure de a : ");
scanf("%f",&a);
printf("entrez la valeure de b : ");
scanf("%f",&b);
printf("donnez votre choix ");
scanf("%d",&choix);
switch(choix){
case 1:{
r=addition(a,b);
printf("%lf",r);
break;}
case 2:{
r=soustraction(a,b);
printf("%lf",r);break;}
case 3:{
r=multiplication(a,b);
printf("%lf",r);
break;}
case 4:{
if(b!=0){
r=division(a,b);
printf("%lf",r);}
else
printf("erreure\n");
break;}
default:
printf("erreure\n"); }}
while(choix!=0);
return 0;}
