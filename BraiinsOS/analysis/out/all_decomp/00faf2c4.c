// FUN_00faf2c4 @ 00faf2c4 size=248 calls_out=1 calls_in=39
// strings: 

void FUN_00faf2c4(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  local_38 = &DAT_00369a26;
  if ((param_1 & 1) != 0) {
    local_38 = &DAT_003cee55;
  }
  local_48 = param_2;
  uStack_44 = param_3;
  local_40 = param_4;
  if (param_6 == 0) {
    local_18 = &local_40;
    local_14 = &LAB_00faf3ec;
    local_1c = &LAB_00faf3ec;
    local_24 = &DAT_015bee04;
    local_28 = &local_38;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_005713df,&local_28,param_8);
  }
  local_2c = param_7;
  local_10 = &local_40;
  local_30 = param_6;
  local_c = &LAB_00faf3ec;
  local_14 = &LAB_00faf3ec;
  local_1c = &LAB_00faf3e0;
  local_20 = &local_30;
  local_24 = &DAT_015bee04;
  local_28 = &local_38;
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_00580c00,&local_28,param_8);
}

