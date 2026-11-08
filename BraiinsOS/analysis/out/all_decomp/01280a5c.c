// FUN_01280a5c @ 01280a5c size=828 calls_out=6 calls_in=167
// strings: 

void FUN_01280a5c(undefined1 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint *puVar7;
  undefined1 *puVar8;
  uint *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint *puVar12;
  bool bVar13;
  bool bVar14;
  undefined4 in_stack_00000000;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  
LAB_01280a80:
  DataMemoryBarrier(0xb);
  piVar3 = DAT_018dd950;
  if (DAT_018dd950 == (int *)0x0) {
    piVar3 = (int *)FUN_01283a38();
  }
  uVar2 = (uint)((int)param_1 * -0x61c88647) >> (-piVar3[2] & 0x1fU);
  if ((uint)piVar3[1] <= (uint)((int)param_1 * -0x61c88647) >> (-piVar3[2] & 0x1fU)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar2,piVar3[1],&DAT_0188b980);
  }
  puVar12 = (uint *)(*piVar3 + uVar2 * 0x40);
  puVar9 = puVar12 + 6;
  if (*puVar9 == 0) {
    bVar13 = (bool)hasExclusiveAccess(puVar9);
    if (!bVar13) goto LAB_01280b18;
    *puVar9 = 1;
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_01280b18:
    FUN_01286a10(puVar9);
  }
  if (DAT_018dd950 != piVar3) {
    DataMemoryBarrier(0xb);
    do {
      uVar2 = *puVar9;
      bVar13 = (bool)hasExclusiveAccess(puVar9);
    } while (!bVar13);
    *puVar9 = uVar2 - 1;
    if ((3 < uVar2) && ((uVar2 & 2) == 0)) {
      FUN_01286894(puVar9);
    }
    goto LAB_01280a80;
  }
  puVar7 = puVar12 + 7;
  puVar11 = (undefined4 *)*puVar7;
  if (puVar11 == (undefined4 *)0x0) {
LAB_01280bb8:
    DataMemoryBarrier(0xb);
    *param_1 = 0;
    DataMemoryBarrier(0xb);
    do {
      uVar2 = *puVar9;
      bVar13 = (bool)hasExclusiveAccess(puVar9);
    } while (!bVar13);
    *puVar9 = uVar2 - 1;
    if ((uVar2 < 4) || ((uVar2 & 2) != 0)) {
      return;
    }
    FUN_01286894(puVar9);
    return;
  }
  puVar4 = (undefined4 *)0x0;
  if ((undefined1 *)puVar11[1] != param_1) {
    do {
      puVar4 = puVar11;
      puVar11 = (undefined4 *)puVar4[2];
      if (puVar11 == (undefined4 *)0x0) goto LAB_01280bb8;
    } while ((undefined1 *)puVar11[1] != param_1);
    puVar7 = puVar4 + 2;
  }
  uVar2 = puVar11[2];
  *puVar7 = uVar2;
  if ((undefined4 *)puVar12[8] == puVar11) {
    puVar12[8] = (uint)puVar4;
    bVar13 = false;
  }
  else {
    bVar13 = false;
    for (; uVar2 != 0; uVar2 = *(uint *)(uVar2 + 8)) {
      if (*(undefined1 **)(uVar2 + 4) == param_1) {
        bVar13 = true;
        break;
      }
    }
  }
  FUN_015f3b0c(&local_38,1);
  uVar10 = *puVar12;
  uVar2 = puVar12[1];
  bVar14 = (int)(uVar2 - (uStack_34 + (uVar10 < local_38))) < 0 !=
           (SBORROW4(uVar2,uStack_34) != SBORROW4(uVar2 - uStack_34,(uint)(uVar10 < local_38)));
  if (local_38 == uVar10 && uStack_34 == uVar2) {
    bVar14 = puVar12[2] < uStack_30;
  }
  if (bVar14) {
    uVar2 = puVar12[4] ^ puVar12[4] << 0xd;
    uVar2 = uVar2 ^ uVar2 >> 0x11;
    uVar2 = uVar2 ^ uVar2 << 5;
    puVar12[4] = uVar2;
    puVar8 = (undefined1 *)(uVar2 + (short)(uVar2 / 1000000) * -1000000 + uStack_30);
    if (&DAT_3b9aca00 <= puVar8) {
      bVar14 = 0xfffffffe < local_38;
      local_38 = local_38 + 1;
      uVar2 = uStack_34 + bVar14;
      if ((int)((uStack_34 ^ uVar2) & ~uStack_34) < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
      }
      puVar8 = puVar8 + -1000000000;
      uStack_34 = uVar2;
    }
    uVar5 = 1;
    *puVar12 = local_38;
    puVar12[1] = uStack_34;
    puVar12[2] = (uint)puVar8;
    uVar6 = uVar5;
    uVar1 = 1;
    if (bVar13) goto LAB_01280d18;
  }
  else {
    DataMemoryBarrier(0xb);
    uVar5 = 0;
    if (bVar13) {
      uVar5 = 2;
    }
    uVar1 = 0;
  }
  uVar6 = uVar1;
  *param_1 = (char)uVar5;
LAB_01280d18:
  puVar11[3] = uVar6;
  DataMemoryBarrier(0xb);
  *puVar11 = 0;
  DataMemoryBarrier(0xb);
  do {
    uVar2 = *puVar9;
    bVar13 = (bool)hasExclusiveAccess(puVar9);
  } while (!bVar13);
  *puVar9 = uVar2 - 1;
  if ((3 < uVar2) && ((uVar2 & 2) == 0)) {
    FUN_01286894(puVar9);
  }
  software_interrupt(0);
  FUN_016d3496(puVar11,0x81,1,in_stack_00000000);
  return;
}

