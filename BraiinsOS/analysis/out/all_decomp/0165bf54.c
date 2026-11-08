// FUN_0165bf54 @ 0165bf54 size=1892 calls_out=8 calls_in=3
// strings: mark_pending called when the timer entry is in an invalid state

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0165bf54(char *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  code *pcVar1;
  bool bVar2;
  uint *puVar3;
  int *piVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  uint **ppuVar10;
  uint uVar11;
  undefined *puVar12;
  int iVar13;
  byte bVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  undefined4 *puVar19;
  uint uVar20;
  uint *puVar21;
  uint *puVar22;
  uint *puVar23;
  undefined4 local_188;
  uint local_168;
  int local_15c [66];
  uint local_54;
  uint *local_50;
  code *pcStack_4c;
  int *local_48;
  code *local_44;
  uint local_40 [2];
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  local_15c[0x40] = 0;
  if (*param_1 == '\0') {
    bVar2 = (bool)hasExclusiveAccess(param_1);
    if (bVar2) {
      *param_1 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_0165bf9c;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_01280da8(param_1);
LAB_0165bf9c:
  FUN_0128236c(param_1);
  puVar3 = (uint *)(param_1 + 0x10);
  uVar8 = *(uint *)(param_1 + 0x14);
  uVar16 = *puVar3;
  if (uVar8 <= param_4 && (uint)(param_3 <= *puVar3) <= uVar8 - param_4) {
    uVar16 = param_3;
    uVar8 = param_4;
  }
  pcVar6 = param_1 + 0x18;
  local_168 = 0xfffffffe;
  do {
    while (piVar4 = *(int **)(param_1 + 0x1c), piVar4 != (int *)0x0) {
      iVar18 = *piVar4;
      *(int *)(param_1 + 0x1c) = iVar18;
      if (iVar18 == 0) {
LAB_0165c360:
        pcVar6[0] = '\0';
        pcVar6[1] = '\0';
        pcVar6[2] = '\0';
        pcVar6[3] = '\0';
      }
      else {
LAB_0165c344:
        *(undefined4 *)(iVar18 + 4) = 0;
      }
      *piVar4 = 0;
      piVar9 = piVar4 + 4;
      piVar4[1] = 0;
      ClearExclusiveLocal();
      if (*piVar9 != -1 || piVar4[5] != -1) {
        *(undefined1 *)(piVar4 + 9) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(piVar9);
        } while (!bVar2);
        *piVar9 = -1;
        piVar4[5] = -1;
        puVar22 = (uint *)(piVar4 + 8);
        DataMemoryBarrier(0xb);
        do {
          uVar15 = *puVar22;
          bVar2 = (bool)hasExclusiveAccess(puVar22);
        } while (!bVar2);
        *puVar22 = uVar15 | 2;
        DataMemoryBarrier(0xb);
        if (uVar15 == 0) {
          iVar18 = piVar4[6];
          iVar13 = piVar4[7];
          piVar4[6] = 0;
          DataMemoryBarrier(0xb);
          do {
            bVar2 = (bool)hasExclusiveAccess(puVar22);
          } while (!bVar2);
          *puVar22 = 0;
          if (iVar18 != 0) {
            if (0x1f < (uint)local_15c[0x40]) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(local_15c[0x40],0x20,&DAT_018ad394);
            }
            local_15c[local_15c[0x40] * 2] = iVar18;
            local_15c[local_15c[0x40] * 2 + 1] = iVar13;
            local_15c[0x40] = local_15c[0x40] + 1;
            if (0x1f < (uint)local_15c[0x40]) {
              FUN_01282570(param_1);
              if (*param_1 == '\x01') {
                DataMemoryBarrier(0xb);
                do {
                  bVar2 = (bool)hasExclusiveAccess(param_1);
                  if (bVar2) {
                    *param_1 = '\0';
                    goto LAB_0165c478;
                  }
                } while (*param_1 == '\x01');
              }
              ClearExclusiveLocal();
              FUN_01280a5c();
LAB_0165c478:
              iVar18 = local_15c[0x40];
              piVar4 = local_15c;
              local_15c[0x40] = 0;
              for (iVar18 = iVar18 << 3; iVar18 != 0; iVar18 = iVar18 + -8) {
                iVar13 = *piVar4;
                piVar9 = piVar4 + 1;
                piVar4 = piVar4 + 2;
                (**(code **)(iVar13 + 4))(*piVar9);
              }
              if (*param_1 == '\0') {
                bVar2 = (bool)hasExclusiveAccess(param_1);
                if (!bVar2) goto LAB_0165c4d8;
                *param_1 = '\x01';
                DataMemoryBarrier(0xb);
              }
              else {
                ClearExclusiveLocal();
LAB_0165c4d8:
                FUN_01280da8(param_1);
              }
              FUN_0128236c(param_1);
            }
          }
        }
      }
    }
    FUN_0163e4a8(local_40,puVar3);
    if ((local_40[0] & 1) == 0) {
LAB_0165c2f8:
      uVar15 = *(uint *)(param_1 + 0x14);
      local_15c[0x41] = uVar16;
      local_54 = uVar8;
      if (uVar8 <= uVar15 && (uint)(*puVar3 <= uVar16) <= uVar8 - uVar15) {
LAB_0165c638:
        ppuVar10 = &local_50;
        local_48 = local_15c + 0x41;
        puVar12 = &DAT_018ac7fc;
        pcVar6 = &DAT_0058add5;
        pcStack_4c = FUN_00787b88;
        local_44 = FUN_00787b88;
        local_50 = puVar3;
LAB_0165c50c:
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(pcVar6,ppuVar10,puVar12);
      }
      if (uVar15 <= uVar8 && (uint)(uVar16 <= *puVar3) <= uVar15 - uVar8) {
        *puVar3 = uVar16;
        *(uint *)(param_1 + 0x14) = uVar8;
      }
      piVar4 = *(int **)(param_1 + 0x1c);
      if (piVar4 != (int *)0x0) {
        iVar18 = *piVar4;
        *(int *)(param_1 + 0x1c) = iVar18;
        if (iVar18 != 0) goto LAB_0165c344;
        goto LAB_0165c360;
      }
      FUN_0163e4a8(local_40,puVar3);
      uVar8 = 1;
      if (1 < local_38) {
        uVar8 = local_38;
      }
      if (local_34 != 0) {
        uVar8 = local_38;
      }
      if ((local_40[0] & 1) == 0) {
        uVar8 = 0;
        local_34 = 0;
      }
      *(uint *)(param_1 + 8) = uVar8;
      *(uint *)(param_1 + 0xc) = local_34;
      FUN_01282570(param_1);
      if (*param_1 != '\x01') goto LAB_0165c5b0;
      DataMemoryBarrier(0xb);
      goto LAB_0165c598;
    }
    if (!(local_34 < uVar8 || uVar8 - local_34 < (uint)(local_38 <= uVar16))) goto LAB_0165c2f8;
    local_188 = 6;
    if (5 < local_30) {
      puVar12 = &DAT_018ac80c;
      local_2c = local_30;
LAB_0165c678:
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(local_2c,local_188,puVar12);
    }
    uVar17 = local_2c & 0x3f;
    uVar11 = uVar17 - 0x20;
    iVar18 = *(int *)(param_1 + 0x20) + local_30 * 0x210;
    uVar15 = 1 << uVar17;
    if (-1 < (int)uVar11) {
      uVar15 = 0;
    }
    uVar17 = 1 >> (0x20 - uVar17 & 0xff);
    if (-1 < (int)uVar11) {
      uVar17 = 1 << (uVar11 & 0xff);
    }
    *(uint *)(iVar18 + 0x200) = *(uint *)(iVar18 + 0x200) & ~uVar15;
    *(uint *)(iVar18 + 0x204) = *(uint *)(iVar18 + 0x204) & ~uVar17;
    if (0x3f < local_2c) {
      local_188 = 0x40;
      puVar12 = &DAT_018ac81c;
      goto LAB_0165c678;
    }
    puVar19 = (undefined4 *)(iVar18 + local_2c * 8);
    *puVar19 = 0;
    puVar22 = (uint *)puVar19[1];
    puVar19[1] = 0;
LAB_0165c0ac:
    while (puVar23 = puVar22, puVar23 != (uint *)0x0) {
      puVar22 = (uint *)*puVar23;
      if (puVar22 != (uint *)0x0) {
        puVar22[1] = 0;
      }
      puVar21 = puVar23 + 4;
      *puVar23 = 0;
      puVar23[1] = 0;
      ClearExclusiveLocal();
      uVar15 = *puVar21;
      uVar11 = puVar23[5];
      while( true ) {
        if (uVar11 + 1 < (uint)(0xfffffffd < uVar15)) {
          ppuVar10 = (uint **)0x7f;
          puVar12 = &DAT_018acf0c;
          pcVar6 = "mark_pending called when the timer entry is in an invalid state";
          goto LAB_0165c50c;
        }
        if (local_34 <= uVar11 && (uint)(uVar15 <= local_38) <= local_34 - uVar11) break;
        uVar17 = *puVar21;
        uVar20 = puVar23[5];
        if (uVar17 == uVar15 && uVar20 == uVar11) {
          DataMemoryBarrier(0xb);
          bVar2 = (bool)hasExclusiveAccess(puVar21);
          if (bVar2) {
            *puVar21 = 0xfffffffe;
            puVar23[5] = 0xffffffff;
          }
          bVar14 = 0;
          if (bVar2) {
            bVar14 = 0xff;
          }
        }
        else {
          bVar14 = 0;
          ClearExclusiveLocal();
        }
        DataMemoryBarrier(0xb);
        uVar15 = uVar17;
        uVar11 = uVar20;
        if ((bool)(bVar14 & 1)) goto LAB_0165c260;
      }
      puVar21 = puVar23 + 2;
      do {
        bVar2 = (bool)hasExclusiveAccess(puVar21);
      } while (!bVar2);
      *puVar21 = uVar15;
      puVar23[3] = uVar11;
      uVar15 = uVar15 ^ local_38 | 0x3f;
      uVar11 = uVar11 ^ local_34;
      if (0xf < uVar11 || uVar11 - 0xf < (uint)(0xfffffffd < uVar15)) {
        uVar11 = 0xf;
        uVar15 = local_168;
      }
      uVar15 = LZCOUNT(uVar15) | 0x20;
      if (uVar11 != 0) {
        uVar15 = LZCOUNT(uVar11);
      }
      uVar11 = (uint)((short)(uVar15 ^ 0x3e) * 0x2b) >> 8;
      if (0x23 < (uVar15 ^ 0x3e)) {
        puVar12 = &DAT_018ac82c;
        local_2c = uVar11;
        goto LAB_0165c678;
      }
      ClearExclusiveLocal();
      iVar18 = *(int *)(param_1 + 0x20) + (uVar11 | uVar11 << 5) * 0x10;
      uVar11 = *(int *)(iVar18 + 0x208) * 6 & 0x3e;
      uVar15 = *puVar21 >> uVar11 | puVar23[3] << (0x20 - uVar11 & 0xff);
      if (-1 < (int)(uVar11 - 0x20)) {
        uVar15 = puVar23[3] >> (uVar11 - 0x20 & 0xff);
      }
      uVar15 = uVar15 & 0x3f;
      pcVar5 = (char *)(iVar18 + uVar15 * 8);
      puVar21 = *(uint **)pcVar5;
      if (puVar21 == puVar23) goto LAB_0165c520;
      *puVar23 = 0;
      puVar23[1] = (uint)puVar21;
      if (puVar21 != (uint *)0x0) {
        *puVar21 = (uint)puVar23;
      }
      *(uint **)pcVar5 = puVar23;
      uVar11 = 1 << uVar15;
      if (*(int *)(pcVar5 + 4) == 0) {
        *(uint **)(pcVar5 + 4) = puVar23;
      }
      uVar17 = uVar15 - 0x20;
      if (-1 < (int)uVar17) {
        uVar11 = 0;
      }
      uVar15 = 1 >> (0x20 - uVar15 & 0xff);
      if (-1 < (int)uVar17) {
        uVar15 = 1 << (uVar17 & 0xff);
      }
      *(uint *)(iVar18 + 0x200) = uVar11 | *(uint *)(iVar18 + 0x200);
      *(uint *)(iVar18 + 0x204) = uVar15 | *(uint *)(iVar18 + 0x204);
      local_50 = puVar23;
    }
    uVar15 = *(uint *)(param_1 + 0x14);
    local_15c[0x41] = local_38;
    local_54 = local_34;
    if (local_34 <= uVar15 && (uint)(*puVar3 <= local_38) <= local_34 - uVar15) goto LAB_0165c638;
    if (uVar15 <= local_34 && (uint)(local_38 <= *puVar3) <= uVar15 - local_34) {
      *puVar3 = local_38;
      *(uint *)(param_1 + 0x14) = local_34;
    }
  } while( true );
LAB_0165c260:
  do {
    bVar2 = (bool)hasExclusiveAccess(puVar23 + 2);
  } while (!bVar2);
  puVar23[2] = 0xffffffff;
  puVar23[3] = 0xffffffff;
  puVar21 = *(uint **)pcVar6;
  if (puVar21 == puVar23) {
    pcVar5 = pcVar6;
LAB_0165c520:
    local_50 = puVar23;
    FUN_01658470(pcVar5,&local_50);
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x165c6bc);
    (*pcVar1)();
  }
  *puVar23 = 0;
  puVar23[1] = (uint)puVar21;
  if (puVar21 != (uint *)0x0) {
    *puVar21 = (uint)puVar23;
  }
  *(uint **)(param_1 + 0x18) = puVar23;
  if (*(int *)(param_1 + 0x1c) == 0) {
    *(uint **)(param_1 + 0x1c) = puVar23;
  }
  local_50 = puVar23;
  goto LAB_0165c0ac;
  while (*param_1 == '\x01') {
LAB_0165c598:
    bVar2 = (bool)hasExclusiveAccess(param_1);
    if (bVar2) {
      *param_1 = '\0';
      goto LAB_0165c5bc;
    }
  }
LAB_0165c5b0:
  ClearExclusiveLocal();
  FUN_01280a5c(param_1);
LAB_0165c5bc:
  iVar18 = local_15c[0x40];
  piVar4 = local_15c;
  local_15c[0x40] = 0;
  for (iVar13 = 0; iVar18 * 8 != iVar13; iVar13 = iVar13 + 8) {
    iVar7 = *piVar4;
    piVar9 = piVar4 + 1;
    piVar4 = piVar4 + 2;
    (**(code **)(iVar7 + 4))(*piVar9);
  }
  piVar4 = local_15c + 1;
  for (iVar18 = local_15c[0x40]; iVar18 != 0; iVar18 = iVar18 + -1) {
    piVar9 = piVar4 + -1;
    iVar13 = *piVar4;
    piVar4 = piVar4 + 2;
    (**(code **)(*piVar9 + 0xc))(iVar13);
  }
  return;
}

