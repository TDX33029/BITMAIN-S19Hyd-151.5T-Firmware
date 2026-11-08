// FUN_016058bc @ 016058bc size=2240 calls_out=4 calls_in=1
// strings: 

void FUN_016058bc(int param_1,int param_2,int param_3,uint param_4,int param_5)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  ulonglong uVar5;
  uint uVar6;
  ushort *puVar7;
  int iVar8;
  ushort *puVar9;
  int iVar10;
  byte *pbVar11;
  uint *puVar12;
  undefined2 *puVar13;
  ushort uVar14;
  int iVar15;
  undefined *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint **ppuVar21;
  uint uVar22;
  int iVar23;
  bool bVar24;
  ulonglong uVar25;
  uint local_15f8;
  ushort *local_15f4;
  uint local_15f0 [33];
  uint uStack_156c;
  int aiStack_1568 [16];
  ushort local_1528 [1152];
  uint *local_c28 [2];
  int local_c20;
  uint local_c1c;
  int local_c18;
  uint local_828 [256];
  uint local_428 [257];
  
  FUN_01bed93e(local_15f0,0,0x84);
  FUN_01bed93e(aiStack_1568,0,0x40);
  if (param_5 != 0) {
    pbVar11 = (byte *)(param_1 + param_2 * 0x120 + 0xd80);
    iVar15 = param_3;
    do {
      uVar6 = (uint)*pbVar11;
      if (0x20 < uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar6,0x21,&DAT_01d05900);
      }
      pbVar11 = pbVar11 + 1;
      iVar15 = iVar15 + -1;
      local_15f0[uVar6] = local_15f0[uVar6] + 1;
    } while (iVar15 != 0);
    goto LAB_01605fa4;
  }
  FUN_01bed93e(local_1528,0,0x480);
  FUN_01bed93e(local_1528 + 0x240,0,0x480);
  iVar15 = 0;
  puVar7 = (ushort *)(param_1 + param_2 * 0x240);
  uVar6 = 0;
  do {
    uVar14 = *puVar7;
    uVar18 = uVar6;
    if (uVar14 != 0) {
      if (8 < uVar6 >> 5) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar6,0x120,&DAT_01d058e0);
      }
      uVar18 = uVar6 + 1;
      local_1528[uVar6 * 2 + 1] = (ushort)iVar15;
      local_1528[uVar6 * 2] = uVar14;
    }
    iVar15 = iVar15 + 1;
    puVar7 = puVar7 + 1;
    uVar6 = uVar18;
  } while (param_3 != iVar15);
  if (0x120 < uVar18) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar18,0x120,&DAT_01d058a0);
  }
  ppuVar21 = local_c28;
  local_15f8 = 0;
  FUN_01bed93e(ppuVar21,0,0x800);
  iVar15 = uVar18 * 4;
  uVar6 = 0;
  if (uVar18 != 0) {
    iVar8 = iVar15;
    puVar7 = local_1528;
    do {
      iVar8 = iVar8 + -4;
      uVar14 = *puVar7 >> 8;
      uVar6 = *puVar7 & 0xff;
      uVar19 = local_828[uVar14];
      ppuVar21[uVar6] = (uint *)((int)ppuVar21[uVar6] + 1);
      local_828[uVar14] = uVar19 + 1;
      puVar7 = puVar7 + 2;
    } while (iVar8 != 0);
    uVar6 = local_828[0];
  }
  iVar8 = 0;
  puVar7 = local_1528;
  puVar9 = local_1528 + 0x240;
  bVar24 = uVar18 == uVar6;
  do {
    local_15f4 = puVar9;
    puVar9 = puVar7;
    if (iVar8 == 0x800) {
      local_15f4 = puVar9;
      break;
    }
    uVar6 = 0;
    FUN_01bed93e(local_428,0,0x400);
    iVar10 = 0;
    do {
      puVar12 = ppuVar21[iVar10];
      local_428[iVar10] = uVar6;
      iVar10 = iVar10 + 1;
      uVar6 = (int)puVar12 + uVar6;
    } while (iVar10 != 0x100);
    if (uVar18 != 0) {
      puVar7 = puVar9;
      do {
        uVar14 = *puVar7;
        uVar19 = uVar14 >> ((local_15f8 & 1) << 3) & 0xff;
        uVar6 = local_428[uVar19];
        if (uVar18 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar6,uVar18,&DAT_01d05910);
        }
        local_428[uVar19] = uVar6 + 1;
        uVar1 = puVar7[1];
        local_15f4[uVar6 * 2] = uVar14;
        puVar7 = puVar7 + 2;
        (local_15f4 + uVar6 * 2)[1] = uVar1;
      } while (puVar7 != puVar9 + uVar18 * 2);
    }
    iVar8 = iVar8 + 0x400;
    ppuVar21 = ppuVar21 + 0x100;
    local_15f8 = local_15f8 + 1;
    bVar4 = !bVar24;
    puVar7 = local_15f4;
    bVar24 = true;
  } while (bVar4);
  if (uVar18 != 0) {
    if (uVar18 == 1) {
      *local_15f4 = 1;
    }
    else {
      *local_15f4 = *local_15f4 + local_15f4[2];
      uVar6 = uVar18 - 1;
      if (uVar6 < 2) {
        uVar19 = 0;
        local_15f4[uVar18 * 2 + -4] = 0;
      }
      else {
        uVar17 = 0;
        uVar20 = 2;
        uVar22 = 2;
        puVar7 = local_15f4;
        do {
          puVar7 = puVar7 + 2;
          uVar19 = uVar20 - 1;
          if (uVar22 < uVar18) {
            if (uVar18 <= uVar17) {
              puVar16 = &UNK_01d059e0;
              uVar19 = uVar17;
              goto LAB_01606174;
            }
            iVar8 = uVar22 * 2;
            if (local_15f4[uVar17 * 2] < local_15f4[iVar8]) goto LAB_01605bb4;
            if (uVar18 <= uVar19) {
              puVar16 = &DAT_01d059f0;
              goto LAB_01606174;
            }
            uVar22 = uVar22 + 1;
            *puVar7 = local_15f4[iVar8];
          }
          else {
LAB_01605bb4:
            if (uVar18 <= uVar17) {
              puVar16 = &UNK_01d05a00;
              uVar19 = uVar17;
              goto LAB_01606174;
            }
            if (uVar18 <= uVar19) {
              puVar16 = &DAT_01d05a10;
              goto LAB_01606174;
            }
            iVar8 = uVar17 * 2;
            uVar17 = uVar17 + 1;
            *puVar7 = local_15f4[iVar8];
            local_15f4[iVar8] = (ushort)uVar19;
          }
          if (uVar22 < uVar18) {
            if (uVar17 < uVar19) {
              if (uVar18 <= uVar17) {
                puVar16 = &UNK_01d05a20;
                uVar19 = uVar17;
                goto LAB_01606174;
              }
              if (local_15f4[uVar17 * 2] < local_15f4[uVar22 * 2]) goto LAB_01605c1c;
            }
            if (uVar18 <= uVar19) {
              puVar16 = &DAT_01d05a30;
              goto LAB_01606174;
            }
            iVar8 = uVar22 * 2;
            uVar22 = uVar22 + 1;
            *puVar7 = local_15f4[iVar8] + *puVar7;
          }
          else {
LAB_01605c1c:
            if (uVar18 <= uVar19) {
              puVar16 = &DAT_01d05a40;
              goto LAB_01606174;
            }
            if (uVar18 <= uVar17) {
              puVar16 = &UNK_01d05a50;
              uVar19 = uVar17;
              goto LAB_01606174;
            }
            iVar8 = uVar17 * 2;
            uVar17 = uVar17 + 1;
            *puVar7 = local_15f4[iVar8] + *puVar7;
            local_15f4[iVar8] = (ushort)uVar19;
          }
          uVar20 = uVar20 + 1;
        } while (uVar18 != uVar20);
        uVar17 = uVar18 - 2;
        local_15f4[uVar17 * 2] = 0;
        uVar19 = 0;
        if (uVar17 != 0) {
          uVar20 = uVar17;
          puVar7 = local_15f4 + uVar18 * 2 + -6;
          do {
            uVar19 = (uint)*puVar7;
            if (uVar18 <= uVar19) {
              puVar16 = &UNK_01d059d0;
              goto LAB_01606174;
            }
            uVar20 = uVar20 - 1;
            *puVar7 = local_15f4[uVar19 * 2] + 1;
            puVar7 = puVar7 + -2;
          } while (uVar20 != 0);
          uVar19 = uVar17;
        }
      }
      iVar8 = 1;
      uVar14 = 0;
      do {
        if ((int)uVar19 < 0) {
          iVar10 = 0;
        }
        else {
          if (uVar18 <= uVar19) {
            puVar16 = &DAT_01d059b0;
LAB_01606174:
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar19,uVar18,puVar16);
          }
          iVar23 = uVar19 + 1;
          iVar10 = 0;
          puVar7 = local_15f4 + uVar19 * 2;
          do {
            if (*puVar7 != uVar14) goto LAB_01605d30;
            iVar10 = iVar10 + 1;
            bVar24 = uVar19 != 0;
            uVar19 = uVar19 - 1;
            puVar7 = puVar7 + -2;
          } while (bVar24);
          uVar19 = 0xffffffff;
          iVar10 = iVar23;
        }
LAB_01605d30:
        if (iVar10 < iVar8) {
          puVar7 = local_15f4 + uVar6 * 2;
          do {
            if (uVar18 <= uVar6) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar6,uVar18,&DAT_01d059c0);
            }
            iVar8 = iVar8 + -1;
            *puVar7 = uVar14;
            uVar6 = uVar6 - 1;
            puVar7 = puVar7 + -2;
          } while (iVar10 < iVar8);
        }
        iVar8 = iVar10 * 2;
        uVar14 = uVar14 + 1;
      } while (0 < iVar8);
      if (uVar18 == 0) goto LAB_01605e6c;
    }
    puVar7 = local_15f4;
    do {
      uVar6 = (uint)*puVar7;
      if (0x20 < uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar6,0x21,&DAT_01d058d0);
      }
      puVar7 = puVar7 + 2;
      iVar15 = iVar15 + -4;
      local_15f0[uVar6] = local_15f0[uVar6] + 1;
    } while (iVar15 != 0);
    if (1 < uVar18) {
      iVar15 = 0;
      uVar6 = param_4;
      do {
        iVar8 = uVar6 * 4;
        uVar6 = uVar6 + 1;
        iVar15 = *(int *)(((uint)local_15f0 | 4) + iVar8) + iVar15;
      } while (uVar6 != 0x20);
      iVar8 = param_4 << 4;
      uVar19 = 0;
      local_15f0[param_4] = local_15f0[param_4] + iVar15;
      uVar6 = 0;
      do {
        iVar8 = iVar8 + -0x10;
        uVar6 = uVar6 + (local_15f0[param_4 - uVar19] << (uVar19 & 0xff));
        uVar19 = uVar19 + 1;
      } while (iVar8 != 0);
      if ((uint)(1 << (param_4 & 0xff)) < uVar6) {
        uVar19 = 1 << (param_4 & 0xff);
        do {
          uVar19 = uVar19 + 1;
          local_15f0[param_4] = local_15f0[param_4] - 1;
          uVar17 = param_4;
          do {
            uVar20 = uVar17;
            if (uVar20 < 2) goto LAB_01605e64;
            uVar17 = uVar20 - 1;
          } while (local_15f0[uVar20 - 1] == 0);
          local_15f0[uVar17] = local_15f0[uVar20 - 1] - 1;
          if (uVar17 == 0x20) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(0x21,0x21,&DAT_01d059a0);
          }
          local_15f0[uVar20] = local_15f0[uVar20] + 2;
LAB_01605e64:
        } while (uVar19 != uVar6);
      }
    }
  }
