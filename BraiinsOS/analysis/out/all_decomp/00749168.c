// FUN_00749168 @ 00749168 size=2404 calls_out=16 calls_in=9
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint ******* FUN_00749168(int param_1,undefined4 *param_2,uint *******param_3)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  longlong lVar4;
  uint *******pppppppuVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint ******ppppppuVar9;
  undefined4 *puVar10;
  uint *****pppppuVar11;
  int iVar12;
  byte *pbVar13;
  uint *******pppppppuVar14;
  uint ******ppppppuVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint *******pppppppuVar18;
  uint uVar19;
  uint *puVar20;
  uint uVar21;
  uint *puVar22;
  uint *******pppppppuVar23;
  uint uVar24;
  uint *******pppppppuVar25;
  int local_124;
  uint *******local_118;
  uint *******local_c8;
  uint *******local_c4;
  uint *******local_c0;
  uint *******local_bc;
  undefined4 local_b8;
  int local_b4;
  uint *******local_b0;
  uint *******pppppppuStack_ac;
  undefined4 local_a8;
  int iStack_a4;
  uint *******local_a0;
  uint *******pppppppuStack_9c;
  undefined4 uStack_98;
  int local_94;
  uint *******local_90;
  uint *******local_8c;
  undefined4 uStack_88;
  int iStack_84;
  uint *******pppppppuStack_80;
  uint *******pppppppuStack_7c;
  uint *******local_78;
  uint *******local_74;
  uint *******local_70;
  undefined1 local_6c;
  uint *******local_68;
  uint *******local_64;
  uint *******local_60;
  uint *******local_5c;
  undefined4 local_58;
  int iStack_54;
  uint *******local_50;
  uint *******pppppppuStack_4c;
  undefined4 local_48;
  int iStack_44;
  uint *******pppppppuStack_40;
  uint *******local_3c;
  undefined4 uStack_38;
  int local_34;
  uint *******local_30;
  uint *******pppppppuStack_2c;
  
  pppppppuVar25 = *(uint ********)(param_1 + 0xcc);
  if (param_3 != pppppppuVar25) {
    local_118 = (uint *******)0x0;
    pppppppuVar18 = (uint *******)&DAT_00000001;
    goto LAB_00749a70;
  }
  iVar6 = param_2[1];
  ppppppuVar15 = (uint ******)0xcbf29ce4;
  pppppppuVar14 = (uint *******)0x84222325;
  if (iVar6 != 0) {
    pbVar13 = (byte *)*param_2;
    do {
      iVar6 = iVar6 + -1;
      uVar19 = (uint)pppppppuVar14 ^ (uint)*pbVar13;
      lVar4 = (ulonglong)uVar19 * 0x1b3;
      pppppppuVar14 = (uint *******)lVar4;
      ppppppuVar15 = (uint ******)
                     ((int)ppppppuVar15 * 0x1b3 + uVar19 * 0x100 + (int)((ulonglong)lVar4 >> 0x20));
      pbVar13 = pbVar13 + 1;
    } while (iVar6 != 0);
  }
  puVar20 = (uint *)(param_1 + 8);
  if (param_3 != (uint *******)&DAT_00000001) {
    iVar6 = param_2[3];
    if (iVar6 != 0) {
      pbVar13 = (byte *)param_2[2];
      do {
        iVar6 = iVar6 + -1;
        uVar19 = (uint)pppppppuVar14 ^ (uint)*pbVar13;
        lVar4 = (ulonglong)uVar19 * 0x1b3;
        pppppppuVar14 = (uint *******)lVar4;
        ppppppuVar15 = (uint ******)
                       ((int)ppppppuVar15 * 0x1b3 + uVar19 * 0x100 + (int)((ulonglong)lVar4 >> 0x20)
                       );
        pbVar13 = pbVar13 + 1;
      } while (iVar6 != 0);
    }
    if (param_3 != (uint *******)&SUB_00000002) {
      iVar6 = param_2[5];
      if (iVar6 != 0) {
        pbVar13 = (byte *)param_2[4];
        do {
          iVar6 = iVar6 + -1;
          uVar19 = (uint)pppppppuVar14 ^ (uint)*pbVar13;
          lVar4 = (ulonglong)uVar19 * 0x1b3;
          pppppppuVar14 = (uint *******)lVar4;
          ppppppuVar15 = (uint ******)
                         ((int)ppppppuVar15 * 0x1b3 +
                         uVar19 * 0x100 + (int)((ulonglong)lVar4 >> 0x20));
          pbVar13 = pbVar13 + 1;
        } while (iVar6 != 0);
      }
      if (param_3 != (uint *******)0x3) {
        iVar6 = param_2[7];
        if (iVar6 != 0) {
          pbVar13 = (byte *)param_2[6];
          do {
            iVar6 = iVar6 + -1;
            uVar19 = (uint)pppppppuVar14 ^ (uint)*pbVar13;
            lVar4 = (ulonglong)uVar19 * 0x1b3;
            pppppppuVar14 = (uint *******)lVar4;
            ppppppuVar15 = (uint ******)
                           ((int)ppppppuVar15 * 0x1b3 +
                           uVar19 * 0x100 + (int)((ulonglong)lVar4 >> 0x20));
            pbVar13 = pbVar13 + 1;
          } while (iVar6 != 0);
        }
        iVar6 = 0;
        if (param_3 != (uint *******)&DAT_00000004) {
          iVar6 = param_2[9];
        }
        if (param_3 != (uint *******)&DAT_00000004 && iVar6 != 0) {
          pbVar13 = (byte *)param_2[8];
          do {
            iVar6 = iVar6 + -1;
            uVar19 = (uint)pppppppuVar14 ^ (uint)*pbVar13;
            lVar4 = (ulonglong)uVar19 * 0x1b3;
            pppppppuVar14 = (uint *******)lVar4;
            ppppppuVar15 = (uint ******)
                           ((int)ppppppuVar15 * 0x1b3 +
                           uVar19 * 0x100 + (int)((ulonglong)lVar4 >> 0x20));
            pbVar13 = pbVar13 + 1;
          } while (iVar6 != 0);
        }
      }
    }
  }
  uVar19 = *puVar20;
  if ((uVar19 < 0xfffffff0) && ((uVar19 & 8) == 0)) {
    if (*puVar20 != uVar19) {
      ClearExclusiveLocal();
      goto LAB_007492dc;
    }
    bVar3 = (bool)hasExclusiveAccess(puVar20);
    if (!bVar3) goto LAB_007492dc;
    *puVar20 = uVar19 + 0x10;
    DataMemoryBarrier(0xb);
  }
  else {
LAB_007492dc:
    FUN_0127d66c(puVar20);
  }
  puVar16 = (undefined4 *)(param_1 + 0x20);
  FUN_0128236c(puVar20);
  pppppppuVar23 = (uint *******)((uint)puVar20 | 1);
  FUN_0128236c(pppppppuVar23);
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar7 = FUN_009bd658(*puVar16,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
                         *(undefined4 *)(param_1 + 0x2c),pppppppuVar14,ppppppuVar15);
    uVar19 = uVar7 >> 0x19;
    iVar6 = *(int *)(param_1 + 0x10);
    local_118 = (uint *******)0x0;
    while( true ) {
      uVar7 = *(uint *)(param_1 + 0x14) & uVar7;
      uVar24 = *(uint *)(iVar6 + uVar7);
      uVar17 = uVar24 ^ uVar19 * 0x1010101;
      uVar17 = ~uVar17 & 0x80808080 & uVar17 + 0xfefefeff;
      while (uVar17 != 0) {
        uVar21 = uVar7 + ((uint)LZCOUNT(uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                                        (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18) >> 3) &
                 *(uint *)(param_1 + 0x14);
        puVar10 = (undefined4 *)(iVar6 + -0x10 + uVar21 * -0x10);
        uVar17 = uVar17 - 1 & uVar17;
        if (pppppppuVar14 == (uint *******)*puVar10 && ppppppuVar15 == (uint ******)puVar10[1]) {
          pppppppuVar25 = *(uint ********)(iVar6 + uVar21 * -0x10 + -8);
          do {
            ppppppuVar15 = *pppppppuVar25;
            bVar3 = (bool)hasExclusiveAccess(pppppppuVar25);
          } while (!bVar3);
          *pppppppuVar25 = (uint ******)((int)ppppppuVar15 + 1);
          if (-1 < (int)ppppppuVar15) {
            FUN_01282570(puVar20);
            FUN_01282570(pppppppuVar23);
            DataMemoryBarrier(0xb);
            do {
              uVar19 = *puVar20;
              bVar3 = (bool)hasExclusiveAccess(puVar20);
            } while (!bVar3);
            *puVar20 = uVar19 - 0x10;
            if ((uVar19 & 0xfffffff2) == 0x12) {
              FUN_0127d34c(puVar20);
              return pppppppuVar25;
            }
            return pppppppuVar25;
          }
          goto LAB_00749aa8;
        }
      }
      if ((uVar24 & 0x80808080 & uVar24 << 1) != 0) break;
      local_118 = (uint *******)((int)local_118 + 4);
      uVar7 = uVar7 + (int)local_118;
    }
  }
  FUN_01282570(puVar20);
  FUN_01282570(pppppppuVar23);
  DataMemoryBarrier(0xb);
  do {
    uVar19 = *puVar20;
    bVar3 = (bool)hasExclusiveAccess(puVar20);
  } while (!bVar3);
  *puVar20 = uVar19 - 0x10;
  if ((uVar19 & 0xfffffff2) == 0x12) {
    FUN_0127d34c(puVar20);
    if (*puVar20 != 0) goto LAB_00749a38;
LAB_007494b0:
    bVar3 = (bool)hasExclusiveAccess(puVar20);
    if (!bVar3) goto LAB_00749a3c;
    *puVar20 = 8;
    DataMemoryBarrier(0xb);
  }
  else {
    if (*puVar20 == 0) goto LAB_007494b0;
LAB_00749a38:
    ClearExclusiveLocal();
LAB_00749a3c:
    FUN_0127e06c(puVar20);
  }
  FUN_0128236c(puVar20);
  FUN_0128236c(pppppppuVar23);
  if (*(int *)(param_1 + 0x1c) != 0) {
    puVar8 = (undefined1 *)
             FUN_009bd658(*puVar16,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
                          *(undefined4 *)(param_1 + 0x2c),pppppppuVar14,ppppppuVar15);
    uVar19 = (uint)puVar8 >> 0x19;
    iVar6 = *(int *)(param_1 + 0x10);
    local_124 = 0;
    while( true ) {
      local_118 = (uint *******)(*(uint *)(param_1 + 0x14) & (uint)puVar8);
      uVar7 = *(uint *)(iVar6 + (int)local_118);
      uVar17 = uVar7 ^ uVar19 * 0x1010101;
      uVar17 = ~uVar17 & 0x80808080 & uVar17 + 0xfefefeff;
      while (uVar17 != 0) {
        uVar24 = (uint)((int)local_118 +
                       ((uint)LZCOUNT(uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                                      (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18) >> 3)) &
                 *(uint *)(param_1 + 0x14);
        puVar10 = (undefined4 *)(iVar6 + -0x10 + uVar24 * -0x10);
        uVar17 = uVar17 - 1 & uVar17;
        if (pppppppuVar14 == (uint *******)*puVar10 && ppppppuVar15 == (uint ******)puVar10[1]) {
          pppppppuVar25 = *(uint ********)(iVar6 + uVar24 * -0x10 + -8);
          do {
            ppppppuVar15 = *pppppppuVar25;
            bVar3 = (bool)hasExclusiveAccess(pppppppuVar25);
          } while (!bVar3);
          *pppppppuVar25 = (uint ******)((int)ppppppuVar15 + 1);
          if ((int)ppppppuVar15 < 0) goto LAB_00749aa8;
          param_3 = pppppppuVar14;
          pppppppuVar18 = (uint *******)&DAT_00000005;
          goto LAB_007495f0;
        }
      }
      if ((uVar7 & 0x80808080 & uVar7 << 1) != 0) break;
      local_124 = local_124 + 4;
      puVar8 = (undefined1 *)((int)local_118 + local_124);
    }
  }
  FUN_012cd8c4(&local_c8,param_1 + 0x30);
  local_118 = local_c4;
  pppppppuVar5 = local_c8;
  if (local_94 == -0x80000000) {
    pppppppuVar25 = local_c4;
    if (local_c8 == (uint *******)&DAT_00000005) {
LAB_00749810:
      do {
        ppppppuVar9 = *pppppppuVar25;
        bVar3 = (bool)hasExclusiveAccess(pppppppuVar25);
      } while (!bVar3);
      *pppppppuVar25 = (uint ******)((int)ppppppuVar9 + 1);
      if ((int)ppppppuVar9 < 0) {
LAB_00749aa8:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x749aa8);
        (*pcVar1)();
      }
      uVar19 = FUN_009bd658(*puVar16,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28)
                            ,*(undefined4 *)(param_1 + 0x2c),pppppppuVar14,ppppppuVar15);
      if (*(int *)(param_1 + 0x18) == 0) {
        FUN_0074a98c(param_1 + 0x10,puVar16);
      }
      uVar17 = *(uint *)(param_1 + 0x14);
      puVar22 = *(uint **)(param_1 + 0x10);
      bVar3 = false;
      iVar6 = 0;
      uVar7 = uVar19;
      local_118 = (uint *******)&local_c0;
      do {
        uVar7 = uVar17 & uVar7;
        uVar21 = *(uint *)((int)puVar22 + uVar7);
        uVar24 = uVar21 ^ (uVar19 >> 0x19) * 0x1010101;
        uVar24 = ~uVar24 & 0x80808080 & uVar24 + 0xfefefeff;
        while (uVar24 != 0) {
          pppppppuVar18 =
               (uint *******)
               (puVar22 +
               (uVar7 + ((uint)LZCOUNT(uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 |
                                       (uVar24 >> 0x10 & 0xff) << 8 | uVar24 >> 0x18) >> 3) & uVar17
               ) * -4);
          uVar24 = uVar24 - 1 & uVar24;
          if (pppppppuVar14 == (uint *******)pppppppuVar18[-4] && ppppppuVar15 == pppppppuVar18[-3])
          {
            ppppppuVar15 = pppppppuVar18[-2];
            pppppppuVar18[-2] = (uint ******)pppppppuVar25;
            DataMemoryBarrier(0xb);
            do {
              pppppuVar11 = *ppppppuVar15;
              bVar3 = (bool)hasExclusiveAccess(ppppppuVar15);
            } while (!bVar3);
            *ppppppuVar15 = (uint *****)((int)pppppuVar11 + -1);
            local_118 = pppppppuVar18;
            if (pppppuVar11 == (uint *****)0x1) {
              DataMemoryBarrier(0xb);
              FUN_012c0df4();
            }
            goto LAB_00749984;
          }
        }
        uVar24 = uVar21 & 0x80808080;
        if (bVar3) {
LAB_00749914:
          if ((uVar24 & uVar21 << 1) != 0) goto LAB_007499c8;
          bVar3 = true;
        }
        else {
          if (uVar24 != 0) {
            local_118 = (uint *******)
                        (uVar7 + ((uint)LZCOUNT((uVar21 & 0x80) << 0x18 |
                                                (uVar24 >> 8 & 0xff) << 0x10 |
                                                (uVar24 >> 0x10 & 0xff) << 8 | uVar24 >> 0x18) >> 3)
                        & uVar17);
            goto LAB_00749914;
          }
          bVar3 = false;
        }
        iVar6 = iVar6 + 4;
        uVar7 = iVar6 + uVar7;
      } while( true );
    }
    param_3 = local_c0;
    pppppppuVar18 = local_c8;
    local_118 = local_bc;
  }
  else {
    local_58 = local_b8;
    iStack_54 = local_b4;
    local_50 = local_b0;
    pppppppuStack_4c = pppppppuStack_ac;
    local_48 = local_a8;
    iStack_44 = iStack_a4;
    pppppppuStack_40 = local_a0;
    local_3c = pppppppuStack_9c;
    uStack_38 = uStack_98;
    local_60 = local_c0;
    local_5c = local_bc;
    local_30 = local_90;
    pppppppuStack_2c = local_8c;
    local_64 = local_c4;
    local_68 = local_c8;
    local_34 = local_94;
    FUN_012be0e4(&local_c8,&local_68,param_2,param_3);
    pppppppuVar25 = local_c4;
    pppppppuVar18 = local_c8;
    if (local_c8 == (uint *******)&DAT_00000005) {
      pppppppuVar18 = (uint *******)0x0;
      if (local_c4 != (uint *******)&DAT_80000000) {
        local_78 = local_c4;
        local_74 = local_c0;
        local_c4 = (uint *******)&DAT_00000001;
        local_c8 = (uint *******)&DAT_00000001;
        local_6c = 1;
        local_70 = local_bc;
        local_b0 = local_60;
        pppppppuStack_ac = local_5c;
        local_a8 = local_58;
        iStack_a4 = iStack_54;
        local_a0 = local_50;
        pppppppuStack_9c = pppppppuStack_4c;
        uStack_98 = local_48;
        local_94 = iStack_44;
        local_90 = pppppppuStack_40;
        local_8c = local_3c;
        uStack_88 = uStack_38;
        iStack_84 = local_34;
        pppppppuStack_80 = local_30;
        pppppppuStack_7c = pppppppuStack_2c;
        pppppppuVar25 = (uint *******)thunk_FUN_016d4a50(0x60);
        if (pppppppuVar25 == (uint *******)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x60);
        }
        FUN_016dd1aa(pppppppuVar25,&local_c8,0x60);
        goto LAB_00749810;
      }
      pppppppuVar25 = (uint *******)0x0;
      param_3 = pppppppuVar5;
    }
    else {
      FUN_012ba6a4(&local_68);
      param_3 = local_c0;
      local_118 = local_bc;
    }
  }
