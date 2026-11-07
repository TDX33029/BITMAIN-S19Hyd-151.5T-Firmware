// FUN_00e61ac4 @ 00e61ac4 size=204 calls_out=4 calls_in=1
// strings: 

void FUN_00e61ac4(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  iVar3 = *param_2;
  iVar5 = param_2[5];
  iVar6 = param_2[6];
  iVar2 = param_2[1];
  local_2c = param_2[2];
  iVar4 = param_2[3];
  local_3c = 2;
  if (iVar3 == -0x80000000) {
    local_3c = 8;
  }
  *param_2 = -0x80000000;
  local_38 = iVar5;
  local_34 = iVar3;
  local_30 = iVar2;
  local_28 = iVar6;
  iVar1 = FUN_0167459c(iVar4);
  if (iVar1 == 0) {
    FUN_00e713fc(&local_50,&local_3c,iVar4);
    if (local_50 != 3) {
      *param_1 = local_50;
      param_1[1] = local_4c;
      param_1[2] = iStack_48;
      param_1[3] = iStack_44;
      return;
    }
  }
  else {
    local_50 = 3;
    local_4c = iVar1;
    if (iVar3 != -0x80000000) {
      FUN_019bb7e0(iVar3,iVar2);
    }
  }
  iVar2 = local_4c;
  FUN_0196bf0c(iVar6,iVar5);
  *param_1 = 3;
  param_1[1] = iVar2;
  return;
}

