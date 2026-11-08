// FUN_00e619c8 @ 00e619c8 size=200 calls_out=4 calls_in=0
// strings: 

void FUN_00e619c8(undefined1 *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char local_40;
  undefined1 local_3f;
  int local_3c;
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
  iVar2 = FUN_0167459c(iVar5);
  if (iVar2 == 0) {
    FUN_00e787fc(&local_40,&local_38,iVar5);
    if (local_40 == '\0') {
      param_1[1] = local_3f;
      uVar1 = 0;
      goto LAB_00e61a74;
    }
  }
  else {
    local_3c = iVar2;
    if (iVar4 != -0x80000000) {
      FUN_019bb7e0(iVar4,iVar3);
    }
  }
  iVar3 = local_3c;
  FUN_0196bf0c(iVar7,iVar6);
  *(int *)(param_1 + 4) = iVar3;
  uVar1 = 1;
LAB_00e61a74:
  *param_1 = uVar1;
  return;
}

