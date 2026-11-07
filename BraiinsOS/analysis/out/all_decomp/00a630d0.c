// FUN_00a630d0 @ 00a630d0 size=2256 calls_out=16 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * FUN_00a630d0(int param_1,undefined4 *param_2,int *param_3)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  longlong lVar4;
  int *piVar5;
  undefined1 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint uVar15;
  int *piVar16;
  byte *pbVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  int iVar21;
  int *piVar22;
  int *piVar23;
  uint uVar24;
  uint *puVar25;
  int local_128;
  int *local_11c;
  int *local_c8;
  int *local_c4;
  int *local_c0;
  int *local_bc;
  undefined4 local_b8;
  int local_b4;
  int *local_b0;
  int *piStack_ac;
  undefined4 local_a8;
  int iStack_a4;
  int *local_a0;
  int *piStack_9c;
  undefined4 uStack_98;
  int local_94;
  int *local_90;
  int *local_8c;
  undefined4 uStack_88;
  int iStack_84;
  int *piStack_80;
  int *piStack_7c;
  int *local_78;
  int *local_74;
  int *local_70;
  undefined1 local_6c;
  int *local_68;
  int *local_64;
  int *local_60;
  int *piStack_5c;
  undefined4 local_58;
  int iStack_54;
  int *local_50;
  int *piStack_4c;
  undefined4 local_48;
  int iStack_44;
  int *piStack_40;
  int *local_3c;
  undefined4 uStack_38;
  int local_34;
  int *local_30;
  int *piStack_2c;
  
  piVar22 = *(int **)(param_1 + 0xcc);
  if (param_3 != piVar22) {
    piVar16 = (int *)0x0;
    piVar7 = (int *)&DAT_00000001;
    goto LAB_00a6394c;
  }
  puVar19 = (uint *)(param_1 + 8);
  uVar12 = 0xcbf29ce4;
  piVar11 = (int *)0x84222325;
  if (param_3 != (int *)0x0) {
    puVar14 = param_2;
    do {
      iVar10 = puVar14[1];
      if (iVar10 != 0) {
        pbVar17 = (byte *)*puVar14;
        do {
          iVar10 = iVar10 + -1;
          uVar13 = (uint)piVar11 ^ (uint)*pbVar17;
          lVar4 = (ulonglong)uVar13 * 0x1b3;
          piVar11 = (int *)lVar4;
          uVar12 = uVar12 * 0x1b3 + (int)((ulonglong)lVar4 >> 0x20) + uVar13 * 0x100;
          pbVar17 = pbVar17 + 1;
        } while (iVar10 != 0);
      }
      puVar14 = puVar14 + 2;
    } while (puVar14 != param_2 + (int)param_3 * 2);
  }
  uVar13 = *puVar19;
  if ((uVar13 < 0xfffffff0) && ((uVar13 & 8) == 0)) {
    if (*puVar19 != uVar13) {
      ClearExclusiveLocal();
      goto LAB_00a63190;
    }
    bVar3 = (bool)hasExclusiveAccess(puVar19);
    if (!bVar3) goto LAB_00a63190;
    *puVar19 = uVar13 + 0x10;
    DataMemoryBarrier(0xb);
  }
  else {
LAB_00a63190:
    FUN_0127d66c(puVar19);
  }
  puVar14 = (undefined4 *)(param_1 + 0x20);
  FUN_0128236c(puVar19);
  piVar23 = (int *)((uint)puVar19 | 1);
  FUN_0128236c(piVar23);
  if (*(int *)(param_1 + 0x1c) != 0) {
    puVar6 = (undefined1 *)
             FUN_00c5abb0(*puVar14,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
                          *(undefined4 *)(param_1 + 0x2c),piVar11,uVar12);
    uVar13 = (uint)puVar6 >> 0x19;
    iVar10 = *(int *)(param_1 + 0x10);
    local_11c = (int *)0x0;
    while( true ) {
      uVar18 = *(uint *)(param_1 + 0x14) & (uint)puVar6;
      uVar24 = *(uint *)(iVar10 + uVar18);
      uVar15 = uVar24 ^ uVar13 * 0x1010101;
      uVar15 = ~uVar15 & 0x80808080 & uVar15 + 0xfefefeff;
      while (uVar15 != 0) {
        uVar20 = uVar18 + ((uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                         (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3) &
                 *(uint *)(param_1 + 0x14);
        puVar8 = (undefined4 *)(iVar10 + -0x10 + uVar20 * -0x10);
        uVar15 = uVar15 - 1 & uVar15;
        if (piVar11 == (int *)*puVar8 && uVar12 == puVar8[1]) {
          piVar22 = *(int **)(iVar10 + uVar20 * -0x10 + -8);
          do {
            iVar10 = *piVar22;
            bVar3 = (bool)hasExclusiveAccess(piVar22);
          } while (!bVar3);
          *piVar22 = iVar10 + 1;
          if (-1 < iVar10) {
            FUN_01282570(puVar19);
            FUN_01282570(piVar23);
            DataMemoryBarrier(0xb);
            do {
              uVar12 = *puVar19;
              bVar3 = (bool)hasExclusiveAccess(puVar19);
            } while (!bVar3);
            *puVar19 = uVar12 - 0x10;
            if ((uVar12 & 0xfffffff2) == 0x12) {
              FUN_0127d34c(puVar19);
              return piVar22;
            }
            return piVar22;
          }
          goto LAB_00a63984;
        }
      }
      if ((uVar24 & 0x80808080 & uVar24 << 1) != 0) break;
      local_11c = local_11c + 1;
      puVar6 = (undefined1 *)(uVar18 + (int)local_11c);
    }
  }
  FUN_01282570(puVar19);
  FUN_01282570(piVar23);
  DataMemoryBarrier(0xb);
  do {
    uVar13 = *puVar19;
    bVar3 = (bool)hasExclusiveAccess(puVar19);
  } while (!bVar3);
  *puVar19 = uVar13 - 0x10;
  if ((uVar13 & 0xfffffff2) == 0x12) {
    FUN_0127d34c(puVar19);
    if (*puVar19 != 0) goto LAB_00a63914;
LAB_00a63380:
    bVar3 = (bool)hasExclusiveAccess(puVar19);
    if (!bVar3) goto LAB_00a63918;
    *puVar19 = 8;
    DataMemoryBarrier(0xb);
  }
  else {
    if (*puVar19 == 0) goto LAB_00a63380;
LAB_00a63914:
    ClearExclusiveLocal();
LAB_00a63918:
    FUN_0127e06c(puVar19);
  }
  FUN_0128236c(puVar19);
  FUN_0128236c(piVar23);
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar15 = FUN_00c5abb0(*puVar14,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
                          *(undefined4 *)(param_1 + 0x2c),piVar11,uVar12);
    iVar10 = *(int *)(param_1 + 0x10);
    local_11c = *(int **)(param_1 + 0x14);
    uVar13 = uVar15 >> 0x19;
    local_128 = 0;
    while( true ) {
      uVar15 = (uint)local_11c & uVar15;
      uVar24 = *(uint *)(iVar10 + uVar15);
      uVar18 = uVar24 ^ uVar13 * 0x1010101;
      uVar18 = ~uVar18 & 0x80808080 & uVar18 + 0xfefefeff;
      while (uVar18 != 0) {
        uVar20 = uVar15 + ((uint)LZCOUNT(uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 |
                                         (uVar18 >> 0x10 & 0xff) << 8 | uVar18 >> 0x18) >> 3) &
                 (uint)local_11c;
        puVar8 = (undefined4 *)(iVar10 + -0x10 + uVar20 * -0x10);
        piVar16 = (int *)(uVar12 ^ puVar8[1]);
        uVar18 = uVar18 - 1 & uVar18;
        if (piVar11 == (int *)*puVar8 && piVar16 == (int *)0x0) {
          piVar22 = *(int **)(iVar10 + uVar20 * -0x10 + -8);
          do {
            iVar10 = *piVar22;
            bVar3 = (bool)hasExclusiveAccess(piVar22);
          } while (!bVar3);
          *piVar22 = iVar10 + 1;
          if (iVar10 < 0) goto LAB_00a63984;
          param_3 = piVar11;
          piVar7 = (int *)&DAT_00000005;
          goto LAB_00a634c8;
        }
      }
      if ((uVar24 & 0x80808080 & uVar24 << 1) != 0) break;
      local_128 = local_128 + 4;
      uVar15 = uVar15 + local_128;
    }
  }
  FUN_012cd8c4(&local_c8,param_1 + 0x30);
  piVar16 = local_c4;
  piVar5 = local_c8;
  if (local_94 == -0x80000000) {
    piVar22 = local_c4;
    if (local_c8 == (int *)&DAT_00000005) {
LAB_00a636dc:
      do {
        iVar10 = *piVar22;
        bVar3 = (bool)hasExclusiveAccess(piVar22);
      } while (!bVar3);
      *piVar22 = iVar10 + 1;
      if (iVar10 < 0) {
LAB_00a63984:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0xa63984);
        (*pcVar1)();
      }
      uVar13 = FUN_00c5abb0(*puVar14,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28)
                            ,*(undefined4 *)(param_1 + 0x2c),piVar11,uVar12);
      if (*(int *)(param_1 + 0x18) == 0) {
        FUN_0074a98c(param_1 + 0x10,puVar14);
      }
      uVar18 = *(uint *)(param_1 + 0x14);
      puVar25 = *(uint **)(param_1 + 0x10);
      bVar3 = false;
      iVar10 = 0;
      uVar15 = uVar13;
      do {
        uVar15 = uVar18 & uVar15;
        uVar20 = *(uint *)((int)puVar25 + uVar15);
        uVar24 = uVar20 ^ (uVar13 >> 0x19) * 0x1010101;
        uVar24 = ~uVar24 & 0x80808080 & uVar24 + 0xfefefeff;
        while (uVar24 != 0) {
          uVar9 = uVar15 + ((uint)LZCOUNT(uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 |
                                          (uVar24 >> 0x10 & 0xff) << 8 | uVar24 >> 0x18) >> 3) &
                  uVar18;
          piVar16 = (int *)((uint)piVar11 ^ puVar25[uVar9 * -4 + -4]);
          uVar24 = uVar24 - 1 & uVar24;
          if (piVar16 == (int *)0x0 && uVar12 == puVar25[uVar9 * -4 + -3]) {
            piVar7 = (int *)puVar25[uVar9 * -4 + -2];
            puVar25[uVar9 * -4 + -2] = (uint)piVar22;
            DataMemoryBarrier(0xb);
            do {
              iVar10 = *piVar7;
              bVar3 = (bool)hasExclusiveAccess(piVar7);
            } while (!bVar3);
            *piVar7 = iVar10 + -1;
            if (iVar10 == 1) {
              DataMemoryBarrier(0xb);
              FUN_0078fa50();
            }
            goto LAB_00a63860;
          }
        }
        uVar24 = uVar20 & 0x80808080;
        piVar16 = local_11c;
        if (bVar3) {
LAB_00a637ec:
          if ((uVar24 & uVar20 << 1) != 0) goto LAB_00a638a4;
          bVar3 = true;
          local_11c = piVar16;
        }
        else {
          if (uVar24 != 0) {
            piVar16 = (int *)(uVar15 + ((uint)LZCOUNT(uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10
                                                      | (uVar24 >> 0x10 & 0xff) << 8 |
                                                      uVar24 >> 0x18) >> 3) & uVar18);
            goto LAB_00a637ec;
          }
          bVar3 = false;
        }
        iVar10 = iVar10 + 4;
        uVar15 = iVar10 + uVar15;
      } while( true );
    }
    param_3 = local_c0;
    piVar16 = local_bc;
    piVar7 = local_c8;
  }
  else {
    local_58 = local_b8;
    iStack_54 = local_b4;
    local_50 = local_b0;
    piStack_4c = piStack_ac;
    local_48 = local_a8;
    iStack_44 = iStack_a4;
    piStack_40 = local_a0;
    local_3c = piStack_9c;
    uStack_38 = uStack_98;
    local_30 = local_90;
    piStack_2c = local_8c;
    local_60 = local_c0;
    piStack_5c = local_bc;
    local_64 = local_c4;
    local_68 = local_c8;
    local_34 = local_94;
    FUN_012be0e4(&local_c8,&local_68,param_2,param_3);
    piVar22 = local_c4;
    piVar7 = local_c8;
    local_11c = local_c0;
    if (local_c8 == (int *)&DAT_00000005) {
      piVar7 = (int *)0x0;
      if (local_c4 != (int *)&DAT_80000000) {
        local_78 = local_c4;
        local_74 = local_c0;
        local_c4 = (int *)&DAT_00000001;
        local_c8 = (int *)&DAT_00000001;
        local_6c = 1;
        local_70 = local_bc;
        local_b0 = local_60;
        piStack_ac = piStack_5c;
        local_a8 = local_58;
        iStack_a4 = iStack_54;
        local_a0 = local_50;
        piStack_9c = piStack_4c;
        uStack_98 = local_48;
        local_94 = iStack_44;
        local_90 = piStack_40;
        local_8c = local_3c;
        uStack_88 = uStack_38;
        iStack_84 = local_34;
        piStack_80 = local_30;
        piStack_7c = piStack_2c;
        piVar22 = (int *)thunk_FUN_016d4a50(0x60);
        if (piVar22 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x60);
        }
        FUN_016dd1aa(piVar22,&local_c8,0x60);
        goto LAB_00a636dc;
      }
      piVar22 = (int *)0x0;
      param_3 = piVar5;
    }
    else {
      FUN_012ba6a4(&local_68);
      param_3 = local_c0;
      piVar16 = local_bc;
    }
  }
