// FUN_0164eb1c @ 0164eb1c size=520 calls_out=4 calls_in=2
// strings: 

undefined8 FUN_0164eb1c(int param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  
LAB_0164eb40:
  DataMemoryBarrier(0xb);
  piVar5 = DAT_01d519e4;
  if (DAT_01d519e4 == (int *)0x0) {
    piVar5 = (int *)FUN_016518b8();
  }
  uVar6 = piVar5[1];
  uVar3 = -piVar5[2] & 0x1f;
  uVar4 = (uint)(param_1 * -0x61c88647) >> uVar3;
  uVar1 = (uint)(param_2 * -0x61c88647) >> uVar3;
  if ((uint)(param_2 * -0x61c88647) >> uVar3 < uVar4) {
    uVar3 = uVar1;
    if (uVar6 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar1,uVar6,&DAT_01d06898);
    }
  }
  else {
    uVar3 = uVar4;
    if (uVar6 <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar4,uVar6,&DAT_01d068a8);
    }
  }
  iVar9 = *piVar5 + uVar3 * 0x40;
  puVar8 = (uint *)(iVar9 + 0x18);
  if (*puVar8 == 0) {
    bVar2 = (bool)hasExclusiveAccess(puVar8);
    if (!bVar2) goto LAB_0164ebf4;
    *puVar8 = 1;
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0164ebf4:
    FUN_01652ed8(puVar8);
  }
  if (DAT_01d519e4 != piVar5) {
    DataMemoryBarrier(0xb);
    do {
      uVar4 = *puVar8;
      bVar2 = (bool)hasExclusiveAccess(puVar8);
    } while (!bVar2);
    *puVar8 = uVar4 - 1;
    if ((3 < uVar4) && ((uVar4 & 2) == 0)) {
      FUN_01652d70(puVar8);
    }
    goto LAB_0164eb40;
  }
  iVar7 = iVar9;
  if (uVar4 == uVar1) {
LAB_0164ec6c:
    goto LAB_0164ecd4;
  }
  uVar3 = piVar5[1];
  if (uVar4 < uVar1) {
    if (uVar3 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar1,uVar3,&DAT_01d068c8);
    }
    iVar9 = *piVar5 + uVar1 * 0x40;
    piVar5 = (int *)(iVar9 + 0x18);
    if (*piVar5 != 0) {
      goto LAB_0164ecbc;
    }
    bVar2 = (bool)hasExclusiveAccess(piVar5);
    if (bVar2) {
      *piVar5 = 1;
      DataMemoryBarrier(0xb);
      goto LAB_0164ec6c;
    }
  }
  else {
    if (uVar3 <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar4,uVar3,&DAT_01d068b8);
    }
    iVar7 = *piVar5 + uVar4 * 0x40;
    piVar5 = (int *)(iVar7 + 0x18);
    if (*piVar5 == 0) {
      bVar2 = (bool)hasExclusiveAccess(piVar5);
      if (bVar2) {
        *piVar5 = 1;
        DataMemoryBarrier(0xb);
        goto LAB_0164ecd4;
      }
    }
    else {
LAB_0164ecbc:
      ClearExclusiveLocal();
    }
  }
  FUN_01652ed8();
LAB_0164ecd4:
  return CONCAT44(iVar9,iVar7);
}

