// FUN_0111f29c @ 0111f29c size=388 calls_out=6 calls_in=1
// strings: 

void FUN_0111f29c(undefined4 *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int local_40;
  uint uStack_3c;
  uint local_38;
  int *local_34;
  int local_30;
  undefined4 local_2c;
  uint local_28;
  undefined4 uStack_24;
  
  FUN_01666080(&local_30);
  uVar3 = local_28;
  uVar2 = local_2c;
  iVar8 = local_30;
  if (local_30 == -0x7fffffff) {
    param_1[2] = local_28;
    *param_1 = 0x80000002;
    param_1[1] = local_2c;
    return;
  }
  if (local_30 == -0x80000000) {
    *param_1 = &DAT_8000000c;
    param_1[1] = 0;
    return;
  }
  if (local_28 == 0) {
    uVar9 = 0;
    iVar4 = 1;
  }
  else {
    iVar4 = thunk_FUN_016d4a50(local_28);
    uVar9 = uVar3;
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,uVar3);
    }
  }
  FUN_016dd1aa(iVar4,uVar2,uVar3);
  uStack_3c = uVar3;
  uVar5 = 0x20 - LZCOUNT(uVar9 >> 10);
  if (6 < uVar5) {
    uVar5 = 7;
  }
  local_34 = (int *)(uVar5 << 2 | 1);
  local_40 = iVar4;
  local_38 = uVar9;
  if (iVar8 != 0) {
    thunk_FUN_016d3fb4(uVar2);
  }
  FUN_00f5f8dc(&local_30,&local_40,uVar3);
  piVar6 = local_34;
  *param_1 = &DAT_8000000c;
  param_1[1] = 1;
  param_1[2] = local_30;
  param_1[3] = local_2c;
  param_1[4] = local_28;
  param_1[5] = uStack_24;
  if (((uint)local_34 & 1) == 0) {
    piVar7 = local_34 + 4;
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar7;
      bVar1 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar1);
    *piVar7 = iVar8 + -1;
    if (iVar8 != 1) {
      return;
    }
    DataMemoryBarrier(0xb);
    if (*local_34 != 0) {
      thunk_FUN_016d3fb4(local_34[1]);
    }
  }
  else {
    if (local_38 + ((uint)local_34 >> 5) == 0) {
      return;
    }
    piVar6 = (int *)(local_40 - ((uint)local_34 >> 5));
  }
  thunk_FUN_016d3fb4(piVar6);
  return;
}

