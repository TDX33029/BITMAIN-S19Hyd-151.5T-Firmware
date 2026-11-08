// FUN_00abcd1c @ 00abcd1c size=152 calls_out=1 calls_in=8
// strings: 

void FUN_00abcd1c(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int local_34;
  int local_30;
  int iStack_2c;
  int local_28;
  int iStack_24;
  int iStack_20;
  
  iVar1 = 8;
  if (*param_3 != -0x80000000) {
    local_34 = param_3[3];
    local_30 = param_3[4];
    iStack_2c = param_3[5];
    local_28 = param_3[6];
    iStack_24 = param_3[7];
    iStack_20 = param_3[8];
    iVar1 = 7;
    local_40 = *param_3;
    iStack_3c = param_3[1];
    iStack_38 = param_3[2];
  }
  if (*param_2 != 8) {
    FUN_00abaea0(param_2);
  }
  *param_2 = iVar1;
  param_2[1] = local_40;
  param_2[2] = iStack_3c;
  param_2[3] = iStack_38;
  param_2[4] = local_34;
  param_2[5] = local_30;
  param_2[6] = iStack_2c;
  param_2[7] = local_28;
  param_2[8] = iStack_24;
  param_2[9] = iStack_20;
  FUN_01bed4e2(param_1,param_2,0x1c8);
  return;
}

