// FUN_00e615c4 @ 00e615c4 size=208 calls_out=4 calls_in=0
// strings: 

void FUN_00e615c4(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_48;
  int iStack_44;
  int local_40;
  undefined4 uStack_3c;
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
    FUN_00e6ca54(&local_48,&local_38,iVar2);
    if (local_48 != 2 || iStack_44 != 0) {
      *param_1 = local_48;
      param_1[1] = iStack_44;
      *(ulonglong *)(param_1 + 2) = CONCAT44(uStack_3c,local_40);
      return;
    }
  }
  else {
    local_40 = iVar1;
    if (iVar3 != -0x80000000) {
      FUN_019bb7e0(iVar3,iVar4);
    }
  }
  iVar2 = local_40;
  FUN_0196bf0c(iVar6,iVar5);
  *param_1 = 2;
  param_1[1] = 0;
  param_1[2] = iVar2;
  return;
}

