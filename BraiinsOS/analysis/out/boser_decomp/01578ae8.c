// FUN_01578ae8 @ 01578ae8 size=548 calls_out=4 calls_in=9
// strings: 

uint FUN_01578ae8(undefined1 *param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint local_70 [3];
  undefined4 local_64;
  uint local_60;
  undefined4 local_5c;
  int local_58;
  undefined4 local_54;
  int local_50;
  uint local_4c [3];
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  uVar2 = (uint)*param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    break;
  case 1:
    if (uVar2 != 1) {
      return 0;
    }
    uVar2 = (uint)(byte)param_1[1] - (uint)param_2[1];
    break;
  case 2:
    if (uVar2 == 2) {
      uVar2 = FUN_01578d28(param_1 + 8,param_2 + 8);
      return uVar2;
    }
    return 0;
  case 3:
    if (uVar2 != 3) {
      return 0;
    }
    if (*(int *)(param_1 + 0xc) != *(int *)(param_2 + 0xc)) {
      return 0;
    }
    uVar2 = thunk_FUN_01bed842(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_2 + 8));
    break;
  case 4:
    if (uVar2 != 4) {
      return 0;
    }
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 != *(int *)(param_2 + 0xc)) {
      return 0;
    }
    if (iVar1 == 0) {
      return 1;
    }
    iVar3 = *(int *)(param_2 + 8);
    iVar4 = *(int *)(param_1 + 8);
    do {
      iVar1 = iVar1 + -1;
      uVar2 = FUN_01578ae8(iVar4,iVar3);
      if (uVar2 == 0) {
        return 0;
      }
      iVar4 = iVar4 + 0x18;
      iVar3 = iVar3 + 0x18;
    } while (iVar1 != 0);
    return uVar2;
  case 5:
    if (uVar2 != 5) {
      return 0;
    }
    local_50 = *(int *)(param_1 + 0xc);
    if (local_50 != *(int *)(param_2 + 0xc)) {
      return 0;
    }
    local_4c[2] = *(uint *)(param_2 + 4);
    local_64 = *(undefined4 *)(param_1 + 8);
    local_70[2] = *(uint *)(param_1 + 4);
    local_40 = *(undefined4 *)(param_2 + 8);
    local_2c = 0;
    if (local_4c[2] != 0) {
      local_2c = local_50;
    }
    local_4c[0] = (uint)(local_4c[2] != 0);
    if (local_70[2] == 0) {
      local_50 = 0;
    }
    local_70[0] = (uint)(local_70[2] != 0);
    local_24 = 0;
    local_28 = 0;
    local_38 = 0;
    local_4c[1] = 0;
    local_5c = 0;
    local_70[1] = 0;
    local_60 = local_70[0];
    local_58 = local_70[2];
    local_54 = local_64;
    local_3c = local_4c[0];
    local_34 = local_4c[2];
    local_30 = local_40;
    while( true ) {
      uVar5 = FUN_01a41998(local_70);
      iVar1 = (int)uVar5;
      if (iVar1 == 0) {
        return 1;
      }
      uVar6 = FUN_01a41998(local_4c);
      iVar3 = (int)uVar6;
      if (iVar3 == 0) {
        return 1;
      }
      if (*(int *)(iVar1 + 8) != *(int *)(iVar3 + 8)) {
        return 0;
      }
      iVar1 = thunk_FUN_01bed842(*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar3 + 4));
      if (iVar1 != 0) break;
      iVar1 = FUN_01578ae8((int)((ulonglong)uVar5 >> 0x20),(int)((ulonglong)uVar6 >> 0x20));
      if (iVar1 == 0) {
        return 0;
      }
    }
    return 0;
  }
  return (uint)(uVar2 == 0);
}

