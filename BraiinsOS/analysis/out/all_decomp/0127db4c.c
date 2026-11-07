// FUN_0127db4c @ 0127db4c size=1252 calls_out=10 calls_in=51
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0127db4c(uint *param_1)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int extraout_r3;
  int extraout_r3_00;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  undefined4 *puVar17;
  uint *puVar18;
  bool bVar19;
  uint local_108;
  undefined4 local_100;
  uint local_fc;
  uint *local_f8 [23];
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90 [24];
  uint local_30;
  uint local_2c;
  
LAB_0127db70:
  DataMemoryBarrier(0xb);
  piVar2 = DAT_018dd950;
  if (DAT_018dd950 == (int *)0x0) {
    piVar2 = (int *)FUN_01283a38();
  }
  uVar1 = (uint)((int)param_1 * -0x61c88647) >> (-piVar2[2] & 0x1fU);
  if ((uint)piVar2[1] <= (uint)((int)param_1 * -0x61c88647) >> (-piVar2[2] & 0x1fU)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar1,piVar2[1],&DAT_0188b980);
  }
  puVar18 = (uint *)(*piVar2 + uVar1 * 0x40);
  puVar15 = puVar18 + 6;
  if (*puVar15 == 0) {
    bVar19 = (bool)hasExclusiveAccess(puVar15);
    if (!bVar19) goto LAB_0127dc08;
    *puVar15 = 1;
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0127dc08:
    FUN_01286a10(puVar15);
  }
  if (DAT_018dd950 != piVar2) {
    DataMemoryBarrier(0xb);
    do {
      uVar1 = *puVar15;
      bVar19 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar19);
    *puVar15 = uVar1 - 1;
    if ((3 < uVar1) && ((uVar1 & 2) == 0)) {
      FUN_01286894(puVar15);
    }
    goto LAB_0127db70;
  }
  uVar1 = puVar18[7];
  uVar6 = 0;
  puVar3 = (uint *)((uint)&local_100 | 4);
  local_100 = 0;
  local_9c = 0;
  if (uVar1 == 0) {
    uVar1 = 0;
    uVar14 = 0;
    uVar9 = 0;
    local_108 = 0;
  }
  else {
    uVar14 = 0;
    local_108 = 0;
    puVar13 = puVar18 + 7;
    uVar6 = 0;
    do {
      while( true ) {
        uVar9 = uVar1;
        uVar1 = *(uint *)(uVar9 + 8);
        if (*(uint **)(uVar9 + 4) == param_1) break;
LAB_0127dc7c:
        puVar13 = (uint *)(uVar9 + 8);
        uVar6 = uVar9;
        if (uVar1 == 0) goto LAB_0127dd74;
      }
      if ((uVar14 & 8) != 0) {
        local_108 = 1;
        break;
      }
      uVar16 = *(uint *)(uVar9 + 0x10);
      if ((uVar14 & 4) != 0 && (uVar16 & 0xc) != 0) {
        local_108 = 1;
        goto LAB_0127dc7c;
      }
      *puVar13 = uVar1;
      if (puVar18[8] == uVar9) {
        puVar18[8] = uVar6;
      }
      if (local_9c < 9) {
        uVar11 = 8;
        uVar4 = local_9c;
        puVar5 = puVar3;
        puVar7 = &local_9c;
      }
      else {
        uVar4 = local_fc;
        puVar5 = local_f8[0];
        puVar7 = puVar3;
        uVar11 = local_9c;
      }
      if (uVar4 == uVar11) {
        FUN_012807e4(&local_100);
        uVar4 = local_fc;
        puVar5 = local_f8[0];
        puVar7 = puVar3;
      }
      uVar14 = uVar16 + uVar14;
      puVar5[uVar4 * 3] = uVar9;
      (puVar5 + uVar4 * 3)[1] = 0;
      *puVar7 = *puVar7 + 1;
    } while (uVar1 != 0);
LAB_0127dd74:
    uVar1 = local_9c;
    uVar6 = 0;
    if (local_9c < 9) {
      uVar9 = local_9c;
    }
    else {
      uVar9 = local_fc;
    }
    if (uVar9 != 0) {
      FUN_015f3b0c(&local_98,1);
      uVar6 = *puVar18;
      uVar16 = puVar18[1];
      bVar19 = (int)(uVar16 - (local_94 + (uVar6 < local_98))) < 0 !=
               (SBORROW4(uVar16,local_94) != SBORROW4(uVar16 - local_94,(uint)(uVar6 < local_98)));
      if (local_98 == uVar6 && local_94 == uVar16) {
        bVar19 = puVar18[2] < local_90[0];
      }
      uVar6 = 0;
      if (bVar19) {
        uVar6 = puVar18[4] ^ puVar18[4] << 0xd;
        uVar6 = uVar6 ^ uVar6 >> 0x11;
        uVar6 = uVar6 ^ uVar6 << 5;
        puVar18[4] = uVar6;
        puVar8 = (undefined1 *)(uVar6 + (short)(uVar6 / 1000000) * -1000000 + local_90[0]);
        if (&DAT_3b9aca00 <= puVar8) {
          bVar19 = 0xfffffffe < local_98;
          local_98 = local_98 + 1;
          uVar6 = local_94 + bVar19;
          if ((int)((local_94 ^ uVar6) & ~local_94) < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
          }
          puVar8 = puVar8 + -1000000000;
          local_94 = uVar6;
        }
        puVar18[2] = (uint)puVar8;
        uVar6 = 1;
        *puVar18 = local_98;
        puVar18[1] = local_94;
      }
    }
  }
  DataMemoryBarrier(0xb);
  uVar6 = uVar9 != 0 & uVar6;
  if (uVar6 != 0) {
    local_108 = local_108 | uVar14;
  }
  *param_1 = local_108;
  uVar9 = local_9c;
  if (8 < uVar1) {
    uVar9 = *puVar3;
    puVar3 = local_f8[0];
  }
  if (uVar9 != 0) {
    puVar18 = puVar3 + uVar9 * 3;
    do {
      *(uint *)(*puVar3 + 0xc) = uVar6;
      puVar17 = (undefined4 *)*puVar3;
      DataMemoryBarrier(0xb);
      *puVar17 = 0;
      puVar3[1] = 1;
      puVar3[2] = (uint)puVar17;
      puVar3 = puVar3 + 3;
    } while (puVar3 != puVar18);
  }
  DataMemoryBarrier(0xb);
  do {
    uVar1 = *puVar15;
    bVar19 = (bool)hasExclusiveAccess(puVar15);
  } while (!bVar19);
  *puVar15 = uVar1 - 1;
  if ((3 < uVar1) && ((uVar1 & 2) == 0)) {
    FUN_01286894(puVar15);
  }
  uVar1 = local_9c;
  FUN_016dd1aa(local_90,local_f8,0x5c);
  uVar6 = local_fc;
  if (uVar1 < 9) {
    uVar6 = uVar1;
  }
  local_2c = uVar6;
  if (uVar6 == 0) {
    iVar12 = extraout_r3;
    if (uVar1 < 9) goto LAB_0127dfe0;
  }
  else {
    if (uVar1 < 9) {
      uVar1 = 0;
      puVar15 = local_90 + 1;
      do {
        uVar1 = uVar1 + 1;
        local_30 = uVar1;
        FUN_016d6968(0xf0,*puVar15,0x81,1);
        iVar12 = extraout_r3_00;
        puVar15 = puVar15 + 3;
      } while (uVar6 != uVar1);
LAB_0127dfe0:
      local_30 = uVar6 + 1;
      iVar10 = 0;
      do {
        bVar19 = iVar10 != 0;
        if (bVar19) {
          local_30 = local_30 + 1;
          iVar12 = *(int *)((int)local_90 + iVar10 + uVar6 * 0xc);
          iVar10 = iVar10 + 0xc;
        }
      } while (bVar19 && iVar12 != 2);
      return;
    }
    uVar1 = local_90[0];
    do {
      FUN_016d6968(0xf0,*(undefined4 *)(uVar1 + 8),0x81,1);
      uVar1 = uVar1 + 0xc;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  thunk_FUN_016d3fb4(local_90[0]);
  return;
}

