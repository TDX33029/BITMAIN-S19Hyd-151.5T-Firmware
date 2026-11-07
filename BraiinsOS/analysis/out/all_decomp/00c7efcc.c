// FUN_00c7efcc @ 00c7efcc size=436 calls_out=6 calls_in=1
// strings: 

void FUN_00c7efcc(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int local_48;
  int local_44;
  undefined4 local_40;
  int iStack_3c;
  undefined4 local_38 [2];
  undefined4 local_30;
  int local_2c;
  undefined1 uStack_21;
  
  uVar2 = *(uint *)(param_2 + 0x14);
  if (*(uint *)(param_2 + 0x10) <= uVar2) {
LAB_00c7f0ac:
    local_38[0] = 5;
    uVar1 = FUN_00c629ac(param_2,local_38);
    *param_1 = 1;
    param_1[1] = uVar1;
    return;
  }
LAB_00c7efec:
  uVar3 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar2);
  switch(uVar3) {
  case 9:
  case 10:
  case 0xd:
  case 0x20:
    goto switchD_00c7f004_caseD_9;
  default:
    if (9 < uVar3 - 0x30) {
      uVar1 = FUN_00c7f220(param_2,&uStack_21,&DAT_01873d58);
      goto LAB_00c7f1b8;
    }
    FUN_011b4dc8(&local_48,param_2,1);
    if (local_48 == 3 && local_44 == 0) {
      *param_1 = 1;
      param_1[1] = local_40;
      return;
    }
    break;
  case 0x2d:
    *(uint *)(param_2 + 0x14) = uVar2 + 1;
    FUN_011b4dc8(&local_48,param_2,0);
    if (local_48 == 3 && local_44 == 0) {
      *param_1 = 1;
      param_1[1] = local_40;
      return;
    }
  }
  if (local_48 == 1) {
LAB_00c7f180:
    param_1[2] = local_40;
    param_1[3] = iStack_3c;
    *param_1 = 0;
    return;
  }
  if (local_48 == 2) {
    if (-1 < iStack_3c) goto LAB_00c7f180;
    local_30 = local_40;
    local_2c = iStack_3c;
    uVar1 = FUN_0157cd6c(local_38,&uStack_21,&DAT_01873d58);
  }
  else {
    local_2c = iStack_3c;
    local_30 = local_40;
    uVar1 = FUN_0157cc00(local_38,&uStack_21,&DAT_01873d58);
  }
LAB_00c7f1b8:
  uVar1 = FUN_011da0d4(uVar1,param_2);
  param_1[1] = uVar1;
  *param_1 = 1;
  return;
switchD_00c7f004_caseD_9:
  uVar2 = uVar2 + 1;
  *(uint *)(param_2 + 0x14) = uVar2;
  if (*(uint *)(param_2 + 0x10) == uVar2) goto LAB_00c7f0ac;
  goto LAB_00c7efec;
}