LAB_01605e6c:
  iVar15 = param_1 + param_2 * 0x120 + 0xd80;
  FUN_01bed93e(iVar15,0,0x120);
  FUN_01bed93e(param_1 + param_2 * 0x240 + 0x6c0,0,0x240);
  local_c1c = param_4 + 1;
  local_c18 = 1;
  local_c20 = 0;
  local_c28[1] = &uStack_156c;
  local_c28[0] = local_15f0;
  uVar6 = uVar18;
  while( true ) {
    uVar5 = CONCAT44(local_c28[0],local_c20);
    if (local_c18 == 0) {
      uVar25 = (ulonglong)local_c1c;
      if (local_c1c != 0) {
        local_c1c = local_c1c - 1;
        uVar25 = (ulonglong)local_c1c;
        if (local_c28[0] != local_c28[1]) {
          local_c28[0] = local_c28[0] + 1;
          local_c20 = local_c20 + 1;
          uVar25 = uVar5;
        }
      }
    }
    else {
      local_c18 = 0;
      uVar25 = FUN_0160637c(local_c28);
    }
    puVar12 = (uint *)(uVar25 >> 0x20);
    if (puVar12 == (uint *)0x0) break;
    uVar19 = *puVar12;
    if ((uVar18 < uVar6) || (uVar6 < uVar19)) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(uVar6 - uVar19,uVar6,uVar18,&DAT_01d058b0);
    }
    if (uVar19 != 0) {
      iVar8 = uVar19 << 2;
      do {
        uVar14 = *(ushort *)((int)local_15f4 + ((uVar6 * 4 + 2) - iVar8));
        if (8 < uVar14 >> 5) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c((uint)uVar14,0x120,&DAT_01d058c0);
        }
        iVar8 = iVar8 + -4;
        *(char *)(iVar15 + (uint)uVar14) = (char)uVar25;
      } while (iVar8 != 0);
    }
    uVar6 = uVar6 - uVar19;
  }
