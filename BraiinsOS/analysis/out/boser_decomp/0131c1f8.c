// FUN_0131c1f8 @ 0131c1f8 size=780 calls_out=6 calls_in=2
// strings: overflow when adding duration to instant

void FUN_0131c1f8(int *param_1)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  undefined1 *puVar4;
  uint *puVar5;
  int *piVar6;
  uint uVar7;
  uint *puVar8;
  bool bVar9;
  undefined4 in_stack_00000000;
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  undefined4 uStack_24;
  
  do {
    if (*param_1 != 2) {
      ClearExclusiveLocal();
      return;
    }
    bVar9 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar9);
  *param_1 = 0;
LAB_0131c238:
  DataMemoryBarrier(0xb);
  piVar6 = DAT_01d519e4;
  if (DAT_01d519e4 == (int *)0x0) {
    piVar6 = (int *)FUN_016518b8();
  }
  uVar1 = (uint)((int)param_1 * -0x61c88647) >> (-piVar6[2] & 0x1fU);
  if ((uint)piVar6[1] <= (uint)((int)param_1 * -0x61c88647) >> (-piVar6[2] & 0x1fU)) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar1,piVar6[1],&DAT_01d068e8);
  }
  puVar8 = (uint *)(*piVar6 + uVar1 * 0x40);
  puVar5 = puVar8 + 6;
  if (*puVar5 == 0) {
    bVar9 = (bool)hasExclusiveAccess(puVar5);
    if (!bVar9) goto LAB_0131c2d4;
    *puVar5 = 1;
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0131c2d4:
    FUN_01652ed8(puVar5);
  }
  if (DAT_01d519e4 != piVar6) {
    DataMemoryBarrier(0xb);
    do {
      uVar1 = *puVar5;
      bVar9 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar9);
    *puVar5 = uVar1 - 1;
    if ((3 < uVar1) && ((uVar1 & 2) == 0)) {
      FUN_01652d70(puVar5);
    }
    goto LAB_0131c238;
  }
  puVar3 = puVar8 + 7;
  piVar6 = (int *)*puVar3;
  if (piVar6 == (int *)0x0) {
LAB_0131c350:
    DataMemoryBarrier(0xb);
    do {
      uVar1 = *puVar5;
      bVar9 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar9);
    *puVar5 = uVar1 - 1;
    if ((uVar1 < 4) || ((uVar1 & 2) != 0)) {
      return;
    }
    FUN_01652d70(puVar5);
    return;
  }
  piVar2 = (int *)0x0;
  if ((int *)piVar6[1] != param_1) {
    do {
      piVar2 = piVar6;
      piVar6 = (int *)piVar2[2];
      if (piVar6 == (int *)0x0) goto LAB_0131c350;
    } while ((int *)piVar6[1] != param_1);
    puVar3 = (uint *)(piVar2 + 2);
  }
  uVar1 = piVar6[2];
  *puVar3 = uVar1;
  if ((int *)puVar8[8] == piVar6) {
    puVar8[8] = (uint)piVar2;
  }
  else {
    while( true ) {
      if (uVar1 != 0) {
        piVar2 = *(int **)(uVar1 + 4);
      }
      if (uVar1 == 0 || piVar2 == param_1) break;
      uVar1 = *(uint *)(uVar1 + 8);
    }
  }
  FUN_019ac130(&local_30,1);
  uVar7 = *puVar8;
  uVar1 = puVar8[1];
  bVar9 = (int)(uVar1 - (uStack_2c + (uVar7 < local_30))) < 0 !=
          (SBORROW4(uVar1,uStack_2c) != SBORROW4(uVar1 - uStack_2c,(uint)(uVar7 < local_30)));
  if (local_30 == uVar7 && uStack_2c == uVar1) {
    bVar9 = puVar8[2] < uStack_28;
  }
  if (bVar9) {
    uVar1 = puVar8[4] ^ puVar8[4] << 0xd;
    uVar1 = uVar1 ^ uVar1 >> 0x11;
    uVar1 = uVar1 ^ uVar1 << 5;
    puVar8[4] = uVar1;
    puVar4 = (undefined1 *)(uVar1 + (short)(uVar1 / 1000000) * -1000000 + uStack_28);
    if (&DAT_3b9aca00 <= puVar4) {
      bVar9 = 0xfffffffe < local_30;
      local_30 = local_30 + 1;
      uVar1 = uStack_2c + bVar9;
      if ((int)((uStack_2c ^ uVar1) & ~uStack_2c) < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("overflow when adding duration to instant",0x28,&DAT_01d281d4);
      }
      puVar4 = puVar4 + -1000000000;
      uStack_2c = uVar1;
    }
    *puVar8 = local_30;
    puVar8[1] = uStack_2c;
    puVar8[2] = (uint)puVar4;
  }
  piVar6[3] = 0;
  DataMemoryBarrier(0xb);
  *piVar6 = 0;
  DataMemoryBarrier(0xb);
  do {
    uVar1 = *puVar5;
    bVar9 = (bool)hasExclusiveAccess(puVar5);
  } while (!bVar9);
  *puVar5 = uVar1 - 1;
  if ((3 < uVar1) && ((uVar1 & 2) == 0)) {
    FUN_01652d70(puVar5);
  }
  uStack_24 = (int)register0x00000054 + -0xc;
  software_interrupt(0);
  FUN_01be3b5a(piVar6,0x81,1,in_stack_00000000);
  return;
}

