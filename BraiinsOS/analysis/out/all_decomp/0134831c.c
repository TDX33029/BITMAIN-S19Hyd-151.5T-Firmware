// FUN_0134831c @ 0134831c size=3804 calls_out=29 calls_in=7
// strings: 

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0134831c(undefined4 *param_1,int param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 ******param_5)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 ******ppppppuVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  int *piVar15;
  uint uVar16;
  int *piVar17;
  uint *puVar18;
  undefined1 *puVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  uint *puVar24;
  undefined4 *******pppppppuVar25;
  undefined4 uVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  undefined4 ******ppppppuVar30;
  uint *puVar31;
  uint *puVar32;
  uint local_108;
  undefined4 local_100;
  uint local_fc;
  uint *local_f8 [6];
  int local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  undefined4 local_cc;
  undefined4 ******local_c8;
  uint local_c4;
  undefined4 *local_c0;
  undefined4 local_bc;
  int local_b8;
  int local_b4;
  uint local_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint *puStack_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint uStack_94;
  undefined4 *******local_90;
  uint local_8c;
  undefined4 ******local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint *local_78;
  uint local_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  int local_54;
  undefined4 ******local_50;
  uint local_4c;
  int local_48;
  undefined4 ******local_40;
  uint local_3c;
  undefined4 ******local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  local_b4 = param_3[1];
  puVar23 = (uint *)(param_2 + 0x90);
  uVar26 = *param_3;
  uVar9 = *(uint *)(param_2 + 0x90);
  if ((uVar9 < 0xfffffff0) && ((uVar9 & 8) == 0)) {
    if (*puVar23 != uVar9) {
      ClearExclusiveLocal();
      goto LAB_01348384;
    }
    bVar2 = (bool)hasExclusiveAccess(puVar23);
    if (!bVar2) goto LAB_01348384;
    *puVar23 = uVar9 + 0x10;
    DataMemoryBarrier(0xb);
  }
  else {
LAB_01348384:
    FUN_0127d66c(puVar23);
  }
  FUN_0128236c(puVar23);
  uVar9 = (uint)puVar23 | 1;
  FUN_0128236c(uVar9);
  local_b8 = param_2 + 0x98;
  iVar10 = FUN_0134e380(local_b8,uVar26,local_b4);
  if ((iVar10 != 0) &&
     (puVar11 = (undefined4 *)FUN_0134e538(iVar10,param_4,param_5), puVar11 != (undefined4 *)0x0)) {
    piVar17 = (int *)*puVar11;
    do {
      iVar10 = *piVar17;
      bVar2 = (bool)hasExclusiveAccess(piVar17);
    } while (!bVar2);
    *piVar17 = iVar10 + 1;
    if (-1 < iVar10) {
      uVar26 = *puVar11;
      *param_1 = 0x8000000a;
      param_1[1] = uVar26;
      FUN_01282570(puVar23);
      FUN_01282570(uVar9);
      DataMemoryBarrier(0xb);
      do {
        uVar9 = *puVar23;
        bVar2 = (bool)hasExclusiveAccess(puVar23);
      } while (!bVar2);
      *puVar23 = uVar9 - 0x10;
      if ((uVar9 & 0xfffffff2) == 0x12) {
        FUN_0127d34c(puVar23);
        return;
      }
      return;
    }
    goto LAB_01348c18;
  }
  FUN_01282570(puVar23);
  FUN_01282570(uVar9);
  DataMemoryBarrier(0xb);
  do {
    uVar12 = *puVar23;
    bVar2 = (bool)hasExclusiveAccess(puVar23);
  } while (!bVar2);
  *puVar23 = uVar12 - 0x10;
  if ((uVar12 & 0xfffffff2) == 0x12) {
    FUN_0127d34c(puVar23);
    uVar12 = *puVar23;
    if (uVar12 < 0xffffffec) goto LAB_01348480;
LAB_013484b0:
    FUN_0127ebd4(puVar23);
  }
  else {
    uVar12 = *puVar23;
    if (0xffffffeb < uVar12) goto LAB_013484b0;
LAB_01348480:
    if ((uVar12 & 0xc) != 0) goto LAB_013484b0;
    if (*puVar23 != uVar12) {
      ClearExclusiveLocal();
      goto LAB_013484b0;
    }
    bVar2 = (bool)hasExclusiveAccess(puVar23);
    if (!bVar2) goto LAB_013484b0;
    *puVar23 = uVar12 + 0x14;
    DataMemoryBarrier(0xb);
  }
  FUN_0128236c(puVar23);
  FUN_0128236c(uVar9);
  iVar10 = FUN_0134e380(local_b8,uVar26,local_b4);
  if ((iVar10 == 0) ||
     (puVar11 = (undefined4 *)FUN_0134e538(iVar10,param_4,param_5), puVar11 == (undefined4 *)0x0)) {
    local_c8 = param_5;
    local_cc = param_4;
    local_c4 = uVar9;
    local_c0 = param_1;
    local_bc = uVar26;
    FUN_01357154(&local_90,param_3,param_4,param_5);
    local_b0 = local_84;
    uStack_ac = local_80;
    uStack_a8 = local_7c;
    puStack_a4 = local_78;
    local_a0 = local_74;
    local_9c = uStack_70;
    local_98 = uStack_6c;
    uStack_94 = uStack_68;
    if (local_90 == (undefined4 *******)0x8000000a) {
      piVar17 = (int *)thunk_FUN_016d4a50(0x30);
      iVar10 = local_b4;
      uVar26 = local_bc;
      if (piVar17 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x30);
      }
      *piVar17 = 1;
      piVar17[1] = 1;
      piVar17[2] = local_8c;
      piVar17[3] = (int)local_88;
      piVar17[4] = local_b0;
      piVar17[5] = uStack_ac;
      piVar17[6] = uStack_a8;
      piVar17[7] = (int)puStack_a4;
      piVar17[8] = local_a0;
      piVar17[9] = local_9c;
      piVar17[10] = local_98;
      piVar17[0xb] = uStack_94;
      do {
        uVar9 = *puVar23;
        bVar2 = (bool)hasExclusiveAccess(puVar23);
      } while (!bVar2);
      *puVar23 = uVar9 - 0xc;
      DataMemoryBarrier(0xb);
      if ((uVar9 & 0xfffffff0) != 0x10) {
        FUN_0127ced4(puVar23);
      }
      local_90 = *(undefined4 ********)(param_2 + 0xa8);
      local_8c = *(uint *)(param_2 + 0xac);
      local_88 = (undefined4 ******)0x0;
      local_7c = 0;
      local_80 = 0;
      local_84 = 0;
      local_74 = local_74 & 0xffffff00;
      local_78 = &DAT_018dd8f0;
      FUN_0134e6e8(&local_90,uVar26,iVar10);
      if ((char)local_74 == '\0') {
        pppppppuVar25 = local_90;
        uVar9 = local_8c;
      }
      else {
        uVar3 = (ulonglong)(local_8c ^ local_84) * (ulonglong)(*local_78 ^ local_80) ^
                (ulonglong)((uint)local_90 ^ (uint)local_88) * (ulonglong)(local_78[1] ^ local_7c);
        uVar5 = (ulonglong)((uint)local_90 ^ (uint)local_88) * (ulonglong)(*local_78 ^ local_80) ^
                (ulonglong)(local_8c ^ local_84) * (ulonglong)(local_78[1] ^ local_7c);
        pppppppuVar25 = (undefined4 *******)((uint)uVar5 ^ (uint)(uVar3 >> 0x20));
        uVar9 = (uint)(uVar5 >> 0x20) ^ (uint)uVar3;
      }
      uVar12 = *(uint *)(param_2 + 0x9c);
      uVar16 = ((uint)pppppppuVar25 >> 0x19) * 0x1010101;
      iVar29 = *(int *)(param_2 + 0x98);
      uVar28 = uVar12 & (uint)pppppppuVar25;
      iVar20 = 0;
      do {
        uVar27 = *(uint *)(iVar29 + uVar28);
        uVar22 = ~(uVar27 ^ uVar16) & 0x80808080 & (uVar27 ^ uVar16) + 0xfefefeff;
        if (uVar22 != 0) {
          local_e0 = iVar20;
          local_dc = uVar16;
          local_d8 = uVar12;
          local_d4 = uVar9;
          do {
            iVar20 = iVar29 + (uVar28 + ((uint)LZCOUNT(uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10
                                                       | (uVar22 >> 0x10 & 0xff) << 8 |
                                                       uVar22 >> 0x18) >> 3) & local_d8) * -0x28;
            local_d0 = uVar22;
            if (iVar10 == *(int *)(iVar20 + -0x20)) {
              iVar13 = thunk_FUN_016dd50a(local_bc,*(undefined4 *)(iVar20 + -0x24),iVar10);
              ppppppuVar6 = local_c8;
              uVar26 = local_cc;
              if (iVar13 == 0) {
                puVar11 = (undefined4 *)FUN_0134e538(iVar20 + -0x18,local_cc,local_c8);
                if (puVar11 != (undefined4 *)0x0) {
                  piVar15 = (int *)*puVar11;
                  do {
                    iVar10 = *piVar15;
                    bVar2 = (bool)hasExclusiveAccess(piVar15);
                  } while (!bVar2);
                  *piVar15 = iVar10 + 1;
                  if (iVar10 < 0) goto LAB_01348c18;
                  uVar26 = *puVar11;
                  *local_c0 = 0x8000000a;
                  local_c0[1] = uVar26;
                  FUN_01282570(puVar23);
                  FUN_01282570(local_c4);
                  if (*puVar23 == 8) {
                    DataMemoryBarrier(0xb);
                    do {
                      bVar2 = (bool)hasExclusiveAccess(puVar23);
                      if (bVar2) {
                        *puVar23 = 0;
                        goto LAB_013488a0;
                      }
                    } while (*puVar23 == 8);
                  }
                  ClearExclusiveLocal();
                  FUN_0127db4c(puVar23);
LAB_013488a0:
                  DataMemoryBarrier(0xb);
                  do {
                    iVar10 = *piVar17;
                    bVar2 = (bool)hasExclusiveAccess(piVar17);
                  } while (!bVar2);
                  *piVar17 = iVar10 + -1;
                  if (iVar10 == 1) {
                    DataMemoryBarrier(0xb);
                    FUN_013532e4(piVar17);
                    return;
                  }
                  return;
                }
                uVar14 = 0;
                if ((int)ppppppuVar6 < 0) {
LAB_013489e8:
                    /* WARNING: Subroutine does not return */
                  FUN_00600af4(uVar14,ppppppuVar6);
                }
                if (ppppppuVar6 == (undefined4 ******)0x0) {
                  ppppppuVar30 = (undefined4 ******)0x0;
                  uVar9 = 1;
                }
                else {
                  uVar9 = thunk_FUN_016d4a50(ppppppuVar6);
                  ppppppuVar30 = ppppppuVar6;
                  if (uVar9 == 0) {
                    uVar14 = 1;
                    goto LAB_013489e8;
                  }
                }
                FUN_016dd1aa(uVar9,uVar26,ppppppuVar6);
                uVar12 = local_c4;
                local_88 = ppppppuVar6;
                do {
                  iVar10 = *piVar17;
                  bVar2 = (bool)hasExclusiveAccess(piVar17);
                } while (!bVar2);
                *piVar17 = iVar10 + 1;
                local_90 = (undefined4 *******)ppppppuVar30;
                local_8c = uVar9;
                if (-1 < iVar10) {
                  piVar15 = (int *)FUN_0134e920(iVar20 + -0x18,&local_90,piVar17);
                  if (piVar15 != (int *)0x0) {
                    DataMemoryBarrier(0xb);
                    do {
                      iVar10 = *piVar15;
                      bVar2 = (bool)hasExclusiveAccess(piVar15);
                    } while (!bVar2);
                    *piVar15 = iVar10 + -1;
                    if (iVar10 == 1) {
                      DataMemoryBarrier(0xb);
                      FUN_013532e4();
                    }
                  }
                  goto LAB_01348af4;
                }
                goto LAB_01348c18;
              }
            }
            uVar22 = local_d0 - 1 & local_d0;
            uVar12 = local_d8;
            uVar16 = local_dc;
            iVar20 = local_e0;
            uVar9 = local_d4;
          } while (uVar22 != 0);
        }
        if ((uVar27 & 0x80808080 & uVar27 << 1) != 0) goto LAB_013488d4;
        iVar20 = iVar20 + 4;
        uVar28 = iVar20 + uVar28 & uVar12;
      } while( true );
    }
    local_c0[1] = local_8c;
    local_c0[0xb] = local_64;
    local_c0[0xc] = uStack_60;
    local_c0[0xd] = uStack_5c;
    local_c0[2] = local_88;
    local_c0[3] = local_84;
    local_c0[4] = local_80;
    local_c0[5] = local_7c;
    local_c0[6] = local_78;
    local_c0[7] = local_74;
    local_c0[8] = uStack_70;
    local_c0[9] = uStack_6c;
    local_c0[10] = uStack_68;
    uVar9 = local_c4;
    param_1 = local_c0;
    pppppppuVar25 = local_90;
  }
  else {
    piVar17 = (int *)*puVar11;
    do {
      iVar10 = *piVar17;
      bVar2 = (bool)hasExclusiveAccess(piVar17);
    } while (!bVar2);
    *piVar17 = iVar10 + 1;
    if (iVar10 < 0) {
LAB_01348c18:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1348c18);
      (*pcVar1)();
    }
    param_1[1] = *puVar11;
    pppppppuVar25 = (undefined4 *******)(undefined4 ******)0x8000000a;
  }
  *param_1 = pppppppuVar25;
  FUN_01282570(puVar23);
  FUN_01282570(uVar9);
  uVar9 = *puVar23;
  if ((uVar9 & 1) == 0) {
    if (*puVar23 == uVar9) {
      DataMemoryBarrier(0xb);
      bVar2 = (bool)hasExclusiveAccess(puVar23);
      if (bVar2) {
        *puVar23 = uVar9 - 0x14;
        return;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  }
  uVar9 = *puVar23;
  while ((uVar9 & 1) == 0) {
    uVar12 = *puVar23;
    if (uVar12 == uVar9) {
      uVar16 = uVar9 - 0x14;
      DataMemoryBarrier(0xb);
      bVar2 = (bool)hasExclusiveAccess(puVar23);
      uVar9 = uVar12;
      if (bVar2) {
        *puVar23 = uVar16;
        return;
      }
    }
    else {
      ClearExclusiveLocal();
      uVar9 = uVar12;
    }
  }
LAB_0127e62c:
  DataMemoryBarrier(0xb);
  piVar17 = DAT_018dd950;
  if (DAT_018dd950 == (int *)0x0) {
    piVar17 = (int *)FUN_01283a38();
  }
  uVar9 = (uint)((int)puVar23 * -0x61c88647) >> (-piVar17[2] & 0x1fU);
  if ((uint)piVar17[1] <= (uint)((int)puVar23 * -0x61c88647) >> (-piVar17[2] & 0x1fU)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar9,piVar17[1],&DAT_0188b980);
  }
  puVar32 = (uint *)(*piVar17 + uVar9 * 0x40);
  puVar24 = puVar32 + 6;
  if (*puVar24 == 0) {
    bVar2 = (bool)hasExclusiveAccess(puVar24);
    if (!bVar2) goto LAB_0127e6c0;
    *puVar24 = 1;
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0127e6c0:
    FUN_01286a10(puVar24);
  }
  if (DAT_018dd950 != piVar17) {
    DataMemoryBarrier(0xb);
    do {
      uVar9 = *puVar24;
      bVar2 = (bool)hasExclusiveAccess(puVar24);
    } while (!bVar2);
    *puVar24 = uVar9 - 1;
    if ((3 < uVar9) && ((uVar9 & 2) == 0)) {
      FUN_01286894(puVar24);
    }
    goto LAB_0127e62c;
  }
  uVar12 = puVar32[7];
  uVar9 = 0;
  puVar7 = (uint *)((uint)&local_100 | 4);
  local_100 = 0;
  local_9c = 0;
  if (uVar12 == 0) {
    local_108 = 0;
LAB_0127e918:
    uVar12 = *puVar23;
LAB_0127e91c:
    do {
      while (uVar16 = *puVar23, uVar16 != uVar12) {
        ClearExclusiveLocal();
        uVar12 = uVar16;
      }
      uVar28 = uVar12 & 0xfffffffe;
      bVar2 = (bool)hasExclusiveAccess(puVar23);
      uVar12 = uVar16;
    } while (!bVar2);
    *puVar23 = uVar28 + (local_108 | 0xffffffec);
    uVar26 = 0;
  }
  else {
    uVar16 = 0;
    local_108 = 0;
    uVar9 = 0;
    puVar31 = puVar32 + 7;
    do {
      puVar8 = (uint *)(uVar12 + 8);
      uVar28 = *puVar8;
      if (*(uint **)(uVar12 + 4) == puVar23) {
        if ((uVar16 & 8) != 0) {
          local_108 = 1;
          break;
        }
        uVar22 = *(uint *)(uVar12 + 0x10);
        if ((uVar16 & 4) == 0 || (uVar22 & 0xc) == 0) {
          *puVar31 = uVar28;
          if (puVar32[8] == uVar12) {
            puVar32[8] = uVar9;
          }
          if (local_9c < 9) {
            uVar21 = 8;
            uVar27 = local_9c;
            puVar8 = puVar7;
            puVar18 = &local_9c;
          }
          else {
            uVar27 = local_fc;
            puVar8 = local_f8[0];
            puVar18 = puVar7;
            uVar21 = local_9c;
          }
          if (uVar27 == uVar21) {
            FUN_012807e4(&local_100);
            uVar27 = local_fc;
            puVar8 = local_f8[0];
            puVar18 = puVar7;
          }
          uVar16 = uVar22 + uVar16;
          puVar8[uVar27 * 3] = uVar12;
          (puVar8 + uVar27 * 3)[1] = 0;
          *puVar18 = *puVar18 + 1;
          uVar12 = uVar9;
          puVar8 = puVar31;
        }
        else {
          local_108 = 1;
        }
      }
      uVar9 = uVar12;
      uVar12 = uVar28;
      puVar31 = puVar8;
    } while (uVar28 != 0);
    uVar9 = local_9c;
    if (local_9c < 9) {
      uVar12 = local_9c;
    }
    else {
      uVar12 = local_fc;
    }
    if (uVar12 == 0) goto LAB_0127e918;
    FUN_015f3b0c(&local_98,1);
    uVar12 = *puVar32;
    uVar28 = puVar32[1];
    bVar2 = (int)(uVar28 - (uStack_94 + (uVar12 < local_98))) < 0 !=
            (SBORROW4(uVar28,uStack_94) != SBORROW4(uVar28 - uStack_94,(uint)(uVar12 < local_98)));
    if (local_98 == uVar12 && uStack_94 == uVar28) {
      bVar2 = (undefined4 ******)puVar32[2] < local_90;
    }
    if (!bVar2) goto LAB_0127e918;
    uVar12 = puVar32[4] ^ puVar32[4] << 0xd;
    uVar12 = uVar12 ^ uVar12 >> 0x11;
    uVar12 = uVar12 ^ uVar12 << 5;
    puVar32[4] = uVar12;
    puVar19 = (undefined1 *)(uVar12 + (short)(uVar12 / 1000000) * -1000000 + (int)local_90);
    if (puVar19 < &DAT_3b9aca00) {
      uVar12 = local_98;
      uVar28 = uStack_94;
    }
    else {
      uVar28 = uStack_94 + (0xfffffffe < local_98);
      if ((int)((uStack_94 ^ uVar28) & ~uStack_94) < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
      }
      puVar19 = puVar19 + -1000000000;
      uVar12 = local_98 + 1;
    }
    *puVar32 = uVar12;
    puVar32[1] = uVar28;
    puVar32[2] = (uint)puVar19;
    uVar12 = *puVar23;
    do {
      while( true ) {
        uVar28 = (uVar16 - 0x14) + uVar12;
        if (uVar28 < uVar12 - 0x14) goto LAB_0127e91c;
        uVar22 = *puVar23;
        if (uVar22 == uVar12) break;
        ClearExclusiveLocal();
        uVar12 = uVar22;
      }
      bVar2 = (bool)hasExclusiveAccess(puVar23);
      uVar12 = uVar22;
    } while (!bVar2);
    *puVar23 = uVar28 & 0xfffffffe | local_108;
    uVar26 = 1;
  }
  uVar12 = local_9c;
  if (8 < uVar9) {
    uVar12 = *puVar7;
    puVar7 = local_f8[0];
  }
  if (uVar12 != 0) {
    puVar23 = puVar7 + uVar12 * 3;
    do {
      *(undefined4 *)(*puVar7 + 0xc) = uVar26;
      puVar11 = (undefined4 *)*puVar7;
      DataMemoryBarrier(0xb);
      *puVar11 = 0;
      puVar7[1] = 1;
      puVar7[2] = (uint)puVar11;
      puVar7 = puVar7 + 3;
    } while (puVar7 != puVar23);
  }
  DataMemoryBarrier(0xb);
  do {
    uVar9 = *puVar24;
    bVar2 = (bool)hasExclusiveAccess(puVar24);
  } while (!bVar2);
  *puVar24 = uVar9 - 1;
  if ((3 < uVar9) && ((uVar9 & 2) == 0)) {
    FUN_01286894(puVar24);
  }
  uVar12 = local_9c;
  FUN_016dd1aa(&local_90,local_f8,0x5c);
  uVar9 = local_fc;
  if (uVar12 < 9) {
    uVar9 = uVar12;
  }
  local_2c = uVar9;
  if (uVar9 == 0) {
    if (8 < uVar12) goto LAB_0127eb04;
  }
  else {
    if (8 < uVar12) {
      pppppppuVar25 = local_90;
      do {
        FUN_016d6968(0xf0,pppppppuVar25[2],0x81,1);
        pppppppuVar25 = pppppppuVar25 + 3;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
LAB_0127eb04:
      thunk_FUN_016d3fb4(local_90);
      return;
    }
    uVar12 = 0;
    puVar23 = &local_8c;
    do {
      uVar12 = uVar12 + 1;
      local_30 = uVar12;
      FUN_016d6968(0xf0,*puVar23,0x81,1);
      puVar23 = puVar23 + 3;
    } while (uVar9 != uVar12);
  }
  iVar20 = 0;
  iVar10 = uVar9 * 0xc;
  do {
    uVar9 = uVar9 + 1;
    if (iVar20 == 0) {
      return;
    }
    local_30 = uVar9;
    iVar29 = iVar20 + iVar10;
    iVar20 = iVar20 + 0xc;
  } while (*(int *)((int)&local_90 + iVar29) != 2);
  return;
LAB_013488d4:
  local_90 = &local_90;
  local_48 = local_b8;
  local_58 = local_bc;
  local_8c = 0;
  local_54 = iVar10;
  uVar3 = ZEXT48(local_90);
  lVar4 = ZEXT48(local_90) * (ulonglong)(DAT_018dd94c ^ 0x3707344);
  uVar12 = (uint)lVar4 ^ (uint)(uVar3 * 0x13198a2e >> 0x20);
  DataMemoryBarrier(0xb);
  local_50 = pppppppuVar25;
  local_4c = uVar9;
  DAT_018dd94c = uVar12;
  if (DAT_018dd920 != '\x02') {
    FUN_0100e96c();
  }
  iVar10 = thunk_FUN_016d4a50(0x48);
  ppppppuVar6 = local_c8;
  if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x48);
  }
  uVar9 = (uint)((ulonglong)lVar4 >> 0x20) ^ (uint)(uVar3 * 0x13198a2e);
  uVar3 = (ulonglong)uVar12 * 0x299f31d0 ^ (ulonglong)uVar9 * 0xa4093822;
  uVar5 = (ulonglong)uVar12 * 0xa4093822 ^ (ulonglong)uVar9 * 0x299f31d0;
  local_2c = (uint)(uVar3 >> 0x20) ^ (uint)uVar5;
  local_40 = (undefined4 ******)(iVar10 + 0x40);
  *local_40 = (undefined4 *****)0xffffffff;
  local_30 = (uint)uVar3 ^ (uint)(uVar5 >> 0x20);
  uVar26 = 0;
  *(undefined4 *)(iVar10 + 0x44) = 0xffffffff;
  local_34 = 0;
  local_38 = (undefined4 ******)0x3;
  local_3c = 3;
  if ((int)local_c8 < 0) {
LAB_013489cc:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar26,ppppppuVar6);
  }
  if (local_c8 == (undefined4 ******)0x0) {
    ppppppuVar30 = (undefined4 ******)0x0;
    uVar9 = 1;
  }
  else {
    uVar9 = thunk_FUN_016d4a50(local_c8);
    ppppppuVar30 = ppppppuVar6;
    if (uVar9 == 0) {
      uVar26 = 1;
      goto LAB_013489cc;
    }
  }
  FUN_016dd1aa(uVar9,local_cc,ppppppuVar6);
  local_88 = ppppppuVar6;
  do {
    iVar10 = *piVar17;
    bVar2 = (bool)hasExclusiveAccess(piVar17);
  } while (!bVar2);
  *piVar17 = iVar10 + 1;
  local_90 = (undefined4 *******)ppppppuVar30;
  local_8c = uVar9;
  if (-1 < iVar10) {
    piVar15 = (int *)FUN_0134e920(&local_40,&local_90,piVar17);
    if (piVar15 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar10 = *piVar15;
        bVar2 = (bool)hasExclusiveAccess(piVar15);
      } while (!bVar2);
      *piVar15 = iVar10 + -1;
      if (iVar10 == 1) {
        DataMemoryBarrier(0xb);
        FUN_013532e4();
      }
    }
    local_90 = (undefined4 *******)local_40;
    local_8c = local_3c;
    local_88 = local_38;
    local_84 = local_34;
    local_80 = local_30;
    local_7c = local_2c;
    FUN_0134ec5c(&local_58,&local_90);
    uVar12 = local_c4;
LAB_01348af4:
    *local_c0 = 0x8000000a;
    local_c0[1] = piVar17;
    FUN_01282570(puVar23);
    FUN_01282570(uVar12);
    if (*puVar23 == 8) {
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(puVar23);
        if (bVar2) {
          *puVar23 = 0;
          return;
        }
      } while (*puVar23 == 8);
    }
    ClearExclusiveLocal();
    FUN_0127db4c(puVar23);
    return;
  }
  goto LAB_01348c18;
}

