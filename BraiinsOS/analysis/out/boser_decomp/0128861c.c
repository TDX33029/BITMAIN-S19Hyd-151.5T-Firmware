// FUN_0128861c @ 0128861c size=260 calls_out=1 calls_in=0
// strings: 

void FUN_0128861c(undefined4 param_1,short param_2,undefined4 param_3,undefined4 param_4,
                 char param_5,int param_6)

{
  undefined *puVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 *local_18;
  code *local_14;
  undefined4 local_10;
  short local_c;
  
  if (param_6 == 0) {
    if (param_5 == '\0') {
      puVar1 = &DAT_00590e5f;
      goto LAB_01288714;
    }
    if (param_5 == '\x01') {
      puVar1 = &DAT_0056fcf0;
    }
    else {
      puVar1 = &DAT_0056fcd8;
    }
  }
  else {
    if (param_5 == '\0') {
      puVar1 = &DAT_004a68d7;
      goto LAB_01288714;
    }
    if (param_5 == '\x01') {
      puVar1 = &DAT_00570470;
    }
    else {
      puVar1 = &UNK_00570710;
    }
    param_2 = param_2 + 1;
  }
  local_10 = 0;
  local_c = param_2;
LAB_01288714:
  local_14 = FUN_012fceb8;
  local_18 = &local_20;
  local_20 = param_3;
  uStack_1c = param_4;
  FUN_012fa178(param_1,&DAT_01c26430,puVar1,&local_18);
  return;
}

