// FUN_0160f0f4 @ 0160f0f4 size=280 calls_out=3 calls_in=1
// strings: 

void FUN_0160f0f4(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_2c;
  int local_28;
  int local_24;
  
  piVar3 = (int *)*param_2;
  iVar4 = param_2[1];
  if ((uint)(iVar4 - (int)piVar3) < 4) {
    param_1[1] = -0x7ffffffb;
    param_1[2] = (int)piVar3;
    *param_1 = 0;
    param_1[3] = 4;
    return;
  }
  local_2c = -0x7ffffffb;
  FUN_00f2cc28(&local_2c);
  piVar1 = piVar3 + 1;
  iVar2 = *piVar3;
  *param_2 = (int)piVar1;
  if ((uint)(iVar4 - (int)piVar1) < 4) {
    *param_1 = 0;
    param_1[1] = -0x7ffffffb;
    param_1[2] = (int)piVar1;
    param_1[3] = 4;
    return;
  }
  local_2c = -0x7ffffffb;
  FUN_00f2cc28(&local_2c);
  *param_2 = (int)(piVar3 + 2);
  iVar4 = piVar3[1];
  FUN_01622628(&local_2c,param_2);
  if (local_2c != -0x7ffffff6) {
    param_1[1] = local_2c;
    *param_1 = 0;
    param_1[2] = local_28;
    param_1[3] = local_24;
    return;
  }
  if (local_28 == 0) {
    FUN_01613578(param_1 + 1,2,&DAT_018ab9c0,&DAT_018ab990);
    *param_1 = 0;
    return;
  }
  *param_1 = local_28;
  param_1[1] = local_24;
  param_1[2] = iVar2;
  param_1[3] = iVar4;
  return;
}

