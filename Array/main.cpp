        #include <iostream>

        using namespace std;

        int main(){

            int num1,num2,next =0,divide, total =0;
            bool islucky=false, stop =true;

            cin>>num1>>num2;
            for(int i= numb1;i<=number2;i++){
                divide =i;
                total=i;
                while(divide>0){
                    next = divide%10;
                    divide/=10;
                    if(next =7 || next ==4)
                        islucky =true;
                    if(divide==0){
                        stop=false;
                        cout <<total <<" ";
                    }
                }
                else {
                    islucky =false;
                    break;
                }
            }
            if (islucky==false&& stop==true)
                cout<<-1;
            return 0;
        }
