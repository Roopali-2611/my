//bisection method
 #include<stdio.h>
double function(double x){
    return (x*x*x)-5*x+9;
}
void bisect(double a,double b,double toll){
    double c;
    if(function(a)*function(b)<0){
        while((b-a)>toll){
            c=(a+b)/2;
            if(function(c)==0){
                break;
            }
            else if(function(a)*function(c)<0){
                    b=c;
                }
                else{
                    a=c;
                }
                printf("value : %.7lf\n",c);
            }
            printf(" FINAL ROOT IS: %.7lf\n",c);
        }
        else{
            printf("invalid interval\n");
        }

    }
    
int main(){
    
    bisect(-3,-2,0.0001);
}


