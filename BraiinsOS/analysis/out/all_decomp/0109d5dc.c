// FUN_0109d5dc @ 0109d5dc size=492 calls_out=6 calls_in=2
// strings: 

void FUN_0109d5dc(undefined4 *param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  longlong lVar3;
  byte bVar4;
  undefined1 uVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 uVar16;
  uint local_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint local_38;
  undefined4 uStack_34;
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  
  pbVar11 = (byte *)((int)param_1 + 0x22);
  bVar4 = *(byte *)((int)param_1 + 0x22);
  do {
    if ((bVar4 & 1) != 0) {
      return;
    }
    bVar1 = *pbVar11;
    if (bVar1 == bVar4) {
      bVar2 = (bool)hasExclusiveAccess(pbVar11);
      if (bVar2) {
        *pbVar11 = bVar4 | 1;
      }
      bVar7 = false;
      if (bVar2) {
        DataMemoryBarrier(0xb);
        bVar7 = true;
      }
    }
    else {
      bVar7 = false;
      ClearExclusiveLocal();
    }
    bVar4 = bVar1;
  } while (!bVar7);
  FUN_0128236c(pbVar11);
  uVar16 = *(undefined4 *)(param_2 + 0x20);
  uVar14 = *(undefined4 *)(param_2 + 0x24);
  uVar12 = *(undefined4 *)(param_2 + 0x28);
  FUN_015f3b0c(&local_38,1);
  local_58 = local_38;
  uStack_54 = uStack_34;
  uStack_50 = local_30;
  local_48 = uVar16;
  local_44 = uVar14;
  local_40 = uVar12;
  FUN_015f3c24(&local_38,&local_58,&local_48);
  DataMemoryBarrier(0xb);
  uVar6 = (uint)((ulonglong)local_30 * 1000000000);
  lVar3 = (ulonglong)uStack_2c * 1000000000 + ((ulonglong)local_30 * 1000000000 >> 0x20);
  uVar13 = (uint)lVar3;
  uVar15 = (uint)((ulonglong)lVar3 >> 0x20);
  uVar9 = uVar6 + uStack_28;
  bVar7 = CARRY4(uVar13,(uint)CARRY4(uVar6,uStack_28));
  uVar13 = uVar13 + CARRY4(uVar6,uStack_28);
  iVar8 = uVar15 + bVar7;
  uVar6 = (uint)CARRY4(uVar15,(uint)bVar7);
  if ((local_38 & 1) != 0) {
    uVar6 = 0;
    iVar8 = 0;
    uVar13 = 0;
    uVar9 = 0;
  }
  uVar15 = 0xfffffffe;
  if (uVar9 < 0xfffffffe) {
    uVar15 = uVar9;
  }
  if (uVar13 == 0xffffffff) {
    uVar9 = uVar15;
  }
  uVar15 = uVar9 + 300000000;
  iVar10 = uVar13 + (0xee1e5cff < uVar9);
  if (CARRY4(uVar13,(uint)(0xee1e5cff < uVar9))) {
    iVar10 = -1;
    uVar15 = 0xffffffff;
  }
  uVar13 = 0xfffffffe;
  if (uVar15 < 0xfffffffe) {
    uVar13 = uVar15;
  }
  if (iVar10 == -1) {
    uVar15 = uVar13;
  }
  if ((uint)(iVar8 == 0) <= -uVar6) {
    uVar15 = 0xfffffffe;
    iVar10 = -1;
  }
  do {
    bVar7 = (bool)hasExclusiveAccess(param_1 + 4);
  } while (!bVar7);
  param_1[4] = uVar15;
  param_1[5] = iVar10;
  uVar5 = FUN_010614f0(param_2,0,*param_1,param_1[1],param_1[2],param_1[6],param_1[7]);
  if (*(char *)(param_1 + 8) == '\x01') {
    DataMemoryBarrier(0xb);
    *(undefined1 *)((int)param_1 + 0x21) = uVar5;
  }
  FUN_01282570(pbVar11);
  if (*pbVar11 == 1) {
    DataMemoryBarrier(0xb);
    do {
      bVar7 = (bool)hasExclusiveAccess(pbVar11);
      if (bVar7) {
        *pbVar11 = 0;
        return;
      }
    } while (*pbVar11 == 1);
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pbVar11);
  return;
}

