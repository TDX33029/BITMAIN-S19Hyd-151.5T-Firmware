// FUN_0155eb5c @ 0155eb5c size=204 calls_out=3 calls_in=0
// strings: 

void FUN_0155eb5c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int local_40;
  int local_3c;
  int local_38;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  
  FUN_013208dc(&local_50,&DAT_004a635e,param_2,param_3);
  if (local_50 == -0x80000000) {
    *param_1 = -0x80000000;
  }
  else {
    local_40 = local_50;
    local_3c = iStack_4c;
    local_38 = iStack_48;
    FUN_012fbd94(&local_1c,iStack_4c,iStack_48);
    if (local_1c == 0) {
      local_38 = local_3c;
      local_3c = local_40;
      local_18 = iStack_48;
    }
    else if (local_40 != -0x80000000) {
      local_28 = local_38;
      local_2c = local_3c;
      local_24 = local_18;
      local_30 = local_40;
      local_20 = local_14;
      iVar1 = FUN_015964a4(&local_30);
      *param_1 = -0x7fffffff;
      param_1[1] = iVar1;
      return;
    }
    *param_1 = local_3c;
    param_1[1] = local_38;
    param_1[2] = local_18;
  }
  return;
}

