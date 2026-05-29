#include <stdio.h>

void checkPort(int id, float power){
    if(power < -27.0){
        printf("端口 %d 光功率是 %.1f dBm: 过低！\n", id, power);
    }
    else if(power > -20.0){
        printf("端口 %d 光功率是 %.1f dBm: 过高！\n", id, power);
    }
    else{
        printf("端口 %d 光功率是 %.1f dBm: 正常！\n", id, power);
    }
}

int main(){ 
    float powers[4] = {-35.0, -28.5, -25.5, -19.5};
    for(int i = 0; i < 4; i++){
	checkPort(i + 1, powers[i]);
    }
    return 0;
}
