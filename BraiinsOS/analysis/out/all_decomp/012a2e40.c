// FUN_012a2e40 @ 012a2e40 size=252 calls_out=5 calls_in=0
// strings: 

void FUN_012a2e40(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint local_40;
  undefined4 local_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  local_24 = 0;
  local_28 = 0;
  local_2c = 1;
  local_40 = 0x80000000;
  local_3c = param_3;
  uVar1 = FUN_01299290(param_2);
  FUN_01328ef8(&local_20,&local_40,uVar1);
  if ((local_20 == 4) && (FUN_01299d5c(&local_20,param_2,&local_40), local_20 == 4)) {
    if (0x80000000 < local_40) {
      *param_1 = 4;
      return;
    }
    FUN_013287bc(&local_20,&local_40);
    if (local_20 == 4) {
      *param_1 = 4;
      if (0x7fffffff < local_40) {
        return;
      }
      goto LAB_012a2f24;
    }
  }
  *param_1 = local_20;
  param_1[1] = local_1c;
  param_1[2] = local_18;
  if ((int)local_40 < 0) {
    return;
  }
LAB_012a2f24:
  if (local_40 == 0) {
    return;
  }
  thunk_FUN_016d3fb4(local_3c);
  return;
}

