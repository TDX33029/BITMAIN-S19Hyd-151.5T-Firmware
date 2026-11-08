// FUN_019a1d34 @ 019a1d34 size=340 calls_out=2 calls_in=2
// strings: 

void FUN_019a1d34(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int local_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int local_40;
  int local_3c;
  int local_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  if (*param_2 == 3) {
    iVar1 = param_2[2];
    iVar2 = param_2[1];
    FUN_012fbd94(&local_40,iVar2,iVar1);
    if (local_40 == 1) {
      local_40 = 2;
    }
    else {
      FUN_0189bc58(&local_40,local_3c,local_38);
      if (local_40 != 2) {
        local_60 = local_3c;
        iStack_5c = local_38;
        iStack_58 = iStack_34;
        local_54 = local_30;
        iStack_50 = iStack_2c;
        iStack_4c = iStack_28;
        iStack_48 = iStack_24;
      }
    }
    *param_1 = local_40;
    param_1[1] = local_60;
    param_1[2] = iStack_5c;
    param_1[3] = iStack_58;
    param_1[4] = local_54;
    param_1[5] = iStack_50;
    param_1[6] = iStack_4c;
    param_1[7] = iStack_48;
    param_1[8] = iVar2;
    param_1[9] = iVar1;
    return;
  }
  iVar1 = param_2[7];
  if (iVar1 == 0) {
    *param_1 = 3;
    return;
  }
  iVar2 = param_2[8];
  FUN_012fbd94(&local_40,iVar1,iVar2);
  if (local_40 == 1) {
    local_40 = 2;
  }
  else {
    FUN_0189bc58(&local_40,local_3c,local_38);
    if (local_40 != 2) {
      local_60 = local_3c;
      iStack_5c = local_38;
      iStack_58 = iStack_34;
      local_54 = local_30;
      iStack_50 = iStack_2c;
      iStack_4c = iStack_28;
      iStack_48 = iStack_24;
    }
  }
  *param_1 = local_40;
  param_1[1] = local_60;
  param_1[2] = iStack_5c;
  param_1[3] = iStack_58;
  param_1[4] = local_54;
  param_1[5] = iStack_50;
  param_1[6] = iStack_4c;
  param_1[7] = iStack_48;
  param_1[8] = iVar1;
  param_1[9] = iVar2;
  return;
}

