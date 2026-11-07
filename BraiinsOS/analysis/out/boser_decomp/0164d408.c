// FUN_0164d408 @ 0164d408 size=1160 calls_out=10 calls_in=3
// strings: overflow when adding duration to instant

void FUN_0164d408(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  uint local_110;
  uint local_108;
  uint local_104;
  uint *local_100 [23];
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90 [23];
  uint local_34;
  uint local_30;
  uint local_2c;
  
LAB_0164d42c:
  DataMemoryBarrier(0xb);
  piVar9 = DAT_01d519e4;
  if (DAT_01d519e4 == (int *)0x0) {
    piVar9 = (int *)FUN_016518b8();
  }
  uVar1 = (uint)((int)param_1 * -0x61c88647) >> (-piVar9[2] & 0x1fU);
  if ((uint)piVar9[1] <= (uint)((int)param_1 * -0x61c88647) >> (-piVar9[2] & 0x1fU)) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar1,piVar9[1],&DAT_01d068e8);
  }
  puVar13 = (uint *)(*piVar9 + uVar1 * 0x40);
  puVar7 = puVar13 + 6;
  if (*puVar7 == 0) {
    bVar17 = (bool)hasExclusiveAccess(puVar7);
    if (!bVar17) goto LAB_0164d4c8;
    *puVar7 = 1;
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0164d4c8:
    FUN_01652ed8(puVar7);
  }
  if (DAT_01d519e4 != piVar9) {
    DataMemoryBarrier(0xb);
    do {
      uVar1 = *puVar7;
      bVar17 = (bool)hasExclusiveAccess(puVar7);
    } while (!bVar17);
    *puVar7 = uVar1 - 1;
    if ((3 < uVar1) && ((uVar1 & 2) == 0)) {
      FUN_01652d70(puVar7);
    }
    goto LAB_0164d42c;
  }
  uVar1 = puVar13[7];
  local_108 = 0;
  local_a4 = 0;
  if (uVar1 == 0) {
    uVar15 = 0;
    uVar1 = 0;
    local_110 = 0;
  }
  else {
    puVar2 = (uint *)((uint)&local_108 | 4);
    uVar15 = 0;
    uVar16 = 0;
    local_110 = 0;
    puVar8 = puVar13 + 7;
    do {
      puVar3 = (uint *)(uVar1 + 8);
      uVar14 = *puVar3;
      if (*(uint **)(uVar1 + 4) == param_1) {
        if ((uVar15 & 8) != 0) {
          local_110 = 1;
          break;
        }
        uVar10 = *(uint *)(uVar1 + 0x10);
        if ((uVar15 & 4) != 0 && (uVar10 & 0xc) != 0) {
          local_110 = 1;
          goto LAB_0164d588;
        }
        *puVar8 = uVar14;
        if (puVar13[8] == uVar1) {
          puVar13[8] = uVar16;
        }
        if (local_a4 < 9) {
          uVar6 = 8;
          uVar11 = local_a4;
          puVar3 = puVar2;
          puVar4 = &local_a4;
        }
        else {
          uVar11 = local_104;
          puVar3 = local_100[0];
          puVar4 = puVar2;
          uVar6 = local_a4;
        }
        if (uVar11 == uVar6) {
          FUN_0164ff80(&local_108);
          uVar11 = local_104;
          puVar3 = local_100[0];
          puVar4 = puVar2;
        }
        uVar15 = uVar10 + uVar15;
        puVar3[uVar11 * 3] = uVar1;
        (puVar3 + uVar11 * 3)[1] = 0;
        *puVar4 = *puVar4 + 1;
        puVar3 = puVar8;
      }
      else {
LAB_0164d588:
        uVar16 = uVar1;
      }
      puVar8 = puVar3;
      uVar1 = uVar14;
    } while (uVar14 != 0);
    if (local_a4 < 9) {
      uVar1 = local_a4;
    }
    else {
      uVar1 = local_104;
    }
  }
  uVar16 = local_a4;
  uVar14 = 0;
  if (uVar1 != 0) {
    FUN_019ac130(&local_98,1);
    uVar10 = *puVar13;
    uVar11 = puVar13[1];
    uVar14 = 0;
    bVar17 = (int)(uVar11 - (local_94 + (uVar10 < local_98))) < 0 !=
             (SBORROW4(uVar11,local_94) != SBORROW4(uVar11 - local_94,(uint)(uVar10 < local_98)));
    if (local_98 == uVar10 && local_94 == uVar11) {
      bVar17 = puVar13[2] < local_90[0];
    }
    if (bVar17) {
      uVar14 = puVar13[4] ^ puVar13[4] << 0xd;
      uVar14 = uVar14 ^ uVar14 >> 0x11;
      uVar14 = uVar14 ^ uVar14 << 5;
      puVar13[4] = uVar14;
      puVar5 = (undefined1 *)(uVar14 + (short)(uVar14 / 1000000) * -1000000 + local_90[0]);
      if (&DAT_3b9aca00 <= puVar5) {
        bVar17 = 0xfffffffe < local_98;
        local_98 = local_98 + 1;
        uVar14 = local_94 + bVar17;
        if ((int)((local_94 ^ uVar14) & ~local_94) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("overflow when adding duration to instant",0x28,&DAT_01d281d4);
        }
        puVar5 = puVar5 + -1000000000;
        local_94 = uVar14;
      }
      uVar14 = 1;
      *puVar13 = local_98;
      puVar13[1] = local_94;
      puVar13[2] = (uint)puVar5;
    }
  }
  DataMemoryBarrier(0xb);
  uVar14 = uVar1 != 0 & uVar14;
  if (uVar14 != 0) {
    local_110 = local_110 | uVar15;
  }
  *param_1 = local_110;
  if (uVar16 < 9) {
    local_100[0] = (uint *)((uint)&local_108 | 4);
  }
  else {
    uVar16 = local_104;
  }
  if (uVar16 != 0) {
    puVar13 = local_100[0] + uVar16 * 3;
    do {
      *(uint *)(*local_100[0] + 0xc) = uVar14;
      puVar12 = (undefined4 *)*local_100[0];
      DataMemoryBarrier(0xb);
      *puVar12 = 0;
      local_100[0][1] = 1;
      local_100[0][2] = (uint)puVar12;
      local_100[0] = local_100[0] + 3;
    } while (local_100[0] != puVar13);
  }
  DataMemoryBarrier(0xb);
  do {
    uVar1 = *puVar7;
    bVar17 = (bool)hasExclusiveAccess(puVar7);
  } while (!bVar17);
  *puVar7 = uVar1 - 1;
  if ((3 < uVar1) && ((uVar1 & 2) == 0)) {
    FUN_01652d70(puVar7);
  }
  uVar1 = 0;
  puVar7 = &local_9c;
  if (local_a4 < 9) {
    puVar7 = &local_a0;
  }
  local_a0 = local_a4;
  local_9c = local_104;
  uVar15 = local_a4;
  if (8 < local_a4) {
    uVar15 = local_104;
  }
  *puVar7 = 0;
  local_98 = local_108;
  local_94 = local_9c;
  FUN_01bed4e2(local_90,local_100,0x5c);
  local_30 = 0;
  local_34 = local_a0;
  local_2c = uVar15;
  if (uVar15 != 0) {
    if (local_a0 < 9) {
      local_90[0] = (uint)&local_98 | 4;
    }
    piVar9 = (int *)(local_90[0] + 4);
    do {
      uVar1 = uVar1 + 1;
      local_30 = uVar1;
      if (*piVar9 == 2) break;
      FUN_01be6c3c(0xf0,piVar9[1],0x81,1);
      piVar9 = piVar9 + 3;
    } while (uVar15 != uVar1);
  }
  FUN_0164cc64(&local_98);
  return;
}