LAB_01605fa4:
  iVar15 = 0;
  uVar6 = 2;
  aiStack_1568[1] = 0;
  do {
    iVar15 = (local_15f0[uVar6 - 1] + iVar15) * 2;
    aiStack_1568[uVar6] = iVar15;
    if (param_4 <= uVar6) break;
    uVar6 = uVar6 + 1;
  } while (uVar6 <= param_4);
  puVar13 = (undefined2 *)(param_1 + param_2 * 0x240 + 0x6c0);
  pbVar11 = (byte *)(param_1 + param_2 * 0x120 + 0xd80);
  do {
    uVar6 = (uint)*pbVar11;
    if (uVar6 != 0) {
      if (0xf < uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar6,0x10,&DAT_01d058f0);
      }
      iVar15 = aiStack_1568[uVar6];
      bVar2 = (byte)iVar15;
      bVar3 = (byte)((uint)iVar15 >> 8);
      aiStack_1568[uVar6] = iVar15 + 1;
      *puVar13 = (short)((((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 |
                                            bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1) << 1 |
                                          bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                                        bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x18 |
                          (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                           bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                         bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                       bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x10) >> 0x10) >>
                        (-uVar6 & 0xf));
    }
    param_3 = param_3 + -1;
    puVar13 = puVar13 + 1;
    pbVar11 = pbVar11 + 1;
  } while (param_3 != 0);
  return;
}

