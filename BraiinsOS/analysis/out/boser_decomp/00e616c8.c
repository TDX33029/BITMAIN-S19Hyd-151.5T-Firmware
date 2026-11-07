// FUN_00e616c8 @ 00e616c8 size=200 calls_out=4 calls_in=1
// strings: 

void FUN_00e616c8(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_48;
  int local_44;
  undefined8 local_40;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  iVar4 = *param_2;
  iVar6 = param_2[5];
  iVar7 = param_2[6];
  iVar3 = param_2[1];
  local_28 = param_2[2];
  iVar5 = param_2[3];
  local_38 = 2;
  if (iVar4 == -0x80000000) {
    local_38 = 8;
  }
  *param_2 = -0x80000000;
  local_34 = iVar6;
  local_30 = iVar4;
  local_2c = iVar3;
  local_24 = iVar7;
  iVar1 = FUN_0167459c(iVar5);
  if (iVar1 == 0) {
    FUN_00e72b8c(&local_48,&local_38,iVar5);
    if (local_48 == 0) {
      uVar2 = 0;
      *(undefined8 *)(param_1 + 2) = local_40;
      goto LAB_00e61774;
    }
  }
  else {
    local_44 = iVar1;
    if (iVar4 != -0x80000000) {
      FUN_019bb7e0(iVar4,iVar3);
    }
  }
  iVar3 = local_44;
  FUN_0196bf0c(iVar7,iVar6);
  param_1[1] = iVar3;
  uVar2 = 1;
LAB_00e61774:
  *param_1 = uVar2;
  return;
}

