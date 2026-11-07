// FUN_014080b0 @ 014080b0 size=420 calls_out=5 calls_in=2
// strings: 

void FUN_014080b0(undefined4 *param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  longlong lVar3;
  byte bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined4 extraout_r1;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  
  pbVar10 = (byte *)((int)param_1 + 0x22);
  bVar4 = *(byte *)((int)param_1 + 0x22);
  do {
    if ((bVar4 & 1) != 0) {
      return;
    }
    bVar1 = *pbVar10;
    if (bVar1 == bVar4) {
      bVar2 = (bool)hasExclusiveAccess(pbVar10);
      if (bVar2) {
        *pbVar10 = bVar4 | 1;
      }
      bVar8 = false;
      if (bVar2) {
        DataMemoryBarrier(0xb);
        bVar8 = true;
      }
    }
    else {
      bVar8 = false;
      ClearExclusiveLocal();
    }
    bVar4 = bVar1;
  } while (!bVar8);
  FUN_0165098c(pbVar10);
  FUN_019b0710(&local_28,extraout_r1,*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24)
               ,*(undefined4 *)(param_2 + 0x28));
  DataMemoryBarrier(0xb);
  uVar6 = (uint)((ulonglong)local_28 * 1000000000);
  lVar3 = (ulonglong)uStack_24 * 1000000000 + ((ulonglong)local_28 * 1000000000 >> 0x20);
  uVar11 = (uint)lVar3;
  uVar12 = (uint)((ulonglong)lVar3 >> 0x20);
  uVar7 = uVar6 + uStack_20;
  bVar8 = CARRY4(uVar11,(uint)CARRY4(uVar6,uStack_20));
  uVar11 = uVar11 + CARRY4(uVar6,uStack_20);
  uVar6 = 0xfffffffe;
  if (uVar7 < 0xfffffffe) {
    uVar6 = uVar7;
  }
  if (uVar11 == 0xffffffff) {
    uVar7 = uVar6;
  }
  uVar6 = uVar7 + 300000000;
  iVar9 = uVar11 + (0xee1e5cff < uVar7);
  if (CARRY4(uVar11,(uint)(0xee1e5cff < uVar7))) {
    iVar9 = -1;
    uVar6 = 0xffffffff;
  }
  uVar7 = 0xfffffffe;
  if (uVar6 < 0xfffffffe) {
    uVar7 = uVar6;
  }
  if (iVar9 == -1) {
    uVar6 = uVar7;
  }
  if ((uint)(uVar12 + bVar8 == 0) <= -(uint)CARRY4(uVar12,(uint)bVar8)) {
    uVar6 = 0xfffffffe;
    iVar9 = -1;
  }
  do {
    bVar8 = (bool)hasExclusiveAccess(param_1 + 4);
  } while (!bVar8);
  param_1[4] = uVar6;
  param_1[5] = iVar9;
  uVar5 = FUN_013e93e0(param_2,iVar9,*param_1,param_1[1],param_1[2],param_1[6],param_1[7]);
  if (*(char *)(param_1 + 8) == '\x01') {
    DataMemoryBarrier(0xb);
    *(undefined1 *)((int)param_1 + 0x21) = uVar5;
  }
  FUN_01650a90(pbVar10);
  if (*pbVar10 == 1) {
    DataMemoryBarrier(0xb);
    do {
      bVar8 = (bool)hasExclusiveAccess(pbVar10);
      if (bVar8) {
        *pbVar10 = 0;
        return;
      }
    } while (*pbVar10 == 1);
  }
  ClearExclusiveLocal();
  FUN_0164f86c(pbVar10);
  return;
}

