// FUN_00a6ed38 @ 00a6ed38 size=444 calls_out=6 calls_in=2
// strings: 

void FUN_00a6ed38(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int local_28;
  int local_24;
  undefined4 local_20;
  uint uStack_1c;
  
  uVar2 = *(uint *)(param_2 + 0x14);
  if (*(uint *)(param_2 + 0x10) <= uVar2) {
LAB_00a6ee14:
    local_28 = 5;
    uVar1 = FUN_01143ab8(param_2,&local_28);
    *param_1 = 1;
    param_1[1] = uVar1;
    return;
  }
LAB_00a6ed54:
  uVar3 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar2);
  switch(uVar3) {
  case 9:
  case 10:
  case 0xd:
  case 0x20:
    goto switchD_00a6ed6c_caseD_9;
  default:
    if (9 < uVar3 - 0x30) {
      uVar1 = FUN_00a6c930(param_2,&local_28,&DAT_0186d388);
      uVar1 = FUN_00a6cecc(uVar1,param_2);
      param_1[1] = uVar1;
      *param_1 = 1;
      return;
    }
    FUN_00a6cf18(&local_28,param_2,1);
    if (local_28 == 3 && local_24 == 0) {
      *param_1 = 1;
      param_1[1] = local_20;
      return;
    }
    if (local_28 == 2) {
LAB_00a6ef34:
      uVar2 = FUN_01845fc8();
      goto LAB_00a6ef3c;
    }
    if (local_28 == 1) {
LAB_00a6eefc:
      uVar2 = FUN_0184589c();
      goto LAB_00a6ef3c;
    }
    break;
  case 0x2d:
    *(uint *)(param_2 + 0x14) = uVar2 + 1;
    FUN_00a6cf18(&local_28,param_2,0);
    if (local_28 == 3 && local_24 == 0) {
      *param_1 = 1;
      param_1[1] = local_20;
      return;
    }
    if (local_28 != 0) {
      if (local_28 == 1) goto LAB_00a6eefc;
      goto LAB_00a6ef34;
    }
  }
  uVar2 = 0xbf800000;
  if (uStack_1c < 0x80000000) {
    uVar2 = 0;
  }
  uVar2 = (uint)ABS((float)(double)CONCAT44(uStack_1c,local_20)) | uVar2 & 0x80000000;
LAB_00a6ef3c:
  param_1[1] = uVar2;
  *param_1 = 0;
  return;
switchD_00a6ed6c_caseD_9:
  uVar2 = uVar2 + 1;
  *(uint *)(param_2 + 0x14) = uVar2;
  if (*(uint *)(param_2 + 0x10) == uVar2) goto LAB_00a6ee14;
  goto LAB_00a6ed54;
}

