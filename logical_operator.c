#include<stdio.h>
#include<stdbool.h>
int main(void){

    bool has_nid = false;
    bool is_adult = true;
    bool has_passport = true;

    // bool has_identity = has_nid || has_passport;
    // bool is_permitted = has_identity && is_adult;

    bool is_permitted = (has_nid || has_passport) && is_adult;
    printf("permission: %d\n",!is_permitted);
    





    return 0;
}