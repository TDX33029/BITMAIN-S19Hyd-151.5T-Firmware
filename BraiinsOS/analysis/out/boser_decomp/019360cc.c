// FUN_019360cc @ 019360cc size=160 calls_out=1 calls_in=0
// strings: 

void FUN_019360cc(undefined4 *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int local_30;
  int iStack_2c;
  uint local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar2 = param_2[2];
  local_28 = param_2[3];
  iVar1 = *param_2;
  if (local_28 <= uVar2) {
    iStack_2c = param_2[1];
    uVar2 = 0;
    local_24 = param_2[4];
    local_28 = 0;
    local_30 = iVar1;
    FUN_019ba410(&local_20,param_2[5],&local_30);
    param_2[2] = 0;
    param_2[3] = local_28;
    param_2[4] = local_24;
    if ((char)local_20 != '\x04') {
      *param_1 = 1;
      param_1[1] = local_20;
      param_1[2] = local_1c;
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = iVar1 + uVar2;
  param_1[2] = local_28 - uVar2;
  return;
}

