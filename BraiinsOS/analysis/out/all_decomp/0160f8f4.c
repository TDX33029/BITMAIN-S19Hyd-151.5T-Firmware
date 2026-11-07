// FUN_0160f8f4 @ 0160f8f4 size=560 calls_out=3 calls_in=1
// strings: 

void FUN_0160f8f4(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  piVar3 = (int *)*param_2;
  if ((uint)(param_2[1] - (int)piVar3) < 4) {
    param_1[1] = -0x7ffffffb;
    param_1[2] = (int)piVar3;
    *param_1 = 0;
    param_1[3] = 4;
    return;
  }
  local_30 = -0x7ffffffb;
  local_38 = param_2;
  FUN_00f2cc28(&local_30);
  piVar1 = piVar3 + 1;
  iVar8 = *piVar3;
  *param_2 = (int)piVar1;
  if ((uint)(param_2[1] - (int)piVar1) < 4) {
LAB_0160f964:
    *param_1 = 0;
    param_1[1] = -0x7ffffffb;
    param_1[2] = (int)piVar1;
    param_1[3] = 4;
    return;
  }
  local_30 = -0x7ffffffb;
  FUN_00f2cc28(&local_30);
  piVar1 = piVar3 + 2;
  *param_2 = (int)piVar1;
  if (3 < (uint)(param_2[1] - (int)piVar1)) {
    iVar6 = piVar3[1];
    local_30 = -0x7ffffffb;
    FUN_00f2cc28(&local_30);
    piVar1 = piVar3 + 3;
    *param_2 = (int)piVar1;
    if ((uint)(param_2[1] - (int)piVar1) < 4) goto LAB_0160f964;
    iVar7 = piVar3[2];
    local_30 = -0x7ffffffb;
    FUN_00f2cc28(&local_30);
    piVar1 = piVar3 + 4;
    *param_2 = (int)piVar1;
    if (3 < (uint)(param_2[1] - (int)piVar1)) {
      iVar5 = piVar3[3];
      local_30 = -0x7ffffffb;
      FUN_00f2cc28(&local_30);
      piVar1 = piVar3 + 5;
      *param_2 = (int)piVar1;
      local_34 = 1;
      if ((uint)(param_2[1] - (int)piVar1) < 4) {
        *param_1 = 0;
        param_1[1] = -0x7ffffffb;
        param_1[2] = (int)piVar1;
        param_1[3] = 4;
        return;
      }
      iVar2 = piVar3[4];
      local_30 = -0x7ffffffb;
      FUN_00f2cc28(&local_30);
      iVar4 = piVar3[5];
      *param_2 = (int)(piVar3 + 6);
      FUN_016139d4(&local_30,&local_38);
      if (local_30 != -0x7ffffff6) {
        param_1[1] = local_30;
        *param_1 = 0;
        param_1[2] = local_2c;
        param_1[3] = local_28;
        return;
      }
      if (local_2c == 0) {
        FUN_01613578(param_1 + 1,6,&DAT_018ab9e0,&DAT_018ab990);
        *param_1 = 0;
        return;
      }
      param_1[1] = local_28;
      param_1[2] = iVar8;
      *param_1 = local_2c;
      param_1[3] = iVar6;
      param_1[4] = iVar7;
      param_1[5] = iVar5;
      param_1[6] = iVar2;
      param_1[7] = iVar4;
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = -0x7ffffffb;
  param_1[2] = (int)piVar1;
  param_1[3] = 4;
  return;
}

