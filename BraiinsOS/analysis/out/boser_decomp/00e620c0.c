// FUN_00e620c0 @ 00e620c0 size=340 calls_out=5 calls_in=6
// strings: 

int FUN_00e620c0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_68;
  int iStack_64;
  int iStack_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int local_38;
  int iStack_34;
  int local_30;
  int local_2c;
  int iStack_28;
  
  iVar6 = *param_1;
  iVar5 = param_1[1];
  iVar2 = param_1[2];
  iVar4 = param_1[5];
  iVar7 = param_1[6];
  iVar3 = param_1[3];
  *param_1 = -0x80000000;
  local_68 = 2;
  if (iVar6 == -0x80000000) {
    local_68 = 8;
  }
  iStack_64 = iVar4;
  iStack_60 = iVar6;
  local_5c = iVar5;
  local_58 = iVar2;
  local_54 = iVar7;
  iVar1 = FUN_0167459c(iVar3);
  if (iVar1 == 0) {
    if (iVar6 == -0x80000000) {
      local_50 = local_68;
      local_4c = iStack_64;
      iStack_48 = iStack_60;
      iStack_44 = local_5c;
      iStack_40 = local_58;
    }
    else {
      FUN_006666fc(&iStack_48,iVar5,iVar2);
      local_50 = 2;
      local_4c = iVar4;
    }
    local_38 = local_50;
    iStack_34 = local_4c;
    local_30 = iStack_48;
    local_2c = iStack_44;
    iStack_28 = iStack_40;
    iVar2 = FUN_012c6c4c(iVar3);
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      FUN_0196bf0c(iVar7,&local_38);
      iVar1 = iVar2;
    }
    if (local_38 == 4 || local_38 == 2) {
      FUN_019bb7e0(local_30,local_2c);
    }
    if (iVar2 != 0) {
      FUN_0196bf0c(iVar7,&local_68);
    }
    if (iVar6 != -0x80000000) {
      FUN_019bb7e0(iVar6,iVar5);
    }
    if (iVar1 == 0) {
      return 0;
    }
  }
  else if (iVar6 != -0x80000000) {
    FUN_019bb7e0(iVar6,iVar5);
  }
  FUN_0196bf0c(iVar7,iVar4);
  return iVar1;
}

