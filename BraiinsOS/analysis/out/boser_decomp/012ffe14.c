// FUN_012ffe14 @ 012ffe14 size=248 calls_out=1 calls_in=50
// strings: 

void FUN_012ffe14(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined *local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined **local_28;
  undefined4 *local_24;
  int *local_20;
  undefined1 *local_1c;
  undefined4 *local_18;
  undefined1 *local_14;
  undefined4 *local_10;
  undefined1 *local_c;
  
  local_20 = &local_48;
  local_18 = &local_48;
  local_3c = param_5;
  local_34 = 2;
  local_38 = &DAT_0042c956;
  if ((param_1 & 1) != 0) {
    local_38 = &DAT_004cfd87;
  }
  local_48 = param_2;
  uStack_44 = param_3;
  local_40 = param_4;
  if (param_6 == 0) {
    local_18 = &local_40;
    local_14 = &LAB_012fff3c;
    local_1c = &LAB_012fff3c;
    local_24 = &DAT_0197a814;
    local_28 = &local_38;
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_0059de88,&local_28,param_8);
  }
  local_2c = param_7;
  local_10 = &local_40;
  local_30 = param_6;
  local_c = &LAB_012fff3c;
  local_14 = &LAB_012fff3c;
  local_1c = &LAB_012fff30;
  local_20 = &local_30;
  local_24 = &DAT_0197a814;
  local_28 = &local_38;
                    /* WARNING: Subroutine does not return */
  FUN_012fb100(&DAT_005a9be8,&local_28,param_8);
}