LAB_007495f0:
  FUN_01282570(puVar20);
  FUN_01282570(pppppppuVar23);
  if (*puVar20 == 8) {
    DataMemoryBarrier(0xb);
    do {
      bVar3 = (bool)hasExclusiveAccess(puVar20);
      if (bVar3) {
        *puVar20 = 0;
        if (pppppppuVar18 == (uint *******)&DAT_00000005) {
          return pppppppuVar25;
        }
        goto LAB_00749a70;
      }
    } while (*puVar20 == 8);
  }
  goto LAB_00749630;
LAB_007499c8:
  uVar7 = (uint)*(char *)((int)puVar22 + (int)local_118);
  if (-1 < (int)uVar7) {
    uVar7 = *puVar22 & 0x80808080;
    uVar24 = LZCOUNT((*puVar22 & 0x80) << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                     (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18);
    uVar7 = (uint)*(byte *)((int)puVar22 + (uVar24 >> 3));
    local_118 = (uint *******)(uVar24 >> 3);
  }
  iVar6 = *(int *)(param_1 + 0x18);
  iVar12 = *(int *)(param_1 + 0x1c);
  bVar2 = (byte)(uVar19 >> 0x19);
  *(byte *)((int)puVar22 + (int)local_118) = bVar2;
  *(uint *)(param_1 + 0x18) = iVar6 - (uVar7 & 1);
  *(int *)(param_1 + 0x1c) = iVar12 + 1;
  *(byte *)((int)puVar22 + (uVar17 & (uint)(local_118 + -1)) + 4) = bVar2;
  puVar22[(int)local_118 * -4 + -4] = (uint)pppppppuVar14;
  puVar22[(int)local_118 * -4 + -3] = (uint)ppppppuVar15;
  puVar22[(int)local_118 * -4 + -2] = (uint)pppppppuVar25;
LAB_00749984:
  FUN_01282570(puVar20);
  FUN_01282570(pppppppuVar23);
  pppppppuVar18 = (uint *******)&DAT_00000005;
  param_3 = pppppppuVar23;
  if (*puVar20 == 8) {
    DataMemoryBarrier(0xb);
    do {
      bVar3 = (bool)hasExclusiveAccess(puVar20);
      if (bVar3) {
        *puVar20 = 0;
        return pppppppuVar25;
      }
    } while (*puVar20 == 8);
  }
LAB_00749630:
  ClearExclusiveLocal();
  FUN_0127db4c(puVar20);
  if (pppppppuVar18 == (uint *******)&DAT_00000005) {
    return pppppppuVar25;
  }
LAB_00749a70:
  local_c8 = pppppppuVar18;
  local_c4 = pppppppuVar25;
  local_c0 = param_3;
  local_bc = local_118;
                    /* WARNING: Subroutine does not return */
  FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_c8,&DAT_0185b800,&DAT_01886b2c);
}

