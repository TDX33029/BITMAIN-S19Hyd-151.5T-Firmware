// FUN_00ed4af8 @ 00ed4af8 size=2248 calls_out=16 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * FUN_00ed4af8(int param_1,undefined4 *param_2,int *param_3)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  int *piVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  int *piVar17;
  uint uVar18;
  int *piVar19;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int *local_128;
  undefined4 *local_120;
  int local_118;
  int *local_c8;
  int *local_c4;
  int *local_c0;
  int *local_bc;
  undefined4 local_b8;
  int iStack_b4;
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
  int *local_5c;
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
  int *local_2c;
  
  piVar19 = *(int **)(param_1 + 0xcc);
  if (param_3 != piVar19) {
    piVar17 = (int *)0x0;
    piVar8 = (int *)&DAT_00000001;
    local_128 = param_3;
    goto LAB_00ed536c;
  }
  puVar20 = (uint *)(param_1 + 8);
  uVar13 = 0xcbf29ce4;
  uVar18 = 0x84222325;
  if (param_3 != (int *)0x0) {
    puVar12 = param_2;
    do {
      iVar10 = puVar12[1];
      if (iVar10 != 0) {
        pbVar16 = (byte *)*puVar12;
        do {
          iVar10 = iVar10 + -1;
          uVar14 = uVar18 ^ *pbVar16;
          lVar4 = (ulonglong)uVar14 * 0x1b3;
          uVar18 = (uint)lVar4;
          uVar13 = uVar13 * 0x1b3 + (int)((ulonglong)lVar4 >> 0x20) + uVar14 * 0x100;
          pbVar16 = pbVar16 + 1;
        } while (iVar10 != 0);
      }
      puVar12 = puVar12 + 2;
    } while (puVar12 != param_2 + (int)param_3 * 2);
  }
  uVar14 = *puVar20;
  if ((uVar14 < 0xfffffff0) && ((uVar14 & 8) == 0)) {
    if (*puVar20 != uVar14) {
      ClearExclusiveLocal();
      goto LAB_00ed4bb8;
    }
    bVar3 = (bool)hasExclusiveAccess(puVar20);
    if (!bVar3) goto LAB_00ed4bb8;
    *puVar20 = uVar14 + 0x10;
    DataMemoryBarrier(0xb);
  }
  else {
LAB_00ed4bb8:
    FUN_0127d66c(puVar20);
  }
  puVar12 = (undefined4 *)(param_1 + 0x20);
  FUN_0128236c(puVar20);
  uVar14 = (uint)puVar20 | 1;
  FUN_0128236c(uVar14);
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar5 = FUN_00c5abb0(*puVar12,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
                         *(undefined4 *)(param_1 + 0x2c),uVar18,uVar13);
    uVar6 = uVar5 >> 0x19;
    iVar10 = *(int *)(param_1 + 0x10);
    local_118 = 0;
    while( true ) {
      uVar5 = *(uint *)(param_1 + 0x14) & uVar5;
      uVar21 = *(uint *)(iVar10 + uVar5);
      uVar15 = uVar21 ^ uVar6 * 0x1010101;
      uVar15 = ~uVar15 & 0x80808080 & uVar15 + 0xfefefeff;
      while (uVar15 != 0) {
        uVar22 = uVar5 + ((uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                        (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3) &
                 *(uint *)(param_1 + 0x14);
        puVar9 = (uint *)(iVar10 + -0x10 + uVar22 * -0x10);
        uVar15 = uVar15 - 1 & uVar15;
        if (uVar18 == *puVar9 && uVar13 == puVar9[1]) {
          piVar19 = *(int **)(iVar10 + uVar22 * -0x10 + -8);
          do {
            iVar10 = *piVar19;
            bVar3 = (bool)hasExclusiveAccess(piVar19);
          } while (!bVar3);
          *piVar19 = iVar10 + 1;
          if (-1 < iVar10) {
            FUN_01282570(puVar20);
            FUN_01282570(uVar14);
            DataMemoryBarrier(0xb);
            do {
              uVar13 = *puVar20;
              bVar3 = (bool)hasExclusiveAccess(puVar20);
            } while (!bVar3);
            *puVar20 = uVar13 - 0x10;
            if ((uVar13 & 0xfffffff2) == 0x12) {
              FUN_0127d34c(puVar20);
              return piVar19;
            }
            return piVar19;
          }
          goto LAB_00ed53a4;
        }
      }
      if ((uVar21 & 0x80808080 & uVar21 << 1) != 0) break;
      local_118 = local_118 + 4;
      uVar5 = uVar5 + local_118;
    }
  }
  local_120 = &local_b8;
  FUN_01282570(puVar20);
  FUN_01282570(uVar14);
  DataMemoryBarrier(0xb);
  do {
    uVar6 = *puVar20;
    bVar3 = (bool)hasExclusiveAccess(puVar20);
  } while (!bVar3);
  *puVar20 = uVar6 - 0x10;
  if ((uVar6 & 0xfffffff2) == 0x12) {
    FUN_0127d34c(puVar20);
    if (*puVar20 == 0) goto LAB_00ed4d90;
LAB_00ed5334:
    ClearExclusiveLocal();
LAB_00ed5338:
    FUN_0127e06c(puVar20);
  }
  else {
    if (*puVar20 != 0) goto LAB_00ed5334;
LAB_00ed4d90:
    bVar3 = (bool)hasExclusiveAccess(puVar20);
    if (!bVar3) goto LAB_00ed5338;
    *puVar20 = 8;
    DataMemoryBarrier(0xb);
  }
  FUN_0128236c(puVar20);
  FUN_0128236c(uVar14);
  if (*(int *)(param_1 + 0x1c) != 0) {
    puVar7 = (undefined1 *)
             FUN_00c5abb0(*puVar12,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
                          *(undefined4 *)(param_1 + 0x2c),uVar18,uVar13);
    uVar6 = (uint)puVar7 >> 0x19;
    iVar10 = *(int *)(param_1 + 0x10);
    local_128 = (int *)0x0;
    while( true ) {
      piVar17 = (int *)(*(uint *)(param_1 + 0x14) & (uint)puVar7);
      uVar15 = *(uint *)(iVar10 + (int)piVar17);
      uVar5 = uVar15 ^ uVar6 * 0x1010101;
      uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff;
      while (uVar5 != 0) {
        uVar21 = (uint)((int)piVar17 +
                       ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                      (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3)) &
                 *(uint *)(param_1 + 0x14);
        puVar9 = (uint *)(iVar10 + -0x10 + uVar21 * -0x10);
        uVar5 = uVar5 - 1 & uVar5;
        if (uVar18 == *puVar9 && uVar13 == puVar9[1]) {
          piVar19 = *(int **)(iVar10 + uVar21 * -0x10 + -8);
          do {
            iVar10 = *piVar19;
            bVar3 = (bool)hasExclusiveAccess(piVar19);
          } while (!bVar3);
          *piVar19 = iVar10 + 1;
          if (iVar10 < 0) goto LAB_00ed53a4;
          piVar8 = (int *)&DAT_00000005;
          goto LAB_00ed4ec0;
        }
      }
      if ((uVar15 & 0x80808080 & uVar15 << 1) != 0) break;
      local_128 = local_128 + 1;
      puVar7 = (undefined1 *)((int)piVar17 + (int)local_128);
    }
  }
  FUN_012cd8c4(&local_c8,param_1 + 0x30);
  local_128 = local_c0;
  if (local_94 == -0x80000000) {
    piVar8 = local_c8;
    piVar17 = local_bc;
    piVar19 = local_c4;
    if (local_c8 == (int *)&DAT_00000005) {
LAB_00ed50c4:
      do {
        iVar10 = *piVar19;
        bVar3 = (bool)hasExclusiveAccess(piVar19);
      } while (!bVar3);
      *piVar19 = iVar10 + 1;
      if (iVar10 < 0) {
LAB_00ed53a4:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0xed53a4);
        (*pcVar1)();
      }
      uVar6 = FUN_00c5abb0(*puVar12,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
                           *(undefined4 *)(param_1 + 0x2c),uVar18,uVar13);
      if (*(int *)(param_1 + 0x18) == 0) {
        FUN_0074a98c(param_1 + 0x10,puVar12);
      }
      puVar9 = *(uint **)(param_1 + 0x10);
      uVar15 = *(uint *)(param_1 + 0x14);
      bVar3 = false;
      iVar10 = 0;
      uVar5 = uVar6;
      do {
        uVar5 = uVar15 & uVar5;
        uVar21 = *(uint *)((int)puVar9 + uVar5);
        uVar22 = uVar21 ^ (uVar6 >> 0x19) * 0x1010101;
        uVar22 = ~uVar22 & 0x80808080 & uVar22 + 0xfefefeff;
        while (uVar22 != 0) {
          uVar23 = uVar5 + ((uint)LZCOUNT(uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 |
                                          (uVar22 >> 0x10 & 0xff) << 8 | uVar22 >> 0x18) >> 3) &
                   uVar15;
          uVar22 = uVar22 - 1 & uVar22;
          if (uVar18 == puVar9[uVar23 * -4 + -4] && uVar13 == (puVar9 + uVar23 * -4 + -4)[1]) {
            piVar8 = (int *)puVar9[uVar23 * -4 + -2];
            puVar9[uVar23 * -4 + -2] = (uint)piVar19;
            DataMemoryBarrier(0xb);
            do {
              iVar10 = *piVar8;
              bVar3 = (bool)hasExclusiveAccess(piVar8);
            } while (!bVar3);
            *piVar8 = iVar10 + -1;
            if (iVar10 == 1) {
              DataMemoryBarrier(0xb);
              FUN_012c0df4();
            }
            goto LAB_00ed5258;
          }
        }
        uVar22 = uVar21 & 0x80808080;
        if (bVar3) {
LAB_00ed51e0:
          if ((uVar22 & uVar21 << 1) != 0) {
            uVar5 = (uint)*(char *)((int)puVar9 + (int)local_120);
            if (-1 < (int)uVar5) {
              uVar5 = *puVar9 & 0x80808080;
              uVar21 = LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                               (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18);
              uVar5 = (uint)*(byte *)((int)puVar9 + (uVar21 >> 3));
              local_120 = (undefined4 *)(uVar21 >> 3);
            }
            iVar11 = *(int *)(param_1 + 0x1c);
            iVar10 = *(int *)(param_1 + 0x18);
            bVar2 = (byte)(uVar6 >> 0x19);
            *(byte *)((int)puVar9 + (int)local_120) = bVar2;
            *(uint *)(param_1 + 0x18) = iVar10 - (uVar5 & 1);
            *(int *)(param_1 + 0x1c) = iVar11 + 1;
            *(byte *)((int)puVar9 + ((uint)(local_120 + -1) & uVar15) + 4) = bVar2;
            puVar9[(int)local_120 * -4 + -4] = uVar18;
            puVar9[(int)local_120 * -4 + -3] = uVar13;
            puVar9[(int)local_120 * -4 + -2] = (uint)piVar19;
LAB_00ed5258:
            FUN_01282570(puVar20);
            FUN_01282570(uVar14);
            if (*puVar20 == 8) {
              DataMemoryBarrier(0xb);
              do {
                bVar3 = (bool)hasExclusiveAccess(puVar20);
                if (bVar3) {
                  *puVar20 = 0;
                  return piVar19;
                }
              } while (*puVar20 == 8);
            }
            ClearExclusiveLocal();
            FUN_0127db4c(puVar20);
            return piVar19;
          }
          bVar3 = true;
        }
        else {
          if (uVar22 != 0) {
            local_120 = (undefined4 *)
                        (uVar5 + ((uint)LZCOUNT(uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 |
                                                (uVar22 >> 0x10 & 0xff) << 8 | uVar22 >> 0x18) >> 3)
                        & uVar15);
            goto LAB_00ed51e0;
          }
          bVar3 = false;
        }
        iVar10 = iVar10 + 4;
        uVar5 = iVar10 + uVar5;
      } while( true );
    }
  }
  else {
    local_58 = local_b8;
    iStack_54 = iStack_b4;
    local_50 = local_b0;
    piStack_4c = piStack_ac;
    local_48 = local_a8;
    iStack_44 = iStack_a4;
    piStack_40 = local_a0;
    local_3c = piStack_9c;
    uStack_38 = uStack_98;
    local_60 = local_c0;
    local_30 = local_90;
    local_5c = local_bc;
    local_2c = local_8c;
    local_64 = local_c4;
    local_68 = local_c8;
    local_34 = local_94;
    FUN_012be0e4(&local_c8,&local_68,param_2,param_3);
    local_78 = local_c4;
    local_128 = local_c0;
    if (local_c8 == (int *)&DAT_00000005) {
      local_b0 = local_60;
      piStack_ac = local_5c;
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
      piStack_7c = local_2c;
      if (local_c4 != (int *)&DAT_80000000) {
        local_74 = local_c0;
        local_70 = local_bc;
        local_6c = 1;
        local_c4 = (int *)&DAT_00000001;
        local_c8 = (int *)&DAT_00000001;
        local_bc = (int *)0x0;
        local_c0 = (int *)0x0;
        piVar19 = (int *)thunk_FUN_016d4a50(0x60);
        if (piVar19 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x60);
        }
        FUN_016dd1aa(piVar19,&local_c8,0x60);
        goto LAB_00ed50c4;
      }
      local_128 = local_68;
      piVar8 = (int *)0x0;
      piVar17 = local_64;
      piVar19 = (int *)0x0;
    }
    else {
      FUN_00f156b4(&local_68);
      piVar8 = local_c8;
      piVar17 = local_bc;
      piVar19 = local_c4;
    }
  }
LAB_00ed4ec0:
  FUN_01282570(puVar20);
  FUN_01282570(uVar14);
  if (*puVar20 == 8) {
    DataMemoryBarrier(0xb);
    do {
      bVar3 = (bool)hasExclusiveAccess(puVar20);
      if (bVar3) {
        *puVar20 = 0;
        goto LAB_00ed4f08;
      }
    } while (*puVar20 == 8);
  }
  ClearExclusiveLocal();
  FUN_0127db4c(puVar20);
LAB_00ed4f08:
  if (piVar8 == (int *)&DAT_00000005) {
    return piVar19;
  }
LAB_00ed536c:
  local_c8 = piVar8;
  local_c4 = piVar19;
  local_c0 = local_128;
  local_bc = piVar17;
                    /* WARNING: Subroutine does not return */
  FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_c8,&DAT_0187c0e4,&DAT_01886b2c);
}

