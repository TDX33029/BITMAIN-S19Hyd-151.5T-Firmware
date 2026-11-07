// FUN_0164ccc4 @ 0164ccc4 size=776 calls_out=6 calls_in=5
// strings: overflow when adding duration to instant

void FUN_0164ccc4(uint *param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined1 *puVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined4 *puVar10;
  bool bVar11;
  undefined4 in_stack_00000000;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  
  puVar10 = (undefined4 *)((uint)param_1 | 1);
LAB_0164ccec:
  DataMemoryBarrier(0xb);
  piVar2 = DAT_01d519e4;
  if (DAT_01d519e4 == (int *)0x0) {
    piVar2 = (int *)FUN_016518b8();
  }
  uVar1 = (uint)((int)puVar10 * -0x61c88647) >> (-piVar2[2] & 0x1fU);
  if ((uint)piVar2[1] <= (uint)((int)puVar10 * -0x61c88647) >> (-piVar2[2] & 0x1fU)) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar1,piVar2[1],&DAT_01d068e8);
  }
  puVar9 = (uint *)(*piVar2 + uVar1 * 0x40);
  puVar6 = puVar9 + 6;
  if (*puVar6 == 0) {
    bVar11 = (bool)hasExclusiveAccess(puVar6);
    if (!bVar11) goto LAB_0164cd88;
    *puVar6 = 1;
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0164cd88:
    FUN_01652ed8(puVar6);
  }
  if (DAT_01d519e4 != piVar2) {
    DataMemoryBarrier(0xb);
    do {
      uVar1 = *puVar6;
      bVar11 = (bool)hasExclusiveAccess(puVar6);
    } while (!bVar11);
    *puVar6 = uVar1 - 1;
    if ((3 < uVar1) && ((uVar1 & 2) == 0)) {
      FUN_01652d70(puVar6);
    }
    goto LAB_0164ccec;
  }
  puVar4 = puVar9 + 7;
  puVar8 = (undefined4 *)*puVar4;
  if (puVar8 == (undefined4 *)0x0) {
LAB_0164cdfc:
    do {
      bVar11 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar11);
    *param_1 = *param_1 & 0xfffffffd;
    DataMemoryBarrier(0xb);
    do {
      uVar1 = *puVar6;
      bVar11 = (bool)hasExclusiveAccess(puVar6);
    } while (!bVar11);
    *puVar6 = uVar1 - 1;
    if ((uVar1 < 4) || ((uVar1 & 2) != 0)) {
      return;
    }
    FUN_01652d70(puVar6);
    return;
  }
  puVar3 = (undefined4 *)0x0;
  if ((undefined4 *)puVar8[1] != puVar10) {
    do {
      puVar3 = puVar8;
      puVar8 = (undefined4 *)puVar3[2];
      if (puVar8 == (undefined4 *)0x0) goto LAB_0164cdfc;
    } while ((undefined4 *)puVar8[1] != puVar10);
    puVar4 = puVar3 + 2;
  }
  uVar1 = puVar8[2];
  *puVar4 = uVar1;
  if ((undefined4 *)puVar9[8] == puVar8) {
    puVar9[8] = (uint)puVar3;
  }
  else {
    while( true ) {
      if (uVar1 != 0) {
        puVar3 = *(undefined4 **)(uVar1 + 4);
      }
      if (uVar1 == 0 || puVar3 == puVar10) break;
      uVar1 = *(uint *)(uVar1 + 8);
    }
  }
  FUN_019ac130(&local_38,1);
  uVar1 = *puVar9;
  uVar7 = puVar9[1];
  bVar11 = (int)(uVar7 - (uStack_34 + (uVar1 < local_38))) < 0 !=
           (SBORROW4(uVar7,uStack_34) != SBORROW4(uVar7 - uStack_34,(uint)(uVar1 < local_38)));
  if (local_38 == uVar1 && uStack_34 == uVar7) {
    bVar11 = puVar9[2] < uStack_30;
  }
  if (bVar11) {
    uVar1 = puVar9[4] ^ puVar9[4] << 0xd;
    uVar1 = uVar1 ^ uVar1 >> 0x11;
    uVar1 = uVar1 ^ uVar1 << 5;
    puVar9[4] = uVar1;
    puVar5 = (undefined1 *)(uVar1 + (short)(uVar1 / 1000000) * -1000000 + uStack_30);
    if (&DAT_3b9aca00 <= puVar5) {
      bVar11 = 0xfffffffe < local_38;
      local_38 = local_38 + 1;
      uVar1 = uStack_34 + bVar11;
      if ((int)((uStack_34 ^ uVar1) & ~uStack_34) < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("overflow when adding duration to instant",0x28,&DAT_01d281d4);
      }
      puVar5 = puVar5 + -1000000000;
      uStack_34 = uVar1;
    }
    *puVar9 = local_38;
    puVar9[1] = uStack_34;
    puVar9[2] = (uint)puVar5;
  }
  do {
    bVar11 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar11);
  *param_1 = *param_1 & 0xfffffffd;
  puVar8[3] = 0;
  DataMemoryBarrier(0xb);
  *puVar8 = 0;
  DataMemoryBarrier(0xb);
  do {
    uVar1 = *puVar6;
    bVar11 = (bool)hasExclusiveAccess(puVar6);
  } while (!bVar11);
  *puVar6 = uVar1 - 1;
  if ((3 < uVar1) && ((uVar1 & 2) == 0)) {
    FUN_01652d70(puVar6);
  }
  software_interrupt(0);
  FUN_01be3b5a(puVar8,0x81,1,in_stack_00000000);
  return;
}