LAB_00a634c8:
  FUN_01282570(puVar19);
  FUN_01282570(piVar23);
  if (*puVar19 == 8) {
    DataMemoryBarrier(0xb);
    do {
      bVar3 = (bool)hasExclusiveAccess(puVar19);
      if (bVar3) {
        *puVar19 = 0;
        if (piVar7 == (int *)&DAT_00000005) {
          return piVar22;
        }
        goto LAB_00a6394c;
      }
    } while (*puVar19 == 8);
  }
  goto LAB_00a63508;
LAB_00a638a4:
  uVar15 = (uint)*(char *)((int)puVar25 + (int)piVar16);
  if (-1 < (int)uVar15) {
    uVar15 = *puVar25 & 0x80808080;
    uVar24 = LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
                     uVar15 >> 0x18);
    uVar15 = (uint)*(byte *)((int)puVar25 + (uVar24 >> 3));
    piVar16 = (int *)(uVar24 >> 3);
  }
  iVar10 = *(int *)(param_1 + 0x18);
  iVar21 = *(int *)(param_1 + 0x1c);
  bVar2 = (byte)(uVar13 >> 0x19);
  *(byte *)((int)puVar25 + (int)piVar16) = bVar2;
  *(uint *)(param_1 + 0x18) = iVar10 - (uVar15 & 1);
  *(int *)(param_1 + 0x1c) = iVar21 + 1;
  *(byte *)((int)puVar25 + (uVar18 & (uint)(piVar16 + -1)) + 4) = bVar2;
  puVar25[(int)piVar16 * -4 + -4] = (uint)piVar11;
  puVar25[(int)piVar16 * -4 + -3] = uVar12;
  puVar25[(int)piVar16 * -4 + -2] = (uint)piVar22;
LAB_00a63860:
  FUN_01282570(puVar19);
  FUN_01282570(piVar23);
  piVar7 = (int *)&DAT_00000005;
  param_3 = piVar23;
  if (*puVar19 == 8) {
    DataMemoryBarrier(0xb);
    do {
      bVar3 = (bool)hasExclusiveAccess(puVar19);
      if (bVar3) {
        *puVar19 = 0;
        return piVar22;
      }
    } while (*puVar19 == 8);
  }
LAB_00a63508:
  ClearExclusiveLocal();
  FUN_0127db4c(puVar19);
  if (piVar7 == (int *)&DAT_00000005) {
    return piVar22;
  }
LAB_00a6394c:
  local_c8 = piVar7;
  local_c4 = piVar22;
  local_c0 = param_3;
  local_bc = piVar16;
                    /* WARNING: Subroutine does not return */
  FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_c8,&DAT_0186d368,&DAT_01886b2c);
}

