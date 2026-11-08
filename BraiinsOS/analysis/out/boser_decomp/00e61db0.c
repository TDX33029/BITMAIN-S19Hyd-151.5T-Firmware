// FUN_00e61db0 @ 00e61db0 size=196 calls_out=4 calls_in=2
// strings: 

void FUN_00e61db0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_44;
  int local_40;
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
    FUN_00e78a90(&local_44,&local_3c,iVar4);
    if (local_44 != 2) {
      *param_1 = local_44;
      param_1[1] = local_40;
      return;
    }
  }
  else {
    local_40 = iVar1;
    if (iVar3 != -0x80000000) {
      FUN_019bb7e0(iVar3,iVar2);
    }
  }
  iVar2 = local_40;
  FUN_0196bf0c(iVar6,iVar5);
  *param_1 = 2;
  param_1[1] = iVar2;
  return;
}

