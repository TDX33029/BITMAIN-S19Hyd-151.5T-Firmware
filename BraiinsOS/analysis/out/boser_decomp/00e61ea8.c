// FUN_00e61ea8 @ 00e61ea8 size=224 calls_out=4 calls_in=1
// strings: 

void FUN_00e61ea8(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_50;
  int local_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  iVar3 = *param_2;
  iVar4 = param_2[1];
  iVar5 = param_2[5];
  iVar6 = param_2[6];
  local_28 = param_2[2];
  iVar2 = param_2[3];
  local_38 = 2;
  if (iVar3 == -0x80000000) {
    local_38 = 8;
  }
  *param_2 = -0x80000000;
  local_34 = iVar5;
  local_30 = iVar3;
  local_2c = iVar4;
  local_24 = iVar6;
  iVar1 = FUN_0167459c(iVar2);
  if (iVar1 == 0) {
    FUN_00e687b0(&local_50,&local_38,iVar2);
    if (local_50 != 5 || local_4c != 0) {
      *param_1 = local_50;
      param_1[1] = local_4c;
      param_1[2] = local_48;
      param_1[3] = iStack_44;
      param_1[4] = iStack_40;
      param_1[5] = iStack_3c;
      return;
    }
  }
  else {
    local_4c = 0;
    local_50 = 5;
    local_48 = iVar1;
    if (iVar3 != -0x80000000) {
      FUN_019bb7e0(iVar3,iVar4);
    }
  }
  iVar2 = local_48;
  FUN_0196bf0c(iVar6,iVar5);
  *param_1 = 5;
  param_1[1] = 0;
  param_1[2] = iVar2;
  return;
}

