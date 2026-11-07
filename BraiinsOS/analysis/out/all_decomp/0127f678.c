// FUN_0127f678 @ 0127f678 size=560 calls_out=4 calls_in=2
// strings: 

undefined8 FUN_0127f678(int param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  
LAB_0127f69c:
  DataMemoryBarrier(0xb);
  piVar5 = DAT_018dd950;
  if (DAT_018dd950 == (int *)0x0) {
    piVar5 = (int *)FUN_01283a38();
  }
  uVar7 = piVar5[1];
  uVar3 = -piVar5[2] & 0x1f;
  uVar4 = (uint)(param_1 * -0x61c88647) >> uVar3;
  uVar1 = (uint)(param_2 * -0x61c88647) >> uVar3;
  if ((uint)(param_2 * -0x61c88647) >> uVar3 < uVar4) {
    uVar3 = uVar1;
    if (uVar7 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar1,uVar7,&DAT_0188b8e0);
    }
  }
  else {
    uVar3 = uVar4;
    if (uVar7 <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar4,uVar7,&DAT_0188b8f0);
    }
  }
  iVar10 = *piVar5 + uVar3 * 0x40;
  puVar9 = (uint *)(iVar10 + 0x18);
  if (*puVar9 == 0) {
    bVar2 = (bool)hasExclusiveAccess(puVar9);
    if (!bVar2) goto LAB_0127f74c;
    *puVar9 = 1;
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0127f74c:
    FUN_01286a10(puVar9);
  }
  if (DAT_018dd950 != piVar5) {
    DataMemoryBarrier(0xb);
    do {
      uVar4 = *puVar9;
      bVar2 = (bool)hasExclusiveAccess(puVar9);
    } while (!bVar2);
    *puVar9 = uVar4 - 1;
    if ((3 < uVar4) && ((uVar4 & 2) == 0)) {
      FUN_01286894(puVar9);
    }
    goto LAB_0127f69c;
  }
  if (uVar4 == uVar1) {
    return CONCAT44(iVar10,iVar10);
  }
  uVar3 = piVar5[1];
  if (uVar4 < uVar1) {
    if (uVar3 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar1,uVar3,&DAT_0188b910);
    }
    iVar8 = *piVar5 + uVar1 * 0x40;
    piVar5 = (int *)(iVar8 + 0x18);
    iVar6 = iVar10;
    if (*piVar5 == 0) {
      bVar2 = (bool)hasExclusiveAccess(piVar5);
      if (bVar2) {
        *piVar5 = 1;
        DataMemoryBarrier(0xb);
        return CONCAT44(iVar8,iVar10);
      }
      goto LAB_0127f854;
    }
  }
  else {
    if (uVar3 <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar4,uVar3,&DAT_0188b900);
    }
    iVar6 = *piVar5 + uVar4 * 0x40;
    piVar5 = (int *)(iVar6 + 0x18);
    iVar8 = iVar10;
    if (*piVar5 == 0) {
      bVar2 = (bool)hasExclusiveAccess(piVar5);
      if (bVar2) {
        *piVar5 = 1;
        DataMemoryBarrier(0xb);
        return CONCAT44(iVar10,iVar6);
      }
      goto LAB_0127f854;
    }
  }
  ClearExclusiveLocal();
LAB_0127f854:
  FUN_01286a10();
  return CONCAT44(iVar8,iVar6);
}

